/********************************************************************************
** Form generated from reading UI file 'udp_server.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP_SERVER_H
#define UI_UDP_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPServerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QComboBox *comboBoxProtocol;
    QWidget *boxOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *UDPServerDialog)
    {
        if (UDPServerDialog->objectName().isEmpty())
            UDPServerDialog->setObjectName(QStringLiteral("UDPServerDialog"));
        UDPServerDialog->resize(293, 232);
        verticalLayout = new QVBoxLayout(UDPServerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(UDPServerDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEditPort = new QLineEdit(UDPServerDialog);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        verticalLayout->addWidget(lineEditPort);

        label_2 = new QLabel(UDPServerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        comboBoxProtocol = new QComboBox(UDPServerDialog);
        comboBoxProtocol->setObjectName(QStringLiteral("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(UDPServerDialog);
        boxOptions->setObjectName(QStringLiteral("boxOptions"));
        layoutOptions = new QVBoxLayout(boxOptions);
        layoutOptions->setObjectName(QStringLiteral("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_3 = new QLabel(boxOptions);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        layoutOptions->addWidget(label_3);


        verticalLayout->addWidget(boxOptions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UDPServerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UDPServerDialog);

        QMetaObject::connectSlotsByName(UDPServerDialog);
    } // setupUi

    void retranslateUi(QWidget *UDPServerDialog)
    {
        UDPServerDialog->setWindowTitle(QApplication::translate("UDPServerDialog", "UDP Server", Q_NULLPTR));
        label->setText(QApplication::translate("UDPServerDialog", "Port of the UDP server:", Q_NULLPTR));
        label_2->setText(QApplication::translate("UDPServerDialog", "Message Protocol:", Q_NULLPTR));
        label_3->setText(QApplication::translate("UDPServerDialog", "Protocol options:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UDPServerDialog: public Ui_UDPServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_SERVER_H
