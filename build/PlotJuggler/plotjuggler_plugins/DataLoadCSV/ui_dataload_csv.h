/********************************************************************************
** Form generated from reading UI file 'dataload_csv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATALOAD_CSV_H
#define UI_DATALOAD_CSV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCSV
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonIndex;
    QRadioButton *radioButtonSelect;
    QFrame *line;
    QLabel *label_3;
    QListWidget *listWidgetSeries;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxDateFormat;
    QLineEdit *lineEditDateFormat;
    QLabel *label_4;
    QFrame *line_2;
    QLabel *label_2;
    QPlainTextEdit *rawText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogCSV)
    {
        if (DialogCSV->objectName().isEmpty())
            DialogCSV->setObjectName(QStringLiteral("DialogCSV"));
        DialogCSV->resize(1107, 640);
        verticalLayout_3 = new QVBoxLayout(DialogCSV);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(DialogCSV);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 10, 0);
        radioButtonIndex = new QRadioButton(layoutWidget);
        radioButtonIndex->setObjectName(QStringLiteral("radioButtonIndex"));

        verticalLayout->addWidget(radioButtonIndex);

        radioButtonSelect = new QRadioButton(layoutWidget);
        radioButtonSelect->setObjectName(QStringLiteral("radioButtonSelect"));
        radioButtonSelect->setChecked(true);

        verticalLayout->addWidget(radioButtonSelect);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        listWidgetSeries = new QListWidget(layoutWidget);
        listWidgetSeries->setObjectName(QStringLiteral("listWidgetSeries"));

        verticalLayout->addWidget(listWidgetSeries);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 11, -1, -1);
        checkBoxDateFormat = new QCheckBox(layoutWidget1);
        checkBoxDateFormat->setObjectName(QStringLiteral("checkBoxDateFormat"));

        horizontalLayout_2->addWidget(checkBoxDateFormat);

        lineEditDateFormat = new QLineEdit(layoutWidget1);
        lineEditDateFormat->setObjectName(QStringLiteral("lineEditDateFormat"));
        lineEditDateFormat->setEnabled(false);

        horizontalLayout_2->addWidget(lineEditDateFormat);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        line_2 = new QFrame(layoutWidget1);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        rawText = new QPlainTextEdit(layoutWidget1);
        rawText->setObjectName(QStringLiteral("rawText"));
        rawText->setLineWrapMode(QPlainTextEdit::NoWrap);
        rawText->setReadOnly(true);

        verticalLayout_2->addWidget(rawText);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        buttonBox = new QDialogButtonBox(DialogCSV);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DialogCSV);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogCSV, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogCSV, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogCSV);
    } // setupUi

    void retranslateUi(QDialog *DialogCSV)
    {
        DialogCSV->setWindowTitle(QApplication::translate("DialogCSV", "CSV Loader", Q_NULLPTR));
        radioButtonIndex->setText(QApplication::translate("DialogCSV", "Use row number as X axis", Q_NULLPTR));
        radioButtonSelect->setText(QApplication::translate("DialogCSV", "Select a column to be used as X axis", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogCSV", "Columns:", Q_NULLPTR));
        label->setText(QApplication::translate("DialogCSV", "Delimiter:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DialogCSV", "\",\" (comma)", Q_NULLPTR)
         << QApplication::translate("DialogCSV", "\";\" (semicolon)", Q_NULLPTR)
         << QApplication::translate("DialogCSV", "\" \" (space)", Q_NULLPTR)
        );
        checkBoxDateFormat->setText(QApplication::translate("DialogCSV", "Parse Date Format", Q_NULLPTR));
        lineEditDateFormat->setText(QApplication::translate("DialogCSV", "yyyy-MM-dd hh:mm:ss", Q_NULLPTR));
        lineEditDateFormat->setPlaceholderText(QApplication::translate("DialogCSV", "yyyy-MM-dd hh:mm:ss", Q_NULLPTR));
        label_4->setText(QApplication::translate("DialogCSV", "<html><head/><body><p>Visit <a href=\"https://doc.qt.io/qt-5/qtime.html#toString\"><span style=\" text-decoration: underline; color:#0000ff;\">this link</span></a> to learn more about the Date-Time format.</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogCSV", "Preview (first 100 lines at most):", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogCSV: public Ui_DialogCSV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATALOAD_CSV_H
