/********************************************************************************
** Form generated from reading UI file 'toolbox_FFT.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBOX_FFT_H
#define UI_TOOLBOX_FFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toolbox_fft
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QFrame *framePlotPreviewA;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QRadioButton *radioAll;
    QRadioButton *radioZoomed;
    QPushButton *pushButtonCalculate;
    QFrame *line_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *framePlotPreviewB;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSave;
    QLabel *label_2;
    QLineEdit *lineEditSuffix;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *toolbox_fft)
    {
        if (toolbox_fft->objectName().isEmpty())
            toolbox_fft->setObjectName(QStringLiteral("toolbox_fft"));
        toolbox_fft->resize(1079, 756);
        verticalLayout = new QVBoxLayout(toolbox_fft);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(toolbox_fft);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 4, -1, -1);
        label = new QLabel(toolbox_fft);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        pushButtonClear = new QPushButton(toolbox_fft);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(24, 24));
        pushButtonClear->setMaximumSize(QSize(24, 24));
        pushButtonClear->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButtonClear);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 6, -1, 6);
        framePlotPreviewA = new QFrame(toolbox_fft);
        framePlotPreviewA->setObjectName(QStringLiteral("framePlotPreviewA"));
        framePlotPreviewA->setAutoFillBackground(false);
        framePlotPreviewA->setFrameShape(QFrame::Box);
        framePlotPreviewA->setFrameShadow(QFrame::Plain);

        horizontalLayout_2->addWidget(framePlotPreviewA);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(toolbox_fft);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        radioAll = new QRadioButton(toolbox_fft);
        radioAll->setObjectName(QStringLiteral("radioAll"));
        radioAll->setChecked(true);

        verticalLayout_2->addWidget(radioAll);

        radioZoomed = new QRadioButton(toolbox_fft);
        radioZoomed->setObjectName(QStringLiteral("radioZoomed"));

        verticalLayout_2->addWidget(radioZoomed);

        pushButtonCalculate = new QPushButton(toolbox_fft);
        pushButtonCalculate->setObjectName(QStringLiteral("pushButtonCalculate"));
        pushButtonCalculate->setEnabled(false);

        verticalLayout_2->addWidget(pushButtonCalculate);

        line_2 = new QFrame(toolbox_fft);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label_4 = new QLabel(toolbox_fft);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(250, 16777215));
        label_4->setWordWrap(true);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(toolbox_fft);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        label_3 = new QLabel(toolbox_fft);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        framePlotPreviewB = new QFrame(toolbox_fft);
        framePlotPreviewB->setObjectName(QStringLiteral("framePlotPreviewB"));
        framePlotPreviewB->setFrameShape(QFrame::Box);
        framePlotPreviewB->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(framePlotPreviewB);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 11);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonSave = new QPushButton(toolbox_fft);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setEnabled(false);

        horizontalLayout->addWidget(pushButtonSave);

        label_2 = new QLabel(toolbox_fft);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditSuffix = new QLineEdit(toolbox_fft);
        lineEditSuffix->setObjectName(QStringLiteral("lineEditSuffix"));
        lineEditSuffix->setEnabled(false);
        lineEditSuffix->setMinimumSize(QSize(50, 0));
        lineEditSuffix->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(lineEditSuffix);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(toolbox_fft);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(5, 1);

        retranslateUi(toolbox_fft);

        QMetaObject::connectSlotsByName(toolbox_fft);
    } // setupUi

    void retranslateUi(QWidget *toolbox_fft)
    {
        toolbox_fft->setWindowTitle(QApplication::translate("toolbox_fft", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("toolbox_fft", "FFT Toolbox", Q_NULLPTR));
        label->setText(QApplication::translate("toolbox_fft", "Drag and Drop a timeseries here (from the left panel):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButtonClear->setToolTip(QApplication::translate("toolbox_fft", "<html><head/><body><p>Remove all curves</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonClear->setText(QString());
        label_6->setText(QApplication::translate("toolbox_fft", "Range of data to be processed:", Q_NULLPTR));
        radioAll->setText(QApplication::translate("toolbox_fft", "All Data", Q_NULLPTR));
        radioZoomed->setText(QApplication::translate("toolbox_fft", "Only data in zoomed area", Q_NULLPTR));
        pushButtonCalculate->setText(QApplication::translate("toolbox_fft", "Calculate", Q_NULLPTR));
        label_4->setText(QApplication::translate("toolbox_fft", "<html><head/><body><p><span style=\" font-weight:600;\">IMPORTANT</span>: FFT expects data to be sampled with a constant dT.</p><p>If that is not the case, the results will be inaccurate.</p><p>This plugin will not apply any resampling to your data.</p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("toolbox_fft", "FFT: Frequencies", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("toolbox_fft", "Save Curve", Q_NULLPTR));
        label_2->setText(QApplication::translate("toolbox_fft", "Add suffix:", Q_NULLPTR));
        lineEditSuffix->setText(QApplication::translate("toolbox_fft", "_FFT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class toolbox_fft: public Ui_toolbox_fft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBOX_FFT_H
