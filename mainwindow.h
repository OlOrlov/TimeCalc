#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ddhhmm_calc_btn_clicked();
    void on_ddhhmm_inp_clear_2_clicked();
    void on_ddhhmm_oper_clear_clicked();
    void on_date_inp_clear_3_clicked();
    void on_date_calc_btn_clicked();
    void on_date_oper_clear_clicked();
    void on_date_input_dateChanged(const QDate &date);

    void on_Date_subs_date_toggled(bool checked);

    void on_date_subs_inp_dateChanged(const QDate &date);

private:
    Ui::MainWindow *ui;
    void correctDate(quint16* min, quint16* hour, quint16* day);

    const QList<QString> weekday_names{
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"};
};

#endif // MAINWINDOW_H
