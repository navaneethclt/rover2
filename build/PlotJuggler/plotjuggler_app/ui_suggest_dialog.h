/********************************************************************************
** Form generated from reading UI file 'suggest_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGEST_DIALOG_H
#define UI_SUGGEST_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SuggestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditX;
    QLineEdit *lineEditY;
    QPushButton *pushButtonSwap;
    QFrame *line;
    QLabel *label;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SuggestDialog)
    {
        if (SuggestDialog->objectName().isEmpty())
            SuggestDialog->setObjectName(QStringLiteral("SuggestDialog"));
        SuggestDialog->resize(525, 217);
        verticalLayout = new QVBoxLayout(SuggestDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 11, -1, -1);
        label_2 = new QLabel(SuggestDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(SuggestDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEditX = new QLineEdit(SuggestDialog);
        lineEditX->setObjectName(QStringLiteral("lineEditX"));
        lineEditX->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditX);

        lineEditY = new QLineEdit(SuggestDialog);
        lineEditY->setObjectName(QStringLiteral("lineEditY"));
        lineEditY->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditY);

        pushButtonSwap = new QPushButton(SuggestDialog);
        pushButtonSwap->setObjectName(QStringLiteral("pushButtonSwap"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonSwap);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(SuggestDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label = new QLabel(SuggestDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEditName = new QLineEdit(SuggestDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        verticalLayout->addWidget(lineEditName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SuggestDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SuggestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SuggestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SuggestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SuggestDialog);
    } // setupUi

    void retranslateUi(QDialog *SuggestDialog)
    {
        SuggestDialog->setWindowTitle(QApplication::translate("SuggestDialog", "Nex XY Curve", Q_NULLPTR));
        label_2->setText(QApplication::translate("SuggestDialog", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("SuggestDialog", "Y", Q_NULLPTR));
        pushButtonSwap->setText(QApplication::translate("SuggestDialog", "Swap", Q_NULLPTR));
        label->setText(QApplication::translate("SuggestDialog", "The XY curve needs a custom name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SuggestDialog: public Ui_SuggestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGEST_DIALOG_H
