#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent)
{
    // 基础组件
    exitBtn = new QPushButton(tr("&Exit"));
    tagListChbox = new QComboBox();
    // 初始化combox select
    tagOptions = QStringList()
            << "Debug"
            << "Warn"
            << "Error"
            << "Exception";
    tagListChbox->addItems(tagOptions);
    logTxt = new QTextEdit();

    // 布局
    rightLayout = new QVBoxLayout();
    rightLayout->addWidget(tagListChbox);
    rightLayout->addStretch();
    rightLayout->addWidget(exitBtn);

    mainLayout = new QHBoxLayout();
    mainLayout->addWidget(logTxt);
    mainLayout->addLayout(rightLayout);

    setLayout(mainLayout);

    QRect position = QRect(QPoint(0, 0), QSize(800, 600));
    move(position.center());

    resize(800,600);

    connect(tagListChbox, SIGNAL(currentIndexChanged(QString)), this, SLOT(combox_box_selected(QString)));
}

MainWindow::~MainWindow()
{
    delete mainLayout;
}


void MainWindow::combox_box_selected(QString str) {
    qDebug() << "hello world";
}
