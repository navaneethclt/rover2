/********************************************************************************
** Form generated from reading UI file 'transform_selector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORM_SELECTOR_H
#define UI_TRANSFORM_SELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_transform_selector
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboDefault;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonApplyDefault;
    QPushButton *buttonResetAll;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *transform_selector)
    {
        if (transform_selector->objectName().isEmpty())
            transform_selector->setObjectName(QStringLiteral("transform_selector"));
        transform_selector->resize(591, 409);
        verticalLayout_2 = new QVBoxLayout(transform_selector);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(transform_selector);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboDefault = new QComboBox(transform_selector);
        comboDefault->setObjectName(QStringLiteral("comboDefault"));
        comboDefault->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(comboDefault);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonApplyDefault = new QPushButton(transform_selector);
        buttonApplyDefault->setObjectName(QStringLiteral("buttonApplyDefault"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonApplyDefault->sizePolicy().hasHeightForWidth());
        buttonApplyDefault->setSizePolicy(sizePolicy);
        buttonApplyDefault->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(buttonApplyDefault);

        buttonResetAll = new QPushButton(transform_selector);
        buttonResetAll->setObjectName(QStringLiteral("buttonResetAll"));
        sizePolicy.setHeightForWidth(buttonResetAll->sizePolicy().hasHeightForWidth());
        buttonResetAll->setSizePolicy(sizePolicy);
        buttonResetAll->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(buttonResetAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(transform_selector);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        label_2 = new QLabel(transform_selector);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(transform_selector);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(transform_selector);
        QObject::connect(buttonBox, SIGNAL(accepted()), transform_selector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), transform_selector, SLOT(reject()));

        QMetaObject::connectSlotsByName(transform_selector);
    } // setupUi

    void retranslateUi(QDialog *transform_selector)
    {
        transform_selector->setWindowTitle(QApplication::translate("transform_selector", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("transform_selector", "Default (for newly added timeseries):", Q_NULLPTR));
        buttonApplyDefault->setText(QApplication::translate("transform_selector", "All to default", Q_NULLPTR));
        buttonResetAll->setText(QApplication::translate("transform_selector", "Reset all", Q_NULLPTR));
        label_2->setText(QApplication::translate("transform_selector", "Note: invalid transforms will not be displayed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class transform_selector: public Ui_transform_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORM_SELECTOR_H
