/********************************************************************************
** Form generated from reading UI file 'plotwidget_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWIDGET_EDITOR_H
#define UI_PLOTWIDGET_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotWidgetEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *framePlotPreview;
    QFrame *line;
    QWidget *widgetBottom;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetNames;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QWidget *widgetColor;
    QVBoxLayout *verticalLayout_6;
    QWidget *widgetWheel;
    QLineEdit *editColotText;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QWidget *widgetMore;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *frameStyle;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioLines;
    QRadioButton *radioPoints;
    QRadioButton *radioBoth;
    QRadioButton *radioSticks;
    QLabel *label_2;
    QFrame *frameLimits;
    QFormLayout *formLayout;
    QCheckBox *checkBoxMax;
    QLineEdit *lineLimitMax;
    QCheckBox *checkBoxMin;
    QLineEdit *lineLimitMin;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonReset;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonSave;

    void setupUi(QDialog *PlotWidgetEditor)
    {
        if (PlotWidgetEditor->objectName().isEmpty())
            PlotWidgetEditor->setObjectName(QStringLiteral("PlotWidgetEditor"));
        PlotWidgetEditor->resize(900, 616);
        PlotWidgetEditor->setMinimumSize(QSize(900, 0));
        PlotWidgetEditor->setMaximumSize(QSize(16777215, 16777215));
        PlotWidgetEditor->setSizeGripEnabled(true);
        PlotWidgetEditor->setModal(false);
        verticalLayout_2 = new QVBoxLayout(PlotWidgetEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        framePlotPreview = new QFrame(PlotWidgetEditor);
        framePlotPreview->setObjectName(QStringLiteral("framePlotPreview"));
        framePlotPreview->setMinimumSize(QSize(800, 300));
        framePlotPreview->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(framePlotPreview);

        line = new QFrame(PlotWidgetEditor);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        widgetBottom = new QWidget(PlotWidgetEditor);
        widgetBottom->setObjectName(QStringLiteral("widgetBottom"));
        widgetBottom->setMinimumSize(QSize(0, 250));
        widgetBottom->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(widgetBottom);
        horizontalLayout->setSpacing(16);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 6, 0, 0);
        widgetNames = new QWidget(widgetBottom);
        widgetNames->setObjectName(QStringLiteral("widgetNames"));
        widgetNames->setMinimumSize(QSize(300, 0));
        verticalLayout_3 = new QVBoxLayout(widgetNames);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widgetNames);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(300, 0));
        listWidget->setMaximumSize(QSize(16777215, 16777215));
        listWidget->setFocusPolicy(Qt::ClickFocus);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout->addWidget(widgetNames);

        widgetColor = new QWidget(widgetBottom);
        widgetColor->setObjectName(QStringLiteral("widgetColor"));
        widgetColor->setEnabled(false);
        widgetColor->setMinimumSize(QSize(150, 250));
        widgetColor->setMaximumSize(QSize(150, 16777215));
        verticalLayout_6 = new QVBoxLayout(widgetColor);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widgetWheel = new QWidget(widgetColor);
        widgetWheel->setObjectName(QStringLiteral("widgetWheel"));
        widgetWheel->setMinimumSize(QSize(150, 180));
        widgetWheel->setMaximumSize(QSize(150, 180));

        verticalLayout_6->addWidget(widgetWheel);

        editColotText = new QLineEdit(widgetColor);
        editColotText->setObjectName(QStringLiteral("editColotText"));
        editColotText->setFocusPolicy(Qt::ClickFocus);

        verticalLayout_6->addWidget(editColotText);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(widgetColor);

        line_2 = new QFrame(widgetBottom);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line_2);

        widgetMore = new QWidget(widgetBottom);
        widgetMore->setObjectName(QStringLiteral("widgetMore"));
        widgetMore->setEnabled(true);
        widgetMore->setMinimumSize(QSize(200, 250));
        widgetMore->setMaximumSize(QSize(200, 16777215));
        verticalLayout_4 = new QVBoxLayout(widgetMore);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widgetMore);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        frameStyle = new QFrame(widgetMore);
        frameStyle->setObjectName(QStringLiteral("frameStyle"));
        frameStyle->setMinimumSize(QSize(200, 0));
        frameStyle->setMaximumSize(QSize(400, 200));
        verticalLayout_5 = new QVBoxLayout(frameStyle);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioLines = new QRadioButton(frameStyle);
        radioLines->setObjectName(QStringLiteral("radioLines"));
        radioLines->setFocusPolicy(Qt::NoFocus);
        radioLines->setChecked(true);

        verticalLayout_5->addWidget(radioLines);

        radioPoints = new QRadioButton(frameStyle);
        radioPoints->setObjectName(QStringLiteral("radioPoints"));
        radioPoints->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(radioPoints);

        radioBoth = new QRadioButton(frameStyle);
        radioBoth->setObjectName(QStringLiteral("radioBoth"));
        radioBoth->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(radioBoth);

        radioSticks = new QRadioButton(frameStyle);
        radioSticks->setObjectName(QStringLiteral("radioSticks"));

        verticalLayout_5->addWidget(radioSticks);


        verticalLayout_4->addWidget(frameStyle);

        label_2 = new QLabel(widgetMore);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_4->addWidget(label_2);

        frameLimits = new QFrame(widgetMore);
        frameLimits->setObjectName(QStringLiteral("frameLimits"));
        frameLimits->setMinimumSize(QSize(200, 0));
        frameLimits->setMaximumSize(QSize(16777215, 200));
        formLayout = new QFormLayout(frameLimits);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxMax = new QCheckBox(frameLimits);
        checkBoxMax->setObjectName(QStringLiteral("checkBoxMax"));
        checkBoxMax->setFocusPolicy(Qt::NoFocus);

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBoxMax);

        lineLimitMax = new QLineEdit(frameLimits);
        lineLimitMax->setObjectName(QStringLiteral("lineLimitMax"));
        lineLimitMax->setEnabled(false);
        lineLimitMax->setFocusPolicy(Qt::ClickFocus);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineLimitMax);

        checkBoxMin = new QCheckBox(frameLimits);
        checkBoxMin->setObjectName(QStringLiteral("checkBoxMin"));
        checkBoxMin->setFocusPolicy(Qt::NoFocus);

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBoxMin);

        lineLimitMin = new QLineEdit(frameLimits);
        lineLimitMin->setObjectName(QStringLiteral("lineLimitMin"));
        lineLimitMin->setEnabled(false);
        lineLimitMin->setFocusPolicy(Qt::ClickFocus);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineLimitMin);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        pushButtonReset = new QPushButton(frameLimits);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(110, 0));
        pushButtonReset->setMaximumSize(QSize(110, 16777215));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);
        pushButtonReset->setLayoutDirection(Qt::LeftToRight);
        pushButtonReset->setFlat(false);

        horizontalLayout_2->addWidget(pushButtonReset);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout_4->addWidget(frameLimits);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addWidget(widgetMore);

        horizontalLayout->setStretch(0, 2);

        verticalLayout_2->addWidget(widgetBottom);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(PlotWidgetEditor);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(pushButtonCancel);

        pushButtonSave = new QPushButton(PlotWidgetEditor);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(PlotWidgetEditor);

        QMetaObject::connectSlotsByName(PlotWidgetEditor);
    } // setupUi

    void retranslateUi(QDialog *PlotWidgetEditor)
    {
        PlotWidgetEditor->setWindowTitle(QApplication::translate("PlotWidgetEditor", "Edit the Plot Area", Q_NULLPTR));
        label->setText(QApplication::translate("PlotWidgetEditor", "Lines Style:", Q_NULLPTR));
        radioLines->setText(QApplication::translate("PlotWidgetEditor", "Lines", Q_NULLPTR));
        radioPoints->setText(QApplication::translate("PlotWidgetEditor", "Dots", Q_NULLPTR));
        radioBoth->setText(QApplication::translate("PlotWidgetEditor", "Lines and Dots", Q_NULLPTR));
        radioSticks->setText(QApplication::translate("PlotWidgetEditor", "Sticks", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlotWidgetEditor", "Vertical Limits:", Q_NULLPTR));
        checkBoxMax->setText(QApplication::translate("PlotWidgetEditor", "Max", Q_NULLPTR));
        checkBoxMin->setText(QApplication::translate("PlotWidgetEditor", "Min", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("PlotWidgetEditor", "Default Limits", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("PlotWidgetEditor", "Cancel", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("PlotWidgetEditor", "Save Changes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlotWidgetEditor: public Ui_PlotWidgetEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWIDGET_EDITOR_H
