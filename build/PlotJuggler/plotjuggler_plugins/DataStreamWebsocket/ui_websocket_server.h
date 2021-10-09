/********************************************************************************
** Form generated from reading UI file 'websocket_server.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBSOCKET_SERVER_H
#define UI_WEBSOCKET_SERVER_H

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

class Ui_WebSocketDialog
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

    void setupUi(QWidget *WebSocketDialog)
    {
        if (WebSocketDialog->objectName().isEmpty())
            WebSocketDialog->setObjectName(QStringLiteral("WebSocketDialog"));
        WebSocketDialog->resize(293, 232);
        verticalLayout = new QVBoxLayout(WebSocketDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(WebSocketDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEditPort = new QLineEdit(WebSocketDialog);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        verticalLayout->addWidget(lineEditPort);

        label_2 = new QLabel(WebSocketDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        comboBoxProtocol = new QComboBox(WebSocketDialog);
        comboBoxProtocol->setObjectName(QStringLiteral("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(WebSocketDialog);
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

        buttonBox = new QDialogButtonBox(WebSocketDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WebSocketDialog);

        QMetaObject::connectSlotsByName(WebSocketDialog);
    } // setupUi

    void retranslateUi(QWidget *WebSocketDialog)
    {
        WebSocketDialog->setWindowTitle(QApplication::translate("WebSocketDialog", "WebSocket Server", Q_NULLPTR));
        label->setText(QApplication::translate("WebSocketDialog", "Port of the Websocket server:", Q_NULLPTR));
        label_2->setText(QApplication::translate("WebSocketDialog", "Message Protocol:", Q_NULLPTR));
        label_3->setText(QApplication::translate("WebSocketDialog", "Protocol options:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WebSocketDialog: public Ui_WebSocketDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBSOCKET_SERVER_H
