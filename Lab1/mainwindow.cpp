#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "auth.h"
#include "QFileDialog"
#include "QTextDocumentWriter"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action_2, SIGNAL(triggered()), this, SLOT(AboutLab1()));

    QAction* pactOpen = new QAction("file open action", 0);
    pactOpen->setText("&Открыть");
    pactOpen->setShortcut(QKeySequence("CTRL+W"));
    pactOpen->setToolTip("Открытие документа");
    pactOpen->setStatusTip("Открыть файл");
    pactOpen->setWhatsThis("Открыть файл");
    pactOpen->setIcon(QPixmap("pudge.png"));

    connect(pactOpen, SIGNAL(triggered()), SLOT(SlotOpen()));

    QAction* pactSave = new QAction("file save action", 0);
    pactSave->setText("&Сохранить");
    pactSave->setShortcut(QKeySequence("CTRL+S"));
    pactSave->setToolTip("Сохранение документа");
    pactSave->setStatusTip("Сохранить файл");
    pactSave->setWhatsThis("Сохранить файл");
    pactSave->setIcon(QPixmap("pudge.png"));

    connect(pactSave, SIGNAL(triggered()), SLOT(SlotSave()));

    QAction* pactClear = new QAction("file clear action", 0);
    pactClear->setText("&Очистить");
    pactClear->setShortcut(QKeySequence("CTRL+D"));
    pactClear->setToolTip("Очистка поля ввода");
    pactClear->setStatusTip("Очистить поле ввода");
    pactClear->setWhatsThis("Очистить поле ввода");
    pactClear->setIcon(QPixmap("pudge.png"));

    connect(pactClear, SIGNAL(triggered()), SLOT(SlotClear()));

    QMenu* menuFile = new QMenu("&Файл");
    menuFile->addAction(pactOpen);
    menuFile->addAction(pactSave);
    menuFile->addAction(pactClear);
    menuBar()->addMenu(menuFile);

    ui->menubar->addAction(pactOpen);
    ui->menubar->addAction(pactSave);
    ui->menubar->addAction(pactClear);
}

void MainWindow::AboutLab1(){
    Auth* aboutWindow = new Auth();
    aboutWindow->show();
}

void MainWindow::SlotOpen(){
    QString fileName = QFileDialog::getOpenFileName(0, "Сохранить файл", "", "*.txt");
    QFile file(fileName);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        ui->textEdit->setPlainText(file.readAll());
}

void MainWindow::SlotSave(){
    QString fileName = QFileDialog::getOpenFileName(0, "Открыть файл", "", "*.txt");
    QTextDocumentWriter writer;

    writer.setFileName(fileName);
    writer.write(ui->textEdit->document());
}

void MainWindow::SlotClear(){
    ui->textEdit->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

