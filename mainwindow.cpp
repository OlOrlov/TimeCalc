#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("color: #3b3838;"\
                        "background-color: #3b3838;");
    setWindowIcon(QIcon(":/calculator.png"));

    ui->date_subs_inp->setHidden(true);
    ui->weekday_subs->setHidden(true);
    ui->date_subs_output_day->setHidden(true);
    ui->date_subs_output_hour->setHidden(true);
    ui->date_subs_output_min->setHidden(true);
    ui->label_19->setHidden(true);

    ui->date_input->setDisplayFormat("dd.MM HH:mm");
    ui->date_input->setToolTip("dd.mm hh.ss");

    ui->date_output->setDisplayFormat("dd.MM HH:mm");
    ui->date_output->setToolTip("dd.mm hh.ss");

    ui->ddmmhh_output_min->setPlaceholderText("N/A");
    ui->ddmmhh_output_hour->setPlaceholderText("N/A");
    ui->ddmmhh_output_day->setPlaceholderText("N/A");

    on_date_inp_clear_3_clicked();
    on_date_oper_clear_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ddhhmm_calc_btn_clicked()
{
    quint16 outp_min = 0;
    quint16 outp_hour = 0;
    quint16 outp_day = 0;

    while(ui->ddmmhh_input_min->value() >= 60)
    {
        ui->ddmmhh_input_min->setValue(ui->ddmmhh_input_min->value() - 60);
        ui->ddmmhh_input_hour->setValue(ui->ddmmhh_input_hour->value() + 1);
    }

    while(ui->ddmmhh_input_hour->value() >= 24)
    {
        ui->ddmmhh_input_hour->setValue(ui->ddmmhh_input_hour->value() - 24);
        ui->ddmmhh_input_day->setValue(ui->ddmmhh_input_day->value() + 1);
    }

    while(ui->ddmmhh_oper_min->value() >= 60)
    {
        ui->ddmmhh_oper_min->setValue(ui->ddmmhh_oper_min->value() - 60);
        ui->ddmmhh_oper_hour->setValue(ui->ddmmhh_oper_hour->value() + 1);
    }

    while(ui->ddmmhh_oper_hour->value() >= 24)
    {
        ui->ddmmhh_oper_hour->setValue(ui->ddmmhh_oper_hour->value() - 24);
        ui->ddmmhh_oper_day->setValue(ui->ddmmhh_oper_day->value() + 1);
    }

    quint16 inp_days = ui->ddmmhh_input_day->value();
    quint16 inp_hours = ui->ddmmhh_input_hour->value();
    quint16 inp_minutes = ui->ddmmhh_input_min->value();

    quint16 oper_days = ui->ddmmhh_oper_day->value();
    quint16 oper_hours = ui->ddmmhh_oper_hour->value();
    quint16 oper_minutes = ui->ddmmhh_oper_min->value();

    if (ui->ddmmhh_add->isChecked())
    {
        // ADD
        outp_min = inp_minutes + oper_minutes;
        outp_hour = inp_hours + oper_hours;
        outp_day = inp_days + oper_days;

        correctDate(&outp_min, &outp_hour, &outp_day);

        ui->ddmmhh_output_min->setText(QString::number(outp_min));
        ui->ddmmhh_output_hour->setText(QString::number(outp_hour));
        ui->ddmmhh_output_day->setText(QString::number(outp_day));
    }
    else
    {
        // SUBSTRACT
        outp_min = inp_minutes - oper_minutes + 60 * (inp_hours - oper_hours + 24 * (inp_days - oper_days));



        correctDate(&outp_min, &outp_hour, &outp_day);

        ui->ddmmhh_output_min->setText(QString::number(outp_min));
        ui->ddmmhh_output_hour->setText(QString::number(outp_hour));
        ui->ddmmhh_output_day->setText(QString::number(outp_day));
    }
}

void MainWindow::correctDate(quint16* min, quint16* hour, quint16* day)
{
    while (*min >= 60)
    {
        *min -= 60;
        *hour += 1;
    }

    while (*hour >= 24)
    {
        *hour -= 24;
        *day += 1;
    }
}

void MainWindow::on_ddhhmm_inp_clear_2_clicked()
{
    ui->ddmmhh_input_day->setValue(0);
    ui->ddmmhh_input_hour->setValue(0);
    ui->ddmmhh_input_min->setValue(0);
}

