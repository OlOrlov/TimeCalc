/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *date_tab;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *date_Layout;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QHBoxLayout *date_Input_Layout;
    QDateTimeEdit *date_input;
    QLineEdit *weekday_inp;
    QSpacerItem *horizontalSpacer;
    QPushButton *date_inp_clear_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_15;
    QHBoxLayout *date_operations_Layout;
    QVBoxLayout *verticalLayout_1;
    QLabel *label_10;
    QSpinBox *date_oper_day;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_11;
    QSpinBox *date_oper_hour;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QSpinBox *date_oper_min;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_14;
    QRadioButton *date_add;
    QRadioButton *date_subs;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *date_oper_clear;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_14;
    QHBoxLayout *date_output_Layout;
    QDateTimeEdit *date_output;
    QLineEdit *weekday_outp;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *date_calc_btn;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QWidget *ddmmhh_tab;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *ddhhmm_Layout;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_18;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout;
    QSpinBox *ddmmhh_input_day;
    QSpacerItem *horizontalSpacer_13;
    QSpinBox *ddmmhh_input_hour;
    QSpacerItem *horizontalSpacer_14;
    QSpinBox *ddmmhh_input_min;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *ddhhmm_inp_clear_2;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QSpinBox *ddmmhh_oper_day;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QSpinBox *ddmmhh_oper_hour;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QSpinBox *ddmmhh_oper_min;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *ddmmhh_add;
    QRadioButton *ddmmhh_subs;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *ddhhmm_oper_clear;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *ddmmhh_output_day;
    QLineEdit *ddmmhh_output_hour;
    QLineEdit *ddmmhh_output_min;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *ddhhmm_calc_btn;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(420, 220);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 400, 200));
        tabWidget->setStyleSheet(QLatin1String("background-color: #3b3838; color:black;\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #a1a1a1, stop: 0.4 #9c9c9c,\n"
"                                stop: 0.5 #7e7e7e, stop: 1.0 #a1a1a1);\n"
"};\n"
"\n"
"QTabBar::tab-color{\n"
"	background-color: #a1a1a1;\n"
"	color:black;\n"
"\n"
"};\n"
"\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}"));
        date_tab = new QWidget();
        date_tab->setObjectName(QStringLiteral("date_tab"));
        horizontalLayoutWidget_7 = new QWidget(date_tab);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(10, 0, 361, 181));
        date_Layout = new QHBoxLayout(horizontalLayoutWidget_7);
        date_Layout->setSpacing(6);
        date_Layout->setContentsMargins(11, 11, 11, 11);
        date_Layout->setObjectName(QStringLiteral("date_Layout"));
        date_Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        date_Layout->addItem(horizontalSpacer_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_13 = new QLabel(horizontalLayoutWidget_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout->addWidget(label_13);

        date_Input_Layout = new QHBoxLayout();
        date_Input_Layout->setSpacing(6);
        date_Input_Layout->setObjectName(QStringLiteral("date_Input_Layout"));
        date_input = new QDateTimeEdit(horizontalLayoutWidget_7);
        date_input->setObjectName(QStringLiteral("date_input"));
        date_input->setMinimumSize(QSize(0, 25));
        date_input->setMaximumSize(QSize(90, 16777215));
        date_input->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        date_input->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        date_input->setDateTime(QDateTime(QDate(2021, 1, 1), QTime(0, 0, 0)));
        date_input->setCalendarPopup(true);

        date_Input_Layout->addWidget(date_input);

        weekday_inp = new QLineEdit(horizontalLayoutWidget_7);
        weekday_inp->setObjectName(QStringLiteral("weekday_inp"));
        weekday_inp->setMinimumSize(QSize(0, 25));
        weekday_inp->setMaximumSize(QSize(90, 16777215));
        weekday_inp->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        weekday_inp->setReadOnly(true);

        date_Input_Layout->addWidget(weekday_inp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        date_Input_Layout->addItem(horizontalSpacer);

        date_inp_clear_3 = new QPushButton(horizontalLayoutWidget_7);
        date_inp_clear_3->setObjectName(QStringLiteral("date_inp_clear_3"));
        date_inp_clear_3->setMinimumSize(QSize(0, 25));
        date_inp_clear_3->setMaximumSize(QSize(90, 16777215));
        date_inp_clear_3->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        date_Input_Layout->addWidget(date_inp_clear_3);


        verticalLayout->addLayout(date_Input_Layout);


        verticalLayout_11->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_15 = new QLabel(horizontalLayoutWidget_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_2->addWidget(label_15);

        date_operations_Layout = new QHBoxLayout();
        date_operations_Layout->setSpacing(6);
        date_operations_Layout->setObjectName(QStringLiteral("date_operations_Layout"));
        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        label_10 = new QLabel(horizontalLayoutWidget_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_1->addWidget(label_10);

        date_oper_day = new QSpinBox(horizontalLayoutWidget_7);
        date_oper_day->setObjectName(QStringLiteral("date_oper_day"));
        date_oper_day->setMinimumSize(QSize(55, 25));
        date_oper_day->setMaximumSize(QSize(50, 16777215));
        date_oper_day->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        date_oper_day->setMaximum(999);

        verticalLayout_1->addWidget(date_oper_day);


        date_operations_Layout->addLayout(verticalLayout_1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_11 = new QLabel(horizontalLayoutWidget_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_13->addWidget(label_11);

        date_oper_hour = new QSpinBox(horizontalLayoutWidget_7);
        date_oper_hour->setObjectName(QStringLiteral("date_oper_hour"));
        date_oper_hour->setMinimumSize(QSize(55, 25));
        date_oper_hour->setMaximumSize(QSize(50, 16777215));
        date_oper_hour->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        date_oper_hour->setMaximum(999);

        verticalLayout_13->addWidget(date_oper_hour);


        date_operations_Layout->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(horizontalLayoutWidget_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_12->addWidget(label_12);

        date_oper_min = new QSpinBox(horizontalLayoutWidget_7);
        date_oper_min->setObjectName(QStringLiteral("date_oper_min"));
        date_oper_min->setMinimumSize(QSize(55, 25));
        date_oper_min->setMaximumSize(QSize(50, 16777215));
        date_oper_min->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        date_oper_min->setMaximum(999);

        verticalLayout_12->addWidget(date_oper_min);


        date_operations_Layout->addLayout(verticalLayout_12);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        date_operations_Layout->addItem(horizontalSpacer_6);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(3);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        date_add = new QRadioButton(horizontalLayoutWidget_7);
        date_add->setObjectName(QStringLiteral("date_add"));
        date_add->setStyleSheet(QStringLiteral("color:#a5a5a5;"));
        date_add->setChecked(true);

        verticalLayout_14->addWidget(date_add);

        date_subs = new QRadioButton(horizontalLayoutWidget_7);
        date_subs->setObjectName(QStringLiteral("date_subs"));
        date_subs->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_14->addWidget(date_subs);


        date_operations_Layout->addLayout(verticalLayout_14);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        date_operations_Layout->addItem(horizontalSpacer_3);

        date_oper_clear = new QPushButton(horizontalLayoutWidget_7);
        date_oper_clear->setObjectName(QStringLiteral("date_oper_clear"));
        date_oper_clear->setMinimumSize(QSize(0, 25));
        date_oper_clear->setMaximumSize(QSize(90, 16777215));
        date_oper_clear->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        date_operations_Layout->addWidget(date_oper_clear);


        verticalLayout_2->addLayout(date_operations_Layout);


        verticalLayout_11->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_14 = new QLabel(horizontalLayoutWidget_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_10->addWidget(label_14);

        date_output_Layout = new QHBoxLayout();
        date_output_Layout->setSpacing(6);
        date_output_Layout->setObjectName(QStringLiteral("date_output_Layout"));
        date_output = new QDateTimeEdit(horizontalLayoutWidget_7);
        date_output->setObjectName(QStringLiteral("date_output"));
        date_output->setEnabled(true);
        date_output->setMinimumSize(QSize(0, 25));
        date_output->setMaximumSize(QSize(90, 16777215));
        date_output->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        date_output->setReadOnly(true);
        date_output->setButtonSymbols(QAbstractSpinBox::NoButtons);
        date_output->setKeyboardTracking(false);
        date_output->setDate(QDate(2021, 1, 1));

        date_output_Layout->addWidget(date_output);

        weekday_outp = new QLineEdit(horizontalLayoutWidget_7);
        weekday_outp->setObjectName(QStringLiteral("weekday_outp"));
        weekday_outp->setMinimumSize(QSize(0, 25));
        weekday_outp->setMaximumSize(QSize(90, 16777215));
        weekday_outp->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        weekday_outp->setReadOnly(true);

        date_output_Layout->addWidget(weekday_outp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        date_output_Layout->addItem(horizontalSpacer_2);

        date_calc_btn = new QPushButton(horizontalLayoutWidget_7);
        date_calc_btn->setObjectName(QStringLiteral("date_calc_btn"));
        date_calc_btn->setMinimumSize(QSize(0, 25));
        date_calc_btn->setMaximumSize(QSize(90, 16777215));
        date_calc_btn->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        date_output_Layout->addWidget(date_calc_btn);


        verticalLayout_10->addLayout(date_output_Layout);


        verticalLayout_11->addLayout(verticalLayout_10);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);


        date_Layout->addLayout(verticalLayout_11);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        date_Layout->addItem(horizontalSpacer_4);

        tabWidget->addTab(date_tab, QString());
        ddmmhh_tab = new QWidget();
        ddmmhh_tab->setObjectName(QStringLiteral("ddmmhh_tab"));
        horizontalLayoutWidget_8 = new QWidget(ddmmhh_tab);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(0, 0, 420, 184));
        ddhhmm_Layout = new QHBoxLayout(horizontalLayoutWidget_8);
        ddhhmm_Layout->setSpacing(6);
        ddhhmm_Layout->setContentsMargins(11, 11, 11, 11);
        ddhhmm_Layout->setObjectName(QStringLiteral("ddhhmm_Layout"));
        ddhhmm_Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ddhhmm_Layout->addItem(horizontalSpacer_7);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_10);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_16 = new QLabel(horizontalLayoutWidget_8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_19->addWidget(label_16);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ddmmhh_input_day = new QSpinBox(horizontalLayoutWidget_8);
        ddmmhh_input_day->setObjectName(QStringLiteral("ddmmhh_input_day"));
        ddmmhh_input_day->setMinimumSize(QSize(55, 25));
        ddmmhh_input_day->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        horizontalLayout->addWidget(ddmmhh_input_day);

        horizontalSpacer_13 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        ddmmhh_input_hour = new QSpinBox(horizontalLayoutWidget_8);
        ddmmhh_input_hour->setObjectName(QStringLiteral("ddmmhh_input_hour"));
        ddmmhh_input_hour->setMinimumSize(QSize(55, 25));
        ddmmhh_input_hour->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_input_hour->setMaximum(999);

        horizontalLayout->addWidget(ddmmhh_input_hour);

        horizontalSpacer_14 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        ddmmhh_input_min = new QSpinBox(horizontalLayoutWidget_8);
        ddmmhh_input_min->setObjectName(QStringLiteral("ddmmhh_input_min"));
        ddmmhh_input_min->setMinimumSize(QSize(55, 25));
        ddmmhh_input_min->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_input_min->setMaximum(999);

        horizontalLayout->addWidget(ddmmhh_input_min);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        ddhhmm_inp_clear_2 = new QPushButton(horizontalLayoutWidget_8);
        ddhhmm_inp_clear_2->setObjectName(QStringLiteral("ddhhmm_inp_clear_2"));
        ddhhmm_inp_clear_2->setMinimumSize(QSize(0, 25));
        ddhhmm_inp_clear_2->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        horizontalLayout->addWidget(ddhhmm_inp_clear_2);


        verticalLayout_19->addLayout(horizontalLayout);


        verticalLayout_18->addLayout(verticalLayout_19);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_9);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_17 = new QLabel(horizontalLayoutWidget_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_20->addWidget(label_17);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(horizontalLayoutWidget_8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_5->addWidget(label_4);

        ddmmhh_oper_day = new QSpinBox(horizontalLayoutWidget_8);
        ddmmhh_oper_day->setObjectName(QStringLiteral("ddmmhh_oper_day"));
        ddmmhh_oper_day->setMinimumSize(QSize(55, 25));
        ddmmhh_oper_day->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        verticalLayout_5->addWidget(ddmmhh_oper_day);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(horizontalLayoutWidget_8);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_6->addWidget(label_5);

        ddmmhh_oper_hour = new QSpinBox(horizontalLayoutWidget_8);
        ddmmhh_oper_hour->setObjectName(QStringLiteral("ddmmhh_oper_hour"));
        ddmmhh_oper_hour->setMinimumSize(QSize(55, 25));
        ddmmhh_oper_hour->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_oper_hour->setMaximum(999);

        verticalLayout_6->addWidget(ddmmhh_oper_hour);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(horizontalLayoutWidget_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_7->addWidget(label_6);

        ddmmhh_oper_min = new QSpinBox(horizontalLayoutWidget_8);
        ddmmhh_oper_min->setObjectName(QStringLiteral("ddmmhh_oper_min"));
        ddmmhh_oper_min->setMinimumSize(QSize(55, 25));
        ddmmhh_oper_min->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_oper_min->setMaximum(999);

        verticalLayout_7->addWidget(ddmmhh_oper_min);


        horizontalLayout_2->addLayout(verticalLayout_7);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        ddmmhh_add = new QRadioButton(horizontalLayoutWidget_8);
        ddmmhh_add->setObjectName(QStringLiteral("ddmmhh_add"));
        ddmmhh_add->setStyleSheet(QStringLiteral("color:#a5a5a5;"));
        ddmmhh_add->setChecked(true);

        verticalLayout_8->addWidget(ddmmhh_add);

        ddmmhh_subs = new QRadioButton(horizontalLayoutWidget_8);
        ddmmhh_subs->setObjectName(QStringLiteral("ddmmhh_subs"));
        ddmmhh_subs->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_8->addWidget(ddmmhh_subs);


        horizontalLayout_2->addLayout(verticalLayout_8);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        ddhhmm_oper_clear = new QPushButton(horizontalLayoutWidget_8);
        ddhhmm_oper_clear->setObjectName(QStringLiteral("ddhhmm_oper_clear"));
        ddhhmm_oper_clear->setMinimumSize(QSize(0, 25));
        ddhhmm_oper_clear->setMaximumSize(QSize(16777215, 25));
        ddhhmm_oper_clear->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        horizontalLayout_2->addWidget(ddhhmm_oper_clear);


        verticalLayout_20->addLayout(horizontalLayout_2);


        verticalLayout_18->addLayout(verticalLayout_20);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_8);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        label_18 = new QLabel(horizontalLayoutWidget_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QStringLiteral("color:#a5a5a5;"));

        verticalLayout_22->addWidget(label_18);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ddmmhh_output_day = new QLineEdit(horizontalLayoutWidget_8);
        ddmmhh_output_day->setObjectName(QStringLiteral("ddmmhh_output_day"));
        ddmmhh_output_day->setMinimumSize(QSize(0, 25));
        ddmmhh_output_day->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_day->setReadOnly(true);

        horizontalLayout_3->addWidget(ddmmhh_output_day);

        ddmmhh_output_hour = new QLineEdit(horizontalLayoutWidget_8);
        ddmmhh_output_hour->setObjectName(QStringLiteral("ddmmhh_output_hour"));
        ddmmhh_output_hour->setMinimumSize(QSize(0, 25));
        ddmmhh_output_hour->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_hour->setReadOnly(true);

        horizontalLayout_3->addWidget(ddmmhh_output_hour);

        ddmmhh_output_min = new QLineEdit(horizontalLayoutWidget_8);
        ddmmhh_output_min->setObjectName(QStringLiteral("ddmmhh_output_min"));
        ddmmhh_output_min->setMinimumSize(QSize(0, 25));
        ddmmhh_output_min->setAutoFillBackground(false);
        ddmmhh_output_min->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_min->setReadOnly(true);

        horizontalLayout_3->addWidget(ddmmhh_output_min);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        ddhhmm_calc_btn = new QPushButton(horizontalLayoutWidget_8);
        ddhhmm_calc_btn->setObjectName(QStringLiteral("ddhhmm_calc_btn"));
        ddhhmm_calc_btn->setMinimumSize(QSize(0, 25));
        ddhhmm_calc_btn->setStyleSheet(QStringLiteral("background-color: #a5a5a5;color:black;"));

        horizontalLayout_3->addWidget(ddhhmm_calc_btn);


        verticalLayout_22->addLayout(horizontalLayout_3);


        verticalLayout_18->addLayout(verticalLayout_22);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_7);


        ddhhmm_Layout->addLayout(verticalLayout_18);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ddhhmm_Layout->addItem(horizontalSpacer_8);

        tabWidget->addTab(ddmmhh_tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        label_14->raise();
        label_18->raise();
        label_18->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Time Calculator", 0));
        label_13->setText(QApplication::translate("MainWindow", " Input", 0));
#ifndef QT_NO_TOOLTIP
        date_input->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        date_input->setDisplayFormat(QApplication::translate("MainWindow", "dd.MM H:mm", 0));
        weekday_inp->setText(QApplication::translate("MainWindow", "Friday", 0));
        date_inp_clear_3->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_15->setText(QApplication::translate("MainWindow", "Operations", 0));
        label_10->setText(QApplication::translate("MainWindow", "Day", 0));
        label_11->setText(QApplication::translate("MainWindow", "Hour", 0));
        label_12->setText(QApplication::translate("MainWindow", "Minute", 0));
        date_add->setText(QApplication::translate("MainWindow", "Add", 0));
        date_subs->setText(QApplication::translate("MainWindow", "Substract", 0));
        date_oper_clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_14->setText(QApplication::translate("MainWindow", "Output", 0));
        date_output->setDisplayFormat(QApplication::translate("MainWindow", "dd.MM H:mm", 0));
        weekday_outp->setPlaceholderText(QApplication::translate("MainWindow", "N/A", 0));
        date_calc_btn->setText(QApplication::translate("MainWindow", "Calculate", 0));
        tabWidget->setTabText(tabWidget->indexOf(date_tab), QApplication::translate("MainWindow", "Date", 0));
        label_16->setText(QApplication::translate("MainWindow", " Input   Day               Hour            Minute", 0));
        ddhhmm_inp_clear_2->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_17->setText(QApplication::translate("MainWindow", "Operations", 0));
        label_4->setText(QApplication::translate("MainWindow", "Day", 0));
        label_5->setText(QApplication::translate("MainWindow", "Hour", 0));
        label_6->setText(QApplication::translate("MainWindow", "Minute", 0));
        ddmmhh_add->setText(QApplication::translate("MainWindow", "Add", 0));
        ddmmhh_subs->setText(QApplication::translate("MainWindow", "Substract", 0));
        ddhhmm_oper_clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_18->setText(QApplication::translate("MainWindow", "Output            Day                         Hour                     Minute", 0));
        ddmmhh_output_day->setPlaceholderText(QApplication::translate("MainWindow", "N/A", 0));
        ddmmhh_output_hour->setPlaceholderText(QApplication::translate("MainWindow", "N/A", 0));
        ddmmhh_output_min->setPlaceholderText(QApplication::translate("MainWindow", "N/A", 0));
        ddhhmm_calc_btn->setText(QApplication::translate("MainWindow", "Calculate", 0));
        tabWidget->setTabText(tabWidget->indexOf(ddmmhh_tab), QApplication::translate("MainWindow", "dd/hh/mm", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
