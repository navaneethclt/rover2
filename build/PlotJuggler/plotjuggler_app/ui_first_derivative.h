/********************************************************************************
** Form generated from reading UI file 'first_derivative.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_DERIVATIVE_H
#define UI_FIRST_DERIVATIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstDerivariveForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QFormLayout *formLayout;
    QRadioButton *radioActual;
    QLabel *label_2;
    QRadioButton *radioCustom;
    QLineEdit *lineEditCustom;
    QPushButton *buttonCompute;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FirstDerivariveForm)
    {
        if (FirstDerivariveForm->objectName().isEmpty())
            FirstDerivariveForm->setObjectName(QStringLiteral("FirstDerivariveForm"));
        FirstDerivariveForm->resize(361, 240);
        FirstDerivariveForm->setMinimumSize(QSize(200, 0));
        verticalLayout = new QVBoxLayout(FirstDerivariveForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(FirstDerivariveForm);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        frame = new QFrame(FirstDerivariveForm);
        frame->setObjectName(QStringLiteral("frame"));
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        radioActual = new QRadioButton(frame);
        radioActual->setObjectName(QStringLiteral("radioActual"));
        radioActual->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, radioActual);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        radioCustom = new QRadioButton(frame);
        radioCustom->setObjectName(QStringLiteral("radioCustom"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioCustom);

        lineEditCustom = new QLineEdit(frame);
        lineEditCustom->setObjectName(QStringLiteral("lineEditCustom"));
        lineEditCustom->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditCustom);

        buttonCompute = new QPushButton(frame);
        buttonCompute->setObjectName(QStringLiteral("buttonCompute"));
        buttonCompute->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonCompute);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FirstDerivariveForm);

        QMetaObject::connectSlotsByName(FirstDerivariveForm);
    } // setupUi

    void retranslateUi(QWidget *FirstDerivariveForm)
    {
        FirstDerivariveForm->setWindowTitle(QApplication::translate("FirstDerivariveForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FirstDerivariveForm", "Time Difference (dT):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radioActual->setToolTip(QApplication::translate("FirstDerivariveForm", "<html><head/><body><p>use the actual difference in time between two consecutive points.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radioActual->setText(QApplication::translate("FirstDerivariveForm", "Actual ", Q_NULLPTR));
        label_2->setText(QApplication::translate("FirstDerivariveForm", "(It might be noisy!)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        radioCustom->setToolTip(QApplication::translate("FirstDerivariveForm", "<html><head/><body><p>Use a fixed, custom value of dT.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radioCustom->setText(QApplication::translate("FirstDerivariveForm", "Custom:", Q_NULLPTR));
        lineEditCustom->setText(QApplication::translate("FirstDerivariveForm", "1.0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonCompute->setToolTip(QApplication::translate("FirstDerivariveForm", "<html><head/><body><p>Calculate the corret delta time.</p><p>It tries to filter out outliers.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonCompute->setText(QApplication::translate("FirstDerivariveForm", "Guess dT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FirstDerivariveForm: public Ui_FirstDerivariveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_DERIVATIVE_H
