#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>
#include<vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void winning_system();

    bool areDistinct(std::vector<int> arr);


public slots:

    void set1();
    void set2();
    void set3();
    void set4();
    void set5();
    void set6();
    void set7();
    void set8();
    void set9();
    void game_start();
    void start_turn();
    void check_win();
    void winner();
    void tie_game();

signals:
    void set_turn();
    void turn_threshhold();
    void set_win();
    void set_tie();

private slots:
    void on_label_9_linkActivated(const QString &link);

    void on_restart_clicked();

private:
    Ui::MainWindow *ui;

    char game_board[3][3];

    char turn_system;

    std::vector<int> no_win;

    bool win;

    bool tie;

    int turn_count;
};
#endif // MAINWINDOW_H
