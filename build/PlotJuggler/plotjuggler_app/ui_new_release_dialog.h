/********************************************************************************
** Form generated from reading UI file 'new_release_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_RELEASE_DIALOG_H
#define UI_NEW_RELEASE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewReleaseDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *labelRelease;
    QLabel *label_4;
    QLabel *labelTitle;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonWeb;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *dontShowAgain;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewReleaseDialog)
    {
        if (NewReleaseDialog->objectName().isEmpty())
            NewReleaseDialog->setObjectName(QStringLiteral("NewReleaseDialog"));
        NewReleaseDialog->resize(725, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewReleaseDialog->sizePolicy().hasHeightForWidth());
        NewReleaseDialog->setSizePolicy(sizePolicy);
        NewReleaseDialog->setMinimumSize(QSize(725, 300));
        NewReleaseDialog->setMaximumSize(QSize(725, 300));
        horizontalLayout_3 = new QHBoxLayout(NewReleaseDialog);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(NewReleaseDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(350, 250));
        label_3->setMaximumSize(QSize(350, 250));
        label_3->setFrameShape(QFrame::Box);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/update_plotjuggler.jpg")));

        horizontalLayout_3->addWidget(label_3);

        widget = new QWidget(NewReleaseDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(350, 0));
        widget->setMaximumSize(QSize(350, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(12);
        formLayout->setVerticalSpacing(12);
        formLayout->setContentsMargins(5, -1, -1, -1);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        labelRelease = new QLabel(widget);
        labelRelease->setObjectName(QStringLiteral("labelRelease"));
        labelRelease->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelRelease);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        labelTitle = new QLabel(widget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTitle);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonWeb = new QPushButton(widget);
        pushButtonWeb->setObjectName(QStringLiteral("pushButtonWeb"));
        pushButtonWeb->setMaximumSize(QSize(120, 16777215));
        QFont font1;
        font1.setPointSize(13);
        pushButtonWeb->setFont(font1);
        pushButtonWeb->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonWeb);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dontShowAgain = new QCheckBox(widget);
        dontShowAgain->setObjectName(QStringLiteral("dontShowAgain"));
        dontShowAgain->setMinimumSize(QSize(150, 0));
        dontShowAgain->setMaximumSize(QSize(170, 16777215));
        dontShowAgain->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(dontShowAgain);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout_3->addWidget(widget);


        retranslateUi(NewReleaseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewReleaseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewReleaseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewReleaseDialog);
    } // setupUi

    void retranslateUi(QDialog *NewReleaseDialog)
    {
        NewReleaseDialog->setWindowTitle(QApplication::translate("NewReleaseDialog", "New version available", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("NewReleaseDialog", "Release: ", Q_NULLPTR));
        labelRelease->setText(QApplication::translate("NewReleaseDialog", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("NewReleaseDialog", "Title:", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("NewReleaseDialog", "TextLabel", Q_NULLPTR));
        pushButtonWeb->setText(QApplication::translate("NewReleaseDialog", "Tell me more", Q_NULLPTR));
        dontShowAgain->setText(QApplication::translate("NewReleaseDialog", "Don't show me again", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewReleaseDialog: public Ui_NewReleaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_RELEASE_DIALOG_H
