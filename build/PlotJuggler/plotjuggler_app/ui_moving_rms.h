/********************************************************************************
** Form generated from reading UI file 'moving_rms.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVING_RMS_H
#define UI_MOVING_RMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MovingRMS
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QSpinBox *spinBoxSamples;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MovingRMS)
    {
        if (MovingRMS->objectName().isEmpty())
            MovingRMS->setObjectName(QStringLiteral("MovingRMS"));
        MovingRMS->resize(400, 300);
        verticalLayout = new QVBoxLayout(MovingRMS);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MovingRMS);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        spinBoxSamples = new QSpinBox(MovingRMS);
        spinBoxSamples->setObjectName(QStringLiteral("spinBoxSamples"));
        spinBoxSamples->setMaximumSize(QSize(100, 16777215));
        spinBoxSamples->setMinimum(1);
        spinBoxSamples->setMaximum(1000);
        spinBoxSamples->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxSamples);

        label_2 = new QLabel(MovingRMS);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MovingRMS);

        QMetaObject::connectSlotsByName(MovingRMS);
    } // setupUi

    void retranslateUi(QWidget *MovingRMS)
    {
        MovingRMS->setWindowTitle(QApplication::translate("MovingRMS", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MovingRMS", "Select the size of the window", Q_NULLPTR));
        label_2->setText(QApplication::translate("MovingRMS", "Samples count:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MovingRMS: public Ui_MovingRMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVING_RMS_H
