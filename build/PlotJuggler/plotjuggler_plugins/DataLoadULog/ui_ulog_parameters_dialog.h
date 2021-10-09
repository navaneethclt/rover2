/********************************************************************************
** Form generated from reading UI file 'ulog_parameters_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ULOG_PARAMETERS_DIALOG_H
#define UI_ULOG_PARAMETERS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ULogParametersDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *Info;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidgetInfo;
    QWidget *Properties;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidgetParams;
    QWidget *Logs;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetLogs;

    void setupUi(QDialog *ULogParametersDialog)
    {
        if (ULogParametersDialog->objectName().isEmpty())
            ULogParametersDialog->setObjectName(QStringLiteral("ULogParametersDialog"));
        ULogParametersDialog->resize(617, 480);
        horizontalLayout_2 = new QHBoxLayout(ULogParametersDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(ULogParametersDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        Info = new QWidget();
        Info->setObjectName(QStringLiteral("Info"));
        horizontalLayout = new QHBoxLayout(Info);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidgetInfo = new QTableWidget(Info);
        if (tableWidgetInfo->columnCount() < 2)
            tableWidgetInfo->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetInfo->setObjectName(QStringLiteral("tableWidgetInfo"));
        tableWidgetInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetInfo->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetInfo->setColumnCount(2);
        tableWidgetInfo->horizontalHeader()->setDefaultSectionSize(201);
        tableWidgetInfo->horizontalHeader()->setMinimumSectionSize(200);
        tableWidgetInfo->horizontalHeader()->setStretchLastSection(true);
        tableWidgetInfo->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(tableWidgetInfo);

        tabWidget->addTab(Info, QString());
        Properties = new QWidget();
        Properties->setObjectName(QStringLiteral("Properties"));
        verticalLayout_3 = new QVBoxLayout(Properties);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidgetParams = new QTableWidget(Properties);
        if (tableWidgetParams->columnCount() < 2)
            tableWidgetParams->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetParams->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetParams->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidgetParams->setObjectName(QStringLiteral("tableWidgetParams"));
        tableWidgetParams->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetParams->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetParams->setColumnCount(2);
        tableWidgetParams->horizontalHeader()->setStretchLastSection(true);
        tableWidgetParams->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidgetParams);

        tabWidget->addTab(Properties, QString());
        Logs = new QWidget();
        Logs->setObjectName(QStringLiteral("Logs"));
        verticalLayout = new QVBoxLayout(Logs);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidgetLogs = new QTableWidget(Logs);
        if (tableWidgetLogs->columnCount() < 3)
            tableWidgetLogs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetLogs->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetLogs->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetLogs->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableWidgetLogs->setObjectName(QStringLiteral("tableWidgetLogs"));
        tableWidgetLogs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetLogs->setSortingEnabled(false);
        tableWidgetLogs->setColumnCount(3);
        tableWidgetLogs->horizontalHeader()->setStretchLastSection(true);
        tableWidgetLogs->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidgetLogs);

        tabWidget->addTab(Logs, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(ULogParametersDialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ULogParametersDialog);
    } // setupUi

    void retranslateUi(QDialog *ULogParametersDialog)
    {
        ULogParametersDialog->setWindowTitle(QApplication::translate("ULogParametersDialog", "MainWindow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ULogParametersDialog", "Property", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ULogParametersDialog", "Value", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Info), QApplication::translate("ULogParametersDialog", "Info", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetParams->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("ULogParametersDialog", "Property", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetParams->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("ULogParametersDialog", "Value", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Properties), QApplication::translate("ULogParametersDialog", "Properties", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetLogs->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ULogParametersDialog", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetLogs->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ULogParametersDialog", "Level", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetLogs->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ULogParametersDialog", "Message", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Logs), QApplication::translate("ULogParametersDialog", "Message Logs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ULogParametersDialog: public Ui_ULogParametersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ULOG_PARAMETERS_DIALOG_H
