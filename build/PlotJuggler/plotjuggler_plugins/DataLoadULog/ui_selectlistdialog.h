/********************************************************************************
** Form generated from reading UI file 'selectlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTLISTDIALOG_H
#define UI_SELECTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectXAxisDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listFieldsWidget;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonSelectAll;

    void setupUi(QDialog *SelectXAxisDialog)
    {
        if (SelectXAxisDialog->objectName().isEmpty())
            SelectXAxisDialog->setObjectName(QStringLiteral("SelectXAxisDialog"));
        SelectXAxisDialog->resize(447, 300);
        verticalLayout = new QVBoxLayout(SelectXAxisDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listFieldsWidget = new QListWidget(SelectXAxisDialog);
        listFieldsWidget->setObjectName(QStringLiteral("listFieldsWidget"));

        verticalLayout->addWidget(listFieldsWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        buttonBox = new QDialogButtonBox(SelectXAxisDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        pushButtonSelectAll = new QPushButton(SelectXAxisDialog);
        pushButtonSelectAll->setObjectName(QStringLiteral("pushButtonSelectAll"));

        horizontalLayout->addWidget(pushButtonSelectAll);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SelectXAxisDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectXAxisDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SelectXAxisDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectXAxisDialog)
    {
        SelectXAxisDialog->setWindowTitle(QApplication::translate("SelectXAxisDialog", "Dialog", Q_NULLPTR));
        pushButtonSelectAll->setText(QApplication::translate("SelectXAxisDialog", "Select ALL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectXAxisDialog: public Ui_SelectXAxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLISTDIALOG_H
