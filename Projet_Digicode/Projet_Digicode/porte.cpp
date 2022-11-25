#include "porte.h"
#include "ui_porte.h"

Porte::Porte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Porte)
{
    ui->setupUi(this);
}

Porte::~Porte()
{
    delete ui;
}

void Porte::deverrouiller()
{
    QPixmap porte ("../images/porte_ouverte.png");
    ui->labelEtat->setPixmap(porte);
    ui->labelEtat->setText("Porte déverrouillée");

}

void Porte::verrouiller()
{
    QPixmap porte("../images/porte_fermee.png");
    ui->labelEtat->setPixmap(porte);
    ui->labelEtat->setText("Porte verrouillée");
}
