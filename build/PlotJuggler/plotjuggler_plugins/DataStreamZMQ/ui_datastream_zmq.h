/********************************************************************************
** Form generated from reading UI file 'datastream_zmq.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTREAM_ZMQ_H
#define UI_DATASTREAM_ZMQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataStreamZMQ
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditPort;
    QLabel *label_6;
    QComboBox *comboBoxProtocol;
    QWidget *boxOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataStreamZMQ)
    {
        if (DataStreamZMQ->objectName().isEmpty())
            DataStreamZMQ->setObjectName(QStringLiteral("DataStreamZMQ"));
        DataStreamZMQ->resize(400, 300);
        verticalLayout = new QVBoxLayout(DataStreamZMQ);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DataStreamZMQ);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(DataStreamZMQ);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(DataStreamZMQ);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(DataStreamZMQ);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        comboBox = new QComboBox(DataStreamZMQ);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        lineEditAddress = new QLineEdit(DataStreamZMQ);
        lineEditAddress->setObjectName(QStringLiteral("lineEditAddress"));

        gridLayout->addWidget(lineEditAddress, 1, 1, 1, 1);

        lineEditPort = new QLineEdit(DataStreamZMQ);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout);

        label_6 = new QLabel(DataStreamZMQ);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        comboBoxProtocol = new QComboBox(DataStreamZMQ);
        comboBoxProtocol->setObjectName(QStringLiteral("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(DataStreamZMQ);
        boxOptions->setObjectName(QStringLiteral("boxOptions"));
        layoutOptions = new QVBoxLayout(boxOptions);
        layoutOptions->setObjectName(QStringLiteral("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_5 = new QLabel(boxOptions);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);

        layoutOptions->addWidget(label_5);


        verticalLayout->addWidget(boxOptions);

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DataStreamZMQ);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DataStreamZMQ);
        QObject::connect(buttonBox, SIGNAL(accepted()), DataStreamZMQ, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DataStreamZMQ, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataStreamZMQ);
    } // setupUi

    void retranslateUi(QDialog *DataStreamZMQ)
    {
        DataStreamZMQ->setWindowTitle(QApplication::translate("DataStreamZMQ", "ZMQ Subscriber", Q_NULLPTR));
        label->setText(QApplication::translate("DataStreamZMQ", "Connection (ZMQ_SUB)", Q_NULLPTR));
        label_2->setText(QApplication::translate("DataStreamZMQ", "Transport", Q_NULLPTR));
        label_3->setText(QApplication::translate("DataStreamZMQ", "Address", Q_NULLPTR));
        label_4->setText(QApplication::translate("DataStreamZMQ", "Port", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DataStreamZMQ", "tcp://", Q_NULLPTR)
         << QApplication::translate("DataStreamZMQ", "ipc://", Q_NULLPTR)
         << QApplication::translate("DataStreamZMQ", "pgm://", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("DataStreamZMQ", "Message Protocol:", Q_NULLPTR));
        label_5->setText(QApplication::translate("DataStreamZMQ", "Protocol options:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataStreamZMQ: public Ui_DataStreamZMQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTREAM_ZMQ_H
