#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

#include<QString>
#include<QMessageBox>
#include<NNatural.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonExecutar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
