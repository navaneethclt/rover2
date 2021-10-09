/********************************************************************************
** Form generated from reading UI file 'plot_docker_toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_DOCKER_TOOLBAR_H
#define UI_PLOT_DOCKER_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DraggableToolbar
{
public:
    QHBoxLayout *mainHorizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widgetButtons;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonSplitHorizontal;
    QPushButton *buttonSplitVertical;
    QPushButton *buttonFullscreen;
    QPushButton *buttonClose;

    void setupUi(QWidget *DraggableToolbar)
    {
        if (DraggableToolbar->objectName().isEmpty())
            DraggableToolbar->setObjectName(QStringLiteral("DraggableToolbar"));
        DraggableToolbar->resize(742, 30);
        DraggableToolbar->setMinimumSize(QSize(0, 28));
        DraggableToolbar->setMaximumSize(QSize(16777215, 30));
        mainHorizontalLayout = new QHBoxLayout(DraggableToolbar);
        mainHorizontalLayout->setSpacing(0);
        mainHorizontalLayout->setObjectName(QStringLiteral("mainHorizontalLayout"));
        mainHorizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        mainHorizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(DraggableToolbar);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        mainHorizontalLayout->addWidget(label);

        widgetButtons = new QWidget(DraggableToolbar);
        widgetButtons->setObjectName(QStringLiteral("widgetButtons"));
        widgetButtons->setMinimumSize(QSize(80, 24));
        widgetButtons->setMaximumSize(QSize(80, 24));
        horizontalLayout = new QHBoxLayout(widgetButtons);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonSplitHorizontal = new QPushButton(widgetButtons);
        buttonSplitHorizontal->setObjectName(QStringLiteral("buttonSplitHorizontal"));
        buttonSplitHorizontal->setMinimumSize(QSize(24, 24));
        buttonSplitHorizontal->setMaximumSize(QSize(24, 24));
        buttonSplitHorizontal->setFocusPolicy(Qt::NoFocus);
        buttonSplitHorizontal->setIconSize(QSize(20, 20));
        buttonSplitHorizontal->setFlat(true);

        horizontalLayout->addWidget(buttonSplitHorizontal);

        buttonSplitVertical = new QPushButton(widgetButtons);
        buttonSplitVertical->setObjectName(QStringLiteral("buttonSplitVertical"));
        buttonSplitVertical->setMinimumSize(QSize(24, 24));
        buttonSplitVertical->setMaximumSize(QSize(24, 24));
        buttonSplitVertical->setFocusPolicy(Qt::NoFocus);
        buttonSplitVertical->setIconSize(QSize(20, 20));
        buttonSplitVertical->setFlat(true);

        horizontalLayout->addWidget(buttonSplitVertical);

        buttonFullscreen = new QPushButton(widgetButtons);
        buttonFullscreen->setObjectName(QStringLiteral("buttonFullscreen"));
        buttonFullscreen->setMinimumSize(QSize(24, 24));
        buttonFullscreen->setMaximumSize(QSize(24, 24));
        buttonFullscreen->setFocusPolicy(Qt::NoFocus);
        buttonFullscreen->setIconSize(QSize(20, 20));
        buttonFullscreen->setCheckable(false);
        buttonFullscreen->setFlat(true);

        horizontalLayout->addWidget(buttonFullscreen);


        mainHorizontalLayout->addWidget(widgetButtons);

        buttonClose = new QPushButton(DraggableToolbar);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setMinimumSize(QSize(24, 24));
        buttonClose->setMaximumSize(QSize(24, 24));
        buttonClose->setFocusPolicy(Qt::NoFocus);
        buttonClose->setIconSize(QSize(20, 20));
        buttonClose->setFlat(true);

        mainHorizontalLayout->addWidget(buttonClose);

        mainHorizontalLayout->setStretch(1, 1);

        retranslateUi(DraggableToolbar);

        QMetaObject::connectSlotsByName(DraggableToolbar);
    } // setupUi

    void retranslateUi(QWidget *DraggableToolbar)
    {
        DraggableToolbar->setWindowTitle(QApplication::translate("DraggableToolbar", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("DraggableToolbar", "TextLabel", Q_NULLPTR));
        buttonSplitHorizontal->setText(QString());
        buttonSplitVertical->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonFullscreen->setToolTip(QApplication::translate("DraggableToolbar", "<html><head/><body><p>Fullscreen</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonFullscreen->setText(QApplication::translate("DraggableToolbar", "F", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonClose->setToolTip(QApplication::translate("DraggableToolbar", "<html><head/><body><p>Close Plot Area</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonClose->setText(QApplication::translate("DraggableToolbar", "C", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DraggableToolbar: public Ui_DraggableToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_DOCKER_TOOLBAR_H
