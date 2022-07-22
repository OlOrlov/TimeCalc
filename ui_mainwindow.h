/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLabel *label_13;
    QLineEdit *weekday_inp;
    QDateTimeEdit *date_input;
    QPushButton *date_inp_clear_3;
    QLabel *label_15;
    QLabel *label_10;
    QSpinBox *date_oper_day;
    QLabel *label_11;
    QSpinBox *date_oper_hour;
    QLabel *label_12;
    QSpinBox *date_oper_min;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_14;
    QRadioButton *date_add;
    QRadioButton *date_subs;
    QRadioButton *Date_subs_date;
    QPushButton *date_oper_clear;
    QLineEdit *weekday_subs;
    QDateTimeEdit *date_subs_inp;
    QLabel *label_14;
    QPushButton *date_calc_btn;
    QDateTimeEdit *date_output;
    QLineEdit *weekday_outp;
    QLabel *label_19;
    QLineEdit *date_subs_output_hour;
    QLineEdit *date_subs_output_day;
    QLineEdit *date_subs_output_min;
    QWidget *ddmmhh_tab;
    QPushButton *ddhhmm_inp_clear_2;
    QSpinBox *ddmmhh_input_hour;
    QSpinBox *ddmmhh_input_day;
    QSpinBox *ddmmhh_input_min;
    QLabel *label_17;
    QSpinBox *ddmmhh_oper_min;
    QLabel *label_6;
    QLabel *label_5;
    QSpinBox *ddmmhh_oper_hour;
    QLabel *label_4;
    QSpinBox *ddmmhh_oper_day;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *ddmmhh_add;
    QRadioButton *ddmmhh_subs;
    QPushButton *ddhhmm_oper_clear;
    QLineEdit *ddmmhh_output_day;
    QPushButton *ddhhmm_calc_btn;
    QLineEdit *ddmmhh_output_hour;
    QLineEdit *ddmmhh_output_min;
    QLabel *label_20;
    QLabel *label_37;
    QLabel *label_34;
    QLabel *label_35;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 320);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 431, 301));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: #3b3838; color:black;\n"
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
        date_tab->setObjectName(QString::fromUtf8("date_tab"));
        label_13 = new QLabel(date_tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 10, 473, 16));
        label_13->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        weekday_inp = new QLineEdit(date_tab);
        weekday_inp->setObjectName(QString::fromUtf8("weekday_inp"));
        weekday_inp->setGeometry(QRect(109, 50, 75, 25));
        weekday_inp->setMinimumSize(QSize(0, 25));
        weekday_inp->setMaximumSize(QSize(90, 16777215));
        weekday_inp->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        weekday_inp->setReadOnly(true);
        date_input = new QDateTimeEdit(date_tab);
        date_input->setObjectName(QString::fromUtf8("date_input"));
        date_input->setGeometry(QRect(10, 50, 90, 25));
        date_input->setMinimumSize(QSize(0, 25));
        date_input->setMaximumSize(QSize(90, 16777215));
        date_input->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_input->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        date_input->setDateTime(QDateTime(QDate(2021, 1, 1), QTime(0, 0, 0)));
        date_input->setCalendarPopup(true);
        date_inp_clear_3 = new QPushButton(date_tab);
        date_inp_clear_3->setObjectName(QString::fromUtf8("date_inp_clear_3"));
        date_inp_clear_3->setGeometry(QRect(210, 50, 80, 25));
        date_inp_clear_3->setMinimumSize(QSize(0, 25));
        date_inp_clear_3->setMaximumSize(QSize(90, 16777215));
        date_inp_clear_3->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        label_15 = new QLabel(date_tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 100, 71, 16));
        label_15->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        label_10 = new QLabel(date_tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 120, 55, 22));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        date_oper_day = new QSpinBox(date_tab);
        date_oper_day->setObjectName(QString::fromUtf8("date_oper_day"));
        date_oper_day->setGeometry(QRect(10, 140, 55, 25));
        date_oper_day->setMinimumSize(QSize(55, 25));
        date_oper_day->setMaximumSize(QSize(50, 16777215));
        date_oper_day->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_oper_day->setMaximum(999);
        label_11 = new QLabel(date_tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 120, 55, 22));
        label_11->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        date_oper_hour = new QSpinBox(date_tab);
        date_oper_hour->setObjectName(QString::fromUtf8("date_oper_hour"));
        date_oper_hour->setGeometry(QRect(70, 140, 55, 25));
        date_oper_hour->setMinimumSize(QSize(55, 25));
        date_oper_hour->setMaximumSize(QSize(50, 16777215));
        date_oper_hour->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_oper_hour->setMaximum(999);
        label_12 = new QLabel(date_tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 120, 55, 22));
        label_12->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        date_oper_min = new QSpinBox(date_tab);
        date_oper_min->setObjectName(QString::fromUtf8("date_oper_min"));
        date_oper_min->setGeometry(QRect(130, 140, 55, 25));
        date_oper_min->setMinimumSize(QSize(55, 25));
        date_oper_min->setMaximumSize(QSize(50, 16777215));
        date_oper_min->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_oper_min->setMaximum(999);
        layoutWidget = new QWidget(date_tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 50, 102, 74));
        verticalLayout_14 = new QVBoxLayout(layoutWidget);
        verticalLayout_14->setSpacing(3);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        date_add = new QRadioButton(layoutWidget);
        date_add->setObjectName(QString::fromUtf8("date_add"));
        date_add->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        date_add->setChecked(true);

        verticalLayout_14->addWidget(date_add);

        date_subs = new QRadioButton(layoutWidget);
        date_subs->setObjectName(QString::fromUtf8("date_subs"));
        date_subs->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));

        verticalLayout_14->addWidget(date_subs);

        Date_subs_date = new QRadioButton(layoutWidget);
        Date_subs_date->setObjectName(QString::fromUtf8("Date_subs_date"));
        Date_subs_date->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));

        verticalLayout_14->addWidget(Date_subs_date);

        date_oper_clear = new QPushButton(date_tab);
        date_oper_clear->setObjectName(QString::fromUtf8("date_oper_clear"));
        date_oper_clear->setGeometry(QRect(210, 140, 80, 25));
        date_oper_clear->setMinimumSize(QSize(0, 25));
        date_oper_clear->setMaximumSize(QSize(90, 16777215));
        date_oper_clear->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        weekday_subs = new QLineEdit(date_tab);
        weekday_subs->setObjectName(QString::fromUtf8("weekday_subs"));
        weekday_subs->setGeometry(QRect(100, 140, 90, 25));
        weekday_subs->setMinimumSize(QSize(0, 25));
        weekday_subs->setMaximumSize(QSize(90, 16777215));
        weekday_subs->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        weekday_subs->setReadOnly(true);
        date_subs_inp = new QDateTimeEdit(date_tab);
        date_subs_inp->setObjectName(QString::fromUtf8("date_subs_inp"));
        date_subs_inp->setGeometry(QRect(10, 140, 84, 25));
        date_subs_inp->setMinimumSize(QSize(0, 25));
        date_subs_inp->setMaximumSize(QSize(90, 16777215));
        date_subs_inp->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_subs_inp->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        date_subs_inp->setDateTime(QDateTime(QDate(2021, 1, 1), QTime(0, 0, 0)));
        date_subs_inp->setCalendarPopup(true);
        label_14 = new QLabel(date_tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 180, 61, 16));
        label_14->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        date_calc_btn = new QPushButton(date_tab);
        date_calc_btn->setObjectName(QString::fromUtf8("date_calc_btn"));
        date_calc_btn->setGeometry(QRect(320, 220, 80, 25));
        date_calc_btn->setMinimumSize(QSize(0, 25));
        date_calc_btn->setMaximumSize(QSize(90, 16777215));
        date_calc_btn->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_output = new QDateTimeEdit(date_tab);
        date_output->setObjectName(QString::fromUtf8("date_output"));
        date_output->setEnabled(true);
        date_output->setGeometry(QRect(10, 220, 90, 25));
        date_output->setMinimumSize(QSize(0, 25));
        date_output->setMaximumSize(QSize(90, 16777215));
        date_output->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_output->setReadOnly(true);
        date_output->setButtonSymbols(QAbstractSpinBox::NoButtons);
        date_output->setKeyboardTracking(false);
        date_output->setDate(QDate(2021, 1, 1));
        weekday_outp = new QLineEdit(date_tab);
        weekday_outp->setObjectName(QString::fromUtf8("weekday_outp"));
        weekday_outp->setGeometry(QRect(109, 220, 75, 25));
        weekday_outp->setMinimumSize(QSize(0, 25));
        weekday_outp->setMaximumSize(QSize(90, 16777215));
        weekday_outp->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        weekday_outp->setReadOnly(true);
        label_19 = new QLabel(date_tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 200, 261, 16));
        label_19->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        date_subs_output_hour = new QLineEdit(date_tab);
        date_subs_output_hour->setObjectName(QString::fromUtf8("date_subs_output_hour"));
        date_subs_output_hour->setGeometry(QRect(87, 220, 71, 25));
        date_subs_output_hour->setMinimumSize(QSize(0, 25));
        date_subs_output_hour->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_subs_output_hour->setReadOnly(true);
        date_subs_output_day = new QLineEdit(date_tab);
        date_subs_output_day->setObjectName(QString::fromUtf8("date_subs_output_day"));
        date_subs_output_day->setGeometry(QRect(10, 220, 71, 25));
        date_subs_output_day->setMinimumSize(QSize(0, 25));
        date_subs_output_day->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_subs_output_day->setReadOnly(true);
        date_subs_output_min = new QLineEdit(date_tab);
        date_subs_output_min->setObjectName(QString::fromUtf8("date_subs_output_min"));
        date_subs_output_min->setGeometry(QRect(164, 220, 71, 25));
        date_subs_output_min->setMinimumSize(QSize(0, 25));
        date_subs_output_min->setAutoFillBackground(false);
        date_subs_output_min->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        date_subs_output_min->setReadOnly(true);
        tabWidget->addTab(date_tab, QString());
        ddmmhh_tab = new QWidget();
        ddmmhh_tab->setObjectName(QString::fromUtf8("ddmmhh_tab"));
        ddhhmm_inp_clear_2 = new QPushButton(ddmmhh_tab);
        ddhhmm_inp_clear_2->setObjectName(QString::fromUtf8("ddhhmm_inp_clear_2"));
        ddhhmm_inp_clear_2->setGeometry(QRect(210, 50, 80, 25));
        ddhhmm_inp_clear_2->setMinimumSize(QSize(0, 25));
        ddhhmm_inp_clear_2->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_input_hour = new QSpinBox(ddmmhh_tab);
        ddmmhh_input_hour->setObjectName(QString::fromUtf8("ddmmhh_input_hour"));
        ddmmhh_input_hour->setGeometry(QRect(70, 50, 55, 25));
        ddmmhh_input_hour->setMinimumSize(QSize(55, 25));
        ddmmhh_input_hour->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_input_hour->setMaximum(999);
        ddmmhh_input_day = new QSpinBox(ddmmhh_tab);
        ddmmhh_input_day->setObjectName(QString::fromUtf8("ddmmhh_input_day"));
        ddmmhh_input_day->setGeometry(QRect(10, 50, 55, 25));
        ddmmhh_input_day->setMinimumSize(QSize(55, 25));
        ddmmhh_input_day->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_input_min = new QSpinBox(ddmmhh_tab);
        ddmmhh_input_min->setObjectName(QString::fromUtf8("ddmmhh_input_min"));
        ddmmhh_input_min->setGeometry(QRect(130, 50, 55, 25));
        ddmmhh_input_min->setMinimumSize(QSize(55, 25));
        ddmmhh_input_min->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_input_min->setMaximum(999);
        label_17 = new QLabel(ddmmhh_tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 100, 71, 16));
        label_17->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        ddmmhh_oper_min = new QSpinBox(ddmmhh_tab);
        ddmmhh_oper_min->setObjectName(QString::fromUtf8("ddmmhh_oper_min"));
        ddmmhh_oper_min->setGeometry(QRect(130, 140, 55, 25));
        ddmmhh_oper_min->setMinimumSize(QSize(55, 25));
        ddmmhh_oper_min->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_oper_min->setMaximum(999);
        label_6 = new QLabel(ddmmhh_tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 120, 55, 22));
        label_6->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        label_5 = new QLabel(ddmmhh_tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 120, 55, 22));
        label_5->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        ddmmhh_oper_hour = new QSpinBox(ddmmhh_tab);
        ddmmhh_oper_hour->setObjectName(QString::fromUtf8("ddmmhh_oper_hour"));
        ddmmhh_oper_hour->setGeometry(QRect(70, 140, 55, 25));
        ddmmhh_oper_hour->setMinimumSize(QSize(55, 25));
        ddmmhh_oper_hour->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_oper_hour->setMaximum(999);
        label_4 = new QLabel(ddmmhh_tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 55, 22));
        label_4->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        ddmmhh_oper_day = new QSpinBox(ddmmhh_tab);
        ddmmhh_oper_day->setObjectName(QString::fromUtf8("ddmmhh_oper_day"));
        ddmmhh_oper_day->setGeometry(QRect(10, 140, 55, 25));
        ddmmhh_oper_day->setMinimumSize(QSize(55, 25));
        ddmmhh_oper_day->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        widget = new QWidget(ddmmhh_tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 50, 76, 49));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        ddmmhh_add = new QRadioButton(widget);
        ddmmhh_add->setObjectName(QString::fromUtf8("ddmmhh_add"));
        ddmmhh_add->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        ddmmhh_add->setChecked(true);

        verticalLayout_8->addWidget(ddmmhh_add);

        ddmmhh_subs = new QRadioButton(widget);
        ddmmhh_subs->setObjectName(QString::fromUtf8("ddmmhh_subs"));
        ddmmhh_subs->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));

        verticalLayout_8->addWidget(ddmmhh_subs);

        ddhhmm_oper_clear = new QPushButton(ddmmhh_tab);
        ddhhmm_oper_clear->setObjectName(QString::fromUtf8("ddhhmm_oper_clear"));
        ddhhmm_oper_clear->setGeometry(QRect(210, 140, 80, 25));
        ddhhmm_oper_clear->setMinimumSize(QSize(0, 25));
        ddhhmm_oper_clear->setMaximumSize(QSize(16777215, 25));
        ddhhmm_oper_clear->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_day = new QLineEdit(ddmmhh_tab);
        ddmmhh_output_day->setObjectName(QString::fromUtf8("ddmmhh_output_day"));
        ddmmhh_output_day->setGeometry(QRect(10, 220, 71, 25));
        ddmmhh_output_day->setMinimumSize(QSize(0, 25));
        ddmmhh_output_day->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_day->setReadOnly(true);
        ddhhmm_calc_btn = new QPushButton(ddmmhh_tab);
        ddhhmm_calc_btn->setObjectName(QString::fromUtf8("ddhhmm_calc_btn"));
        ddhhmm_calc_btn->setGeometry(QRect(320, 220, 80, 25));
        ddhhmm_calc_btn->setMinimumSize(QSize(0, 25));
        ddhhmm_calc_btn->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_hour = new QLineEdit(ddmmhh_tab);
        ddmmhh_output_hour->setObjectName(QString::fromUtf8("ddmmhh_output_hour"));
        ddmmhh_output_hour->setGeometry(QRect(87, 220, 71, 25));
        ddmmhh_output_hour->setMinimumSize(QSize(0, 25));
        ddmmhh_output_hour->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_hour->setReadOnly(true);
        ddmmhh_output_min = new QLineEdit(ddmmhh_tab);
        ddmmhh_output_min->setObjectName(QString::fromUtf8("ddmmhh_output_min"));
        ddmmhh_output_min->setGeometry(QRect(164, 220, 71, 25));
        ddmmhh_output_min->setMinimumSize(QSize(0, 25));
        ddmmhh_output_min->setAutoFillBackground(false);
        ddmmhh_output_min->setStyleSheet(QString::fromUtf8("background-color: #a5a5a5;color:black;"));
        ddmmhh_output_min->setReadOnly(true);
        label_20 = new QLabel(ddmmhh_tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 10, 473, 16));
        label_20->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        label_37 = new QLabel(ddmmhh_tab);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(10, 180, 61, 16));
        label_37->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        label_34 = new QLabel(ddmmhh_tab);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 200, 261, 16));
        label_34->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        label_35 = new QLabel(ddmmhh_tab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 30, 261, 16));
        label_35->setStyleSheet(QString::fromUtf8("color:#a5a5a5;"));
        tabWidget->addTab(ddmmhh_tab, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Time Calculator", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", " Input", nullptr));
        weekday_inp->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
