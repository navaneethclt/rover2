/********************************************************************************
** Form generated from reading UI file 'outlier_removal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTLIER_REMOVAL_H
#define UI_OUTLIER_REMOVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutlierRemovalFilter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxFactor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OutlierRemovalFilter)
    {
        if (OutlierRemovalFilter->objectName().isEmpty())
            OutlierRemovalFilter->setObjectName(QStringLiteral("OutlierRemovalFilter"));
        OutlierRemovalFilter->resize(400, 300);
        verticalLayout = new QVBoxLayout(OutlierRemovalFilter);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OutlierRemovalFilter);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(OutlierRemovalFilter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 10, -1, -1);
        label_2 = new QLabel(OutlierRemovalFilter);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBoxFactor = new QDoubleSpinBox(OutlierRemovalFilter);
        spinBoxFactor->setObjectName(QStringLiteral("spinBoxFactor"));
        spinBoxFactor->setMaximumSize(QSize(120, 16777215));
        spinBoxFactor->setDecimals(1);
        spinBoxFactor->setMinimum(10);
        spinBoxFactor->setMaximum(100000);
        spinBoxFactor->setValue(100);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxFactor);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(OutlierRemovalFilter);

        QMetaObject::connectSlotsByName(OutlierRemovalFilter);
    } // setupUi

    void retranslateUi(QWidget *OutlierRemovalFilter)
    {
        OutlierRemovalFilter->setWindowTitle(QApplication::translate("OutlierRemovalFilter", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("OutlierRemovalFilter", "Remove outliers:", Q_NULLPTR));
        label_3->setText(QApplication::translate("OutlierRemovalFilter", "Outlier are detected using the difference between the current 1st order derivative and the previous one.", Q_NULLPTR));
        label_2->setText(QApplication::translate("OutlierRemovalFilter", "Max ratio", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OutlierRemovalFilter: public Ui_OutlierRemovalFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTLIER_REMOVAL_H
