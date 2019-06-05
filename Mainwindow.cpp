#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonExecutar_clicked()
{
    try {

        int n1 = ui->lineEditPrimeiroNumero->text().toInt();
        int n2 = ui->lineEditSegundoNumero->text().toInt();
        NNatural numero1(n1);
        NNatural numero2(n2);
        QString n1Str = QString::number(n1);
        QString n2Str = QString::number(n2);
        //altera NÚMERO PERFEITO ==> linha
        //ui->tableWidgetTabela->setVerticalHeaderItem(0,item);

        //Altera colunas
        QTableWidgetItem *itemN1 = new QTableWidgetItem("NÚMERO 1: "+n1Str);
        QTableWidgetItem *itemN2 = new QTableWidgetItem("NÚMERO 2: "+n2Str);
        ui->tableWidgetTabela->setHorizontalHeaderItem(0,itemN1);
        ui->tableWidgetTabela->setHorizontalHeaderItem(1,itemN2);


        QString str1 = "NAO";
        QString str2 = "NAO";
        if(numero1.eQuadradoPerfeito()) str1 = "SIM";
        if(numero2.eQuadradoPerfeito()) str2 = "SIM";
        QTableWidgetItem *item1 = new QTableWidgetItem(str1);
        QTableWidgetItem *item2 = new QTableWidgetItem(str2);
        ui->tableWidgetTabela->setItem(0,0,item1);
        ui->tableWidgetTabela->setItem(0,1,item2);


        long long int fat1 = numero1.fatorial();
        long long int fat2 = numero2.fatorial();
        QString strfat1 = QString::number(fat1);
        QString strfat2 = QString::number(fat2);
        QTableWidgetItem *itemf1 = new QTableWidgetItem(strfat1);
        QTableWidgetItem *itemf2 = new QTableWidgetItem(strfat2);
        ui->tableWidgetTabela->setItem(1,0,itemf1);
        ui->tableWidgetTabela->setItem(1,1,itemf2);


        QString strNumeroPerfeito1 = "NAO";
        QString strNumeroPerfeito2 = "NAO";
        if(numero1.perfeito()) strNumeroPerfeito1 = "SIM";
        if(numero2.perfeito()) strNumeroPerfeito2 = "SIM";
        QTableWidgetItem *nPerfeito1 = new QTableWidgetItem(strNumeroPerfeito1);
        QTableWidgetItem *nPerfeito2 = new QTableWidgetItem(strNumeroPerfeito2);
        ui->tableWidgetTabela->setItem(2,0,nPerfeito1);
        ui->tableWidgetTabela->setItem(2,1,nPerfeito2);


        QString strCapicua1 = "NAO";
        QString strCapicua2 = "NAO";
        if(numero1.capicua()) strCapicua1 = "SIM";
        if(numero2.capicua()) strCapicua2 = "SIM";
        QTableWidgetItem *nCapicua1 = new QTableWidgetItem(strCapicua1);
        QTableWidgetItem *nCapicua2 = new QTableWidgetItem(strCapicua2);
        ui->tableWidgetTabela->setItem(3,0,nCapicua1);
        ui->tableWidgetTabela->setItem(3,1,nCapicua2);


        QString strPrimo1 = "NAO";
        QString strPrimo2 = "NAO";
        if(numero1.primo()) strPrimo1 = "SIM";
        if(numero2.primo()) strPrimo2 = "SIM";
        QTableWidgetItem *nPrimo1 = new QTableWidgetItem(strPrimo1);
        QTableWidgetItem *nPrimo2 = new QTableWidgetItem(strPrimo2);
        ui->tableWidgetTabela->setItem(4,0,nPrimo1);
        ui->tableWidgetTabela->setItem(4,1,nPrimo2);


        QString bin1 = numero1.mudarBase(2);
        QString bin2 = numero2.mudarBase(2);
        QTableWidgetItem *nbin1 = new QTableWidgetItem(bin1);
        QTableWidgetItem *nbin2 = new QTableWidgetItem(bin2);
        ui->tableWidgetTabela->setItem(5,0,nbin1);
        ui->tableWidgetTabela->setItem(5,1,nbin2);


        QString bin3 = numero1.mudarBase(8);
        QString bin4 = numero2.mudarBase(8);
        QTableWidgetItem *nbin3 = new QTableWidgetItem(bin3);
        QTableWidgetItem *nbin4 = new QTableWidgetItem(bin4);
        ui->tableWidgetTabela->setItem(6,0,nbin3);
        ui->tableWidgetTabela->setItem(6,1,nbin4);


        QString bin5 = numero1.mudarBase(16);
        QString bin6 = numero2.mudarBase(16);
        QTableWidgetItem *nbin5 = new QTableWidgetItem(bin5);
        QTableWidgetItem *nbin6 = new QTableWidgetItem(bin6);
        ui->tableWidgetTabela->setItem(7,0,nbin5);
        ui->tableWidgetTabela->setItem(7,1,nbin6);


        NNatural mdc1 = numero1.mdc(numero2);
        QString strmdc1 = QString::number(mdc1.getNumero());
        QTableWidgetItem *xmdc1 = new QTableWidgetItem(strmdc1);
        QTableWidgetItem *ymdc2 = new QTableWidgetItem(strmdc1);
        ui->tableWidgetTabela->setItem(8,0,xmdc1);
        ui->tableWidgetTabela->setItem(8,1,ymdc2);


        NNatural mmc1 = numero1.mmc(numero2);
        QString strmmc1 = QString::number(mmc1.getNumero());
        QTableWidgetItem *xmmc1 = new QTableWidgetItem(strmmc1);
        QTableWidgetItem *ymmc2 = new QTableWidgetItem(strmmc1);
        ui->tableWidgetTabela->setItem(9,0,xmmc1);
        ui->tableWidgetTabela->setItem(9,1,ymmc2);


        QString strPrimosEntreSi1 = "NAO";
        QString strPrimosEntreSi2 = "NAO";
        if(numero1.primoEntreSi(n2)) strPrimosEntreSi1 = "SIM";
        if(numero2.primoEntreSi(n1)) strPrimosEntreSi2 = "SIM";
        QTableWidgetItem *nPrimosEntreSi1 = new QTableWidgetItem(strPrimosEntreSi1);
        QTableWidgetItem *nPrimosEntreSi2 = new QTableWidgetItem(strPrimosEntreSi2);
        ui->tableWidgetTabela->setItem(10,0,nPrimosEntreSi1);
        ui->tableWidgetTabela->setItem(10,1,nPrimosEntreSi2);


    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
