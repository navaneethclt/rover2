/********************************************************************************
** Form generated from reading UI file 'preferences_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_DIALOG_H
#define UI_PREFERENCES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout;
    QFormLayout *formLayout_3;
    QLabel *label;
    QComboBox *comboBoxTheme;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioGlobalColorIndex;
    QRadioButton *radioLocalColorIndex;
    QCheckBox *checkBoxRememberColor;
    QLabel *label_6;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxSeparator;
    QLabel *label_7;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxOpenGL;
    QLabel *label_2;
    QWidget *tabPlugins;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QLabel *label_5;
    QListWidget *listWidgetCustom;
    QLabel *label_8;
    QListWidget *listWidgetBuiltin;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(575, 435);
        PreferencesDialog->setMinimumSize(QSize(450, 0));
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setFormAlignment(Qt::AlignCenter);
        formLayout_3->setContentsMargins(-1, 10, -1, -1);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        comboBoxTheme = new QComboBox(tab);
        comboBoxTheme->setObjectName(QStringLiteral("comboBoxTheme"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxTheme->sizePolicy().hasHeightForWidth());
        comboBoxTheme->setSizePolicy(sizePolicy1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, comboBoxTheme);

        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioGlobalColorIndex = new QRadioButton(frame);
        radioGlobalColorIndex->setObjectName(QStringLiteral("radioGlobalColorIndex"));
        radioGlobalColorIndex->setChecked(true);

        verticalLayout_2->addWidget(radioGlobalColorIndex);

        radioLocalColorIndex = new QRadioButton(frame);
        radioLocalColorIndex->setObjectName(QStringLiteral("radioLocalColorIndex"));

        verticalLayout_2->addWidget(radioLocalColorIndex);

        checkBoxRememberColor = new QCheckBox(frame);
        checkBoxRememberColor->setObjectName(QStringLiteral("checkBoxRememberColor"));
        checkBoxRememberColor->setChecked(true);

        verticalLayout_2->addWidget(checkBoxRememberColor);


        formLayout_3->setWidget(1, QFormLayout::FieldRole, frame);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 40));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 40));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBoxSeparator = new QCheckBox(frame_2);
        checkBoxSeparator->setObjectName(QStringLiteral("checkBoxSeparator"));
        checkBoxSeparator->setChecked(true);

        verticalLayout_4->addWidget(checkBoxSeparator);


        formLayout_3->setWidget(2, QFormLayout::FieldRole, frame_2);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 40));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_7);

        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBoxOpenGL = new QCheckBox(frame_3);
        checkBoxOpenGL->setObjectName(QStringLiteral("checkBoxOpenGL"));
        checkBoxOpenGL->setChecked(true);

        verticalLayout_5->addWidget(checkBoxOpenGL);


        formLayout_3->setWidget(3, QFormLayout::FieldRole, frame_3);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_2);


        formLayout->setLayout(0, QFormLayout::SpanningRole, formLayout_3);

        tabWidget->addTab(tab, QString());
        tabPlugins = new QWidget();
        tabPlugins->setObjectName(QStringLiteral("tabPlugins"));
        verticalLayout_3 = new QVBoxLayout(tabPlugins);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(tabPlugins);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonAdd = new QPushButton(tabPlugins);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setMinimumSize(QSize(24, 24));
        pushButtonAdd->setMaximumSize(QSize(24, 24));
        pushButtonAdd->setIconSize(QSize(22, 22));
        pushButtonAdd->setFlat(true);

        horizontalLayout->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(tabPlugins);
        pushButtonRemove->setObjectName(QStringLiteral("pushButtonRemove"));
        pushButtonRemove->setMinimumSize(QSize(24, 24));
        pushButtonRemove->setMaximumSize(QSize(24, 24));
        pushButtonRemove->setIconSize(QSize(20, 20));
        pushButtonRemove->setFlat(true);

        horizontalLayout->addWidget(pushButtonRemove);


        verticalLayout_3->addLayout(horizontalLayout);

        label_5 = new QLabel(tabPlugins);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        listWidgetCustom = new QListWidget(tabPlugins);
        listWidgetCustom->setObjectName(QStringLiteral("listWidgetCustom"));
        listWidgetCustom->setFocusPolicy(Qt::ClickFocus);
        listWidgetCustom->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetCustom->setDragDropMode(QAbstractItemView::InternalMove);
        listWidgetCustom->setDefaultDropAction(Qt::MoveAction);
        listWidgetCustom->setSpacing(2);

        verticalLayout_3->addWidget(listWidgetCustom);

        label_8 = new QLabel(tabPlugins);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        listWidgetBuiltin = new QListWidget(tabPlugins);
        listWidgetBuiltin->setObjectName(QStringLiteral("listWidgetBuiltin"));
        listWidgetBuiltin->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetBuiltin->setSelectionMode(QAbstractItemView::NoSelection);
        listWidgetBuiltin->setSpacing(2);

        verticalLayout_3->addWidget(listWidgetBuiltin);

        label_4 = new QLabel(tabPlugins);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        tabWidget->addTab(tabPlugins, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", Q_NULLPTR));
        label->setText(QApplication::translate("PreferencesDialog", "Theme:", Q_NULLPTR));
        comboBoxTheme->clear();
        comboBoxTheme->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "Light Theme", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "Dark Theme", Q_NULLPTR)
        );
        radioGlobalColorIndex->setText(QApplication::translate("PreferencesDialog", "global color sequence", Q_NULLPTR));
        radioLocalColorIndex->setText(QApplication::translate("PreferencesDialog", "reset color sequence in each plot area", Q_NULLPTR));
        checkBoxRememberColor->setText(QApplication::translate("PreferencesDialog", "remember curve color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>The &quot;Name Separator&quot; is the character use to split the name of a timeseries in the tree view (Timeseries Panel).</p><p>Default is <span style=\" font-weight:600;\">&quot;/&quot;</span>.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("PreferencesDialog", "Tree view:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxSeparator->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Change will not be applied to existing timeseries.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxSeparator->setText(QApplication::translate("PreferencesDialog", "enabled (using separator \"/\" in the name)", Q_NULLPTR));
        label_7->setText(QApplication::translate("PreferencesDialog", "OpenGL:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxOpenGL->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Change will not be applied to existing plots.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxOpenGL->setText(QApplication::translate("PreferencesDialog", "enabled", Q_NULLPTR));
        label_2->setText(QApplication::translate("PreferencesDialog", "Curve color:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesDialog", "Appearance", Q_NULLPTR));
        label_3->setText(QApplication::translate("PreferencesDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Plugin folders </span>(will be loaded in this order)<span style=\" font-weight:600;\">:</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButtonAdd->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Add folder</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonAdd->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonRemove->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Remove selected</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonRemove->setText(QString());
        label_5->setText(QApplication::translate("PreferencesDialog", "Add custom folders. Drag and drop the items to change the order.", Q_NULLPTR));
        label_8->setText(QApplication::translate("PreferencesDialog", "List of built-in folders:", Q_NULLPTR));
        label_4->setText(QApplication::translate("PreferencesDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Note</span>: this change will take effect the next time PlotJuggler is started</p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabPlugins), QApplication::translate("PreferencesDialog", "Plugins", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_DIALOG_H
