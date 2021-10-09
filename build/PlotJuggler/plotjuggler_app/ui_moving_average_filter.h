/********************************************************************************
** Form generated from reading UI file 'moving_average_filter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVING_AVERAGE_FILTER_H
#define UI_MOVING_AVERAGE_FILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MovingAverageFilter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QSpinBox *spinBoxSamples;
    QLabel *label_2;
    QCheckBox *checkBoxTimeOffset;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MovingAverageFilter)
    {
        if (MovingAverageFilter->objectName().isEmpty())
            MovingAverageFilter->setObjectName(QStringLiteral("MovingAverageFilter"));
        MovingAverageFilter->resize(400, 300);
        verticalLayout = new QVBoxLayout(MovingAverageFilter);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MovingAverageFilter);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        spinBoxSamples = new QSpinBox(MovingAverageFilter);
        spinBoxSamples->setObjectName(QStringLiteral("spinBoxSamples"));
        spinBoxSamples->setMaximumSize(QSize(100, 16777215));
        spinBoxSamples->setMinimum(1);
        spinBoxSamples->setMaximum(1000);
        spinBoxSamples->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxSamples);

        label_2 = new QLabel(MovingAverageFilter);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        verticalLayout->addLayout(formLayout);

        checkBoxTimeOffset = new QCheckBox(MovingAverageFilter);
        checkBoxTimeOffset->setObjectName(QStringLiteral("checkBoxTimeOffset"));

        verticalLayout->addWidget(checkBoxTimeOffset);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MovingAverageFilter);

        QMetaObject::connectSlotsByName(MovingAverageFilter);
    } // setupUi

    void retranslateUi(QWidget *MovingAverageFilter)
    {
        MovingAverageFilter->setWindowTitle(QApplication::translate("MovingAverageFilter", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MovingAverageFilter", "Select the size of the window", Q_NULLPTR));
        label_2->setText(QApplication::translate("MovingAverageFilter", "Samples count:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxTimeOffset->setToolTip(QApplication::translate("MovingAverageFilter", "<html><head/><body><p>The Moving Average filter mathematically introduce a &quot;delay&quot; in your signal.</p><p>Checking this, the signal will look &quot;centered&quot;, because you look at (N/2) samples into the past and (N/2) sample into the future.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxTimeOffset->setText(QApplication::translate("MovingAverageFilter", "Compensate time offset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MovingAverageFilter: public Ui_MovingAverageFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVING_AVERAGE_FILTER_H