void MainWindow::on_ddhhmm_oper_clear_clicked()
{
    ui->ddmmhh_oper_day->setValue(0);
    ui->ddmmhh_oper_hour->setValue(0);
    ui->ddmmhh_oper_min->setValue(0);
}


void MainWindow::on_date_calc_btn_clicked()
{
    QDateTime input_dt = ui->date_input->dateTime();
    QTime input_t = ui->date_input->time();

    while(ui->date_oper_min->value() >= 60)
    {
        ui->date_oper_min->setValue(ui->date_oper_min->value() - 60);
        ui->date_oper_hour->setValue(ui->date_oper_hour->value() + 1);
    }

    while(ui->date_oper_hour->value() >= 24)
    {
        ui->date_oper_hour->setValue(ui->date_oper_hour->value() - 24);
        ui->date_oper_day->setValue(ui->date_oper_day->value() + 1);
    }

    quint16 oper_days = ui->date_oper_day->value();
    quint16 oper_hours = ui->date_oper_hour->value();
    quint16 oper_minutes = ui->date_oper_min->value();

    int oper_secs_total = 60 * (oper_minutes + 60 * (oper_hours));

    if (ui->date_add->isChecked())
    {
        // Add
        input_t = input_t.addSecs(oper_secs_total);
        input_dt = input_dt.addDays(oper_days);
    }
    else
    {
        if (ui->date_subs->isChecked())
        {
            // Substract day
            input_t = input_t.addSecs(-oper_secs_total);
            input_dt = input_dt.addDays(-oper_days);
        }
        else
        {
            // Substract date
            oper_days = ui->date_subs_inp->dateTime().daysTo(ui->date_input->dateTime());
            oper_secs_total = ui->date_subs_inp->time().secsTo(ui->date_input->time()) + 1;
            oper_minutes = oper_secs_total / 60;

            while (oper_minutes >= 60)
            {
                oper_minutes -= 60;
                oper_hours += 1;
            }

            ui->date_subs_output_day->setText(QString::number(oper_days));
            ui->date_subs_output_hour->setText(QString::number(oper_hours));
            ui->date_subs_output_min->setText(QString::number(oper_minutes));
        }
    }


    ui->date_output->setDateTime(input_dt);
    ui->date_output->setTime(input_t);

    int day = ui->date_input->date().dayOfWeek();

    ui->weekday_outp->setText(weekday_names.at(day - 1));
}

void MainWindow::on_date_inp_clear_3_clicked()
{   
    ui->date_input->setDate(QDate::currentDate());
    ui->date_input->setTime(QTime::currentTime());
    int day = ui->date_input->date().dayOfWeek();
    ui->weekday_inp->setText(weekday_names.at(day - 1));
    day = ui->date_output->date().dayOfWeek();
    ui->weekday_outp->setText(weekday_names.at(day - 1));
}

void MainWindow::on_date_oper_clear_clicked()
{
    ui->date_oper_day->setValue(0);
    ui->date_oper_hour->setValue(0);
    ui->date_oper_min->setValue(0);

    ui->date_subs_inp->setDate(QDate::currentDate());
    ui->date_subs_inp->setTime(QTime::currentTime());
    int day = ui->date_subs_inp->date().dayOfWeek();
    ui->weekday_subs->setText(weekday_names.at(day - 1));
}

void MainWindow::on_date_input_dateChanged(const QDate &date)
{
    int day = ui->date_input->date().dayOfWeek();

    ui->weekday_inp->setText(weekday_names.at(day - 1));
}

void MainWindow::on_Date_subs_date_toggled(bool checked)
{
    ui->date_subs_inp->setVisible(checked);
    ui->weekday_subs->setVisible(checked);
    ui->date_subs_output_day->setVisible(checked);
    ui->date_subs_output_hour->setVisible(checked);
    ui->date_subs_output_min->setVisible(checked);
    ui->label_19->setVisible(checked);

    ui->date_output->setHidden(checked);
    ui->weekday_outp->setHidden(checked);

    ui->date_oper_day->setHidden(checked);
    ui->label_10->setHidden(checked);
    ui->date_oper_hour->setHidden(checked);
    ui->label_11->setHidden(checked);
    ui->date_oper_min->setHidden(checked);
    ui->label_12->setHidden(checked);
}


void MainWindow::on_date_subs_inp_dateChanged(const QDate &date)
{
    int day = ui->date_subs_inp->date().dayOfWeek();

    ui->weekday_subs->setText(weekday_names.at(day - 1));
}

