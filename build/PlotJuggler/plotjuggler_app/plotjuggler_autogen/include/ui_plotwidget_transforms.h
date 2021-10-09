/********************************************************************************
** Form generated from reading UI file 'plotwidget_transforms.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWIDGET_TRANSFORMS_H
#define UI_PLOTWIDGET_TRANSFORMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plotwidget_transforms
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *framePlotPreview;
    QWidget *widgetBottom;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listCurves;
    QWidget *layoutWidget;
    QVBoxLayout *transformLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditAlias;
    QSpacerItem *horizontalSpacer;
    QFrame *tansformFrame;
    QHBoxLayout *horizontalLayout;
    QListWidget *listTransforms;
    QFrame *line;
    QStackedWidget *stackedWidgetArguments;
    QWidget *pageEmpty;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonSave;

    void setupUi(QDialog *plotwidget_transforms)
    {
        if (plotwidget_transforms->objectName().isEmpty())
            plotwidget_transforms->setObjectName(QStringLiteral("plotwidget_transforms"));
        plotwidget_transforms->resize(924, 607);
        verticalLayout_2 = new QVBoxLayout(plotwidget_transforms);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        framePlotPreview = new QFrame(plotwidget_transforms);
        framePlotPreview->setObjectName(QStringLiteral("framePlotPreview"));
        framePlotPreview->setMinimumSize(QSize(600, 300));
        framePlotPreview->setFrameShape(QFrame::StyledPanel);
        framePlotPreview->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(framePlotPreview);

        widgetBottom = new QWidget(plotwidget_transforms);
        widgetBottom->setObjectName(QStringLiteral("widgetBottom"));
        widgetBottom->setMinimumSize(QSize(0, 250));
        widgetBottom->setMaximumSize(QSize(16777215, 250));
        horizontalLayout_3 = new QHBoxLayout(widgetBottom);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widgetBottom);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(label_2);

        listCurves = new QListWidget(widget);
        listCurves->setObjectName(QStringLiteral("listCurves"));
        listCurves->setFocusPolicy(Qt::NoFocus);
        listCurves->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listCurves->setSelectionMode(QAbstractItemView::SingleSelection);
        listCurves->setSelectionBehavior(QAbstractItemView::SelectRows);
        listCurves->setProperty("isWrapping", QVariant(false));

        verticalLayout->addWidget(listCurves);

        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        transformLayout = new QVBoxLayout(layoutWidget);
        transformLayout->setObjectName(QStringLiteral("transformLayout"));
        transformLayout->setContentsMargins(9, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        lineEditAlias = new QLineEdit(layoutWidget);
        lineEditAlias->setObjectName(QStringLiteral("lineEditAlias"));
        lineEditAlias->setMinimumSize(QSize(300, 0));
        lineEditAlias->setMaximumSize(QSize(500, 16777215));
        lineEditAlias->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(lineEditAlias);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        transformLayout->addLayout(horizontalLayout_2);

        tansformFrame = new QFrame(layoutWidget);
        tansformFrame->setObjectName(QStringLiteral("tansformFrame"));
        tansformFrame->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(tansformFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listTransforms = new QListWidget(tansformFrame);
        QFont font;
        font.setItalic(true);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listTransforms);
        __qlistwidgetitem->setFont(font);
        listTransforms->setObjectName(QStringLiteral("listTransforms"));
        listTransforms->setMinimumSize(QSize(150, 0));
        listTransforms->setMaximumSize(QSize(200, 16777215));
        listTransforms->setFocusPolicy(Qt::NoFocus);
        listTransforms->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listTransforms->setSelectionBehavior(QAbstractItemView::SelectRows);
        listTransforms->setSpacing(4);
        listTransforms->setSelectionRectVisible(false);

        horizontalLayout->addWidget(listTransforms);

        line = new QFrame(tansformFrame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        stackedWidgetArguments = new QStackedWidget(tansformFrame);
        stackedWidgetArguments->setObjectName(QStringLiteral("stackedWidgetArguments"));
        stackedWidgetArguments->setMinimumSize(QSize(250, 0));
        pageEmpty = new QWidget();
        pageEmpty->setObjectName(QStringLiteral("pageEmpty"));
        stackedWidgetArguments->addWidget(pageEmpty);

        horizontalLayout->addWidget(stackedWidgetArguments);


        transformLayout->addWidget(tansformFrame);

        splitter->addWidget(layoutWidget);

        horizontalLayout_3->addWidget(splitter);


        verticalLayout_2->addWidget(widgetBottom);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButtonCancel = new QPushButton(plotwidget_transforms);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(pushButtonCancel);

        pushButtonSave = new QPushButton(plotwidget_transforms);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        retranslateUi(plotwidget_transforms);

        QMetaObject::connectSlotsByName(plotwidget_transforms);
    } // setupUi

    void retranslateUi(QDialog *plotwidget_transforms)
    {
        plotwidget_transforms->setWindowTitle(QApplication::translate("plotwidget_transforms", "Transform Editor", Q_NULLPTR));
        label_2->setText(QApplication::translate("plotwidget_transforms", "Source curve:", Q_NULLPTR));
        label->setText(QApplication::translate("plotwidget_transforms", "Alias:", Q_NULLPTR));

        const bool __sortingEnabled = listTransforms->isSortingEnabled();
        listTransforms->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listTransforms->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("plotwidget_transforms", "-- NO Transform --", Q_NULLPTR));
        listTransforms->setSortingEnabled(__sortingEnabled);

        pushButtonCancel->setText(QApplication::translate("plotwidget_transforms", "Cancel", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("plotwidget_transforms", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class plotwidget_transforms: public Ui_plotwidget_transforms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWIDGET_TRANSFORMS_H
