/********************************************************************************
** Form generated from reading UI file 'scale_transform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALE_TRANSFORM_H
#define UI_SCALE_TRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScaleTransform
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEditTimeOffset;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEditValueOffset;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditValueScale;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *buttonRadDeg;
    QPushButton *buttonDegRad;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ScaleTransform)
    {
        if (ScaleTransform->objectName().isEmpty())
            ScaleTransform->setObjectName(QStringLiteral("ScaleTransform"));
        ScaleTransform->resize(400, 300);
        verticalLayout = new QVBoxLayout(ScaleTransform);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(ScaleTransform);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(ScaleTransform);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(label_5);

        lineEditTimeOffset = new QLineEdit(ScaleTransform);
        lineEditTimeOffset->setObjectName(QStringLiteral("lineEditTimeOffset"));
        lineEditTimeOffset->setMaximumSize(QSize(80, 16777215));
        lineEditTimeOffset->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(lineEditTimeOffset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(ScaleTransform);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(label_6);

        lineEditValueOffset = new QLineEdit(ScaleTransform);
        lineEditValueOffset->setObjectName(QStringLiteral("lineEditValueOffset"));
        lineEditValueOffset->setMaximumSize(QSize(80, 16777215));
        lineEditValueOffset->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_3->addWidget(lineEditValueOffset);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        label = new QLabel(ScaleTransform);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(ScaleTransform);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(label_4);

        lineEditValueScale = new QLineEdit(ScaleTransform);
        lineEditValueScale->setObjectName(QStringLiteral("lineEditValueScale"));
        lineEditValueScale->setMaximumSize(QSize(80, 16777215));
        lineEditValueScale->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(lineEditValueScale);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonRadDeg = new QPushButton(ScaleTransform);
        buttonRadDeg->setObjectName(QStringLiteral("buttonRadDeg"));
        buttonRadDeg->setMaximumSize(QSize(160, 80));
        buttonRadDeg->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonRadDeg, 0, 1, 1, 1);

        buttonDegRad = new QPushButton(ScaleTransform);
        buttonDegRad->setObjectName(QStringLiteral("buttonDegRad"));
        buttonDegRad->setMaximumSize(QSize(160, 16777215));
        buttonDegRad->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonDegRad, 1, 1, 1, 1);

        label_3 = new QLabel(ScaleTransform);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ScaleTransform);

        QMetaObject::connectSlotsByName(ScaleTransform);
    } // setupUi

    void retranslateUi(QWidget *ScaleTransform)
    {
        ScaleTransform->setWindowTitle(QApplication::translate("ScaleTransform", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("ScaleTransform", "Apply offset", Q_NULLPTR));
        label_5->setText(QApplication::translate("ScaleTransform", "Time offset", Q_NULLPTR));
        lineEditTimeOffset->setText(QApplication::translate("ScaleTransform", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("ScaleTransform", "Value offset:", Q_NULLPTR));
        lineEditValueOffset->setText(QApplication::translate("ScaleTransform", "0", Q_NULLPTR));
        label->setText(QApplication::translate("ScaleTransform", "Scale (multiply value)", Q_NULLPTR));
        label_4->setText(QApplication::translate("ScaleTransform", "Value multiplier:", Q_NULLPTR));
        lineEditValueScale->setText(QApplication::translate("ScaleTransform", "1.0", Q_NULLPTR));
        buttonRadDeg->setText(QApplication::translate("ScaleTransform", "Rad to Deg", Q_NULLPTR));
        buttonDegRad->setText(QApplication::translate("ScaleTransform", "Deg to Rad", Q_NULLPTR));
        label_3->setText(QApplication::translate("ScaleTransform", "Usefull constants:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScaleTransform: public Ui_ScaleTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALE_TRANSFORM_H
