#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QDebug>

class MainWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QPushButton *exitBtn;
    QTextEdit *logTxt;
    QComboBox *tagListChbox;

    QHBoxLayout *mainLayout;
    QVBoxLayout *rightLayout;

    // Select option for combox box
    QStringList tagOptions;

private slots:
    void combox_box_selected(QString str);

};

#endif // MAINWINDOW_H
