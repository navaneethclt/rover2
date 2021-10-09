#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/rover/catkin_ws2/src/vision_opencv/cv_bridge"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/rover/catkin_ws2/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/rover/catkin_ws2/install/lib/python2.7/dist-packages:/home/rover/catkin_ws2/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/rover/catkin_ws2/build" \
    "/usr/bin/python2" \
    "/home/rover/catkin_ws2/src/vision_opencv/cv_bridge/setup.py" \
    egg_info --egg-base /home/rover/catkin_ws2/build/vision_opencv/cv_bridge \
    build --build-base "/home/rover/catkin_ws2/build/vision_opencv/cv_bridge" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/rover/catkin_ws2/install" --install-scripts="/home/rover/catkin_ws2/install/bin"