#if QT_CONFIG(tooltip)
        date_input->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        date_input->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd.MM H:mm", nullptr));
        date_inp_clear_3->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Operations", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Hour", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Minute", nullptr));
        date_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        date_subs->setText(QCoreApplication::translate("MainWindow", "Substract", nullptr));
        Date_subs_date->setText(QCoreApplication::translate("MainWindow", "Substract date", nullptr));
        date_oper_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        weekday_subs->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
#if QT_CONFIG(tooltip)
        date_subs_inp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        date_subs_inp->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd.MM H:mm", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        date_calc_btn->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        date_output->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd.MM H:mm", nullptr));
        weekday_outp->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Day                   Hour                Minute", nullptr));
        date_subs_output_hour->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        date_subs_output_day->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        date_subs_output_min->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(date_tab), QCoreApplication::translate("MainWindow", "Date", nullptr));
        ddhhmm_inp_clear_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Operations", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Minute", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Hour", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        ddmmhh_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        ddmmhh_subs->setText(QCoreApplication::translate("MainWindow", "Substract", nullptr));
        ddhhmm_oper_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ddmmhh_output_day->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        ddhhmm_calc_btn->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        ddmmhh_output_hour->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        ddmmhh_output_min->setPlaceholderText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", " Input", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Day                   Hour                Minute", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Day             Hour           Minute", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ddmmhh_tab), QCoreApplication::translate("MainWindow", "dd/hh/mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
