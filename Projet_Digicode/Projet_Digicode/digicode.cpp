#include "digicode.h"
#include "ui_digicode.h"


digicode::digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::digicode)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&digicode::onQpushButtonClicked);
    connect(ui->pushButton_Ok,&QPushButton::clicked,this,&digicode::Verifier);

    CodeSecret = "1234";

}

digicode::~digicode()
{
    delete ui;
}

void digicode::onQpushButtonClicked()
{

    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    CodeEntre = CodeEntre +texteBouton;
    ui->lineEditMDP->setText(CodeEntre);

}

void digicode::Verifier()
{
    QMessageBox messageMdp;
    bool retour=true;
            if (CodeEntre != CodeSecret){
                messageMdp.setText("Code Faux");
                retour = messageMdp.exec();
                laPorte.verrouiller();
            } else {
                messageMdp.setText("la porte est déverrouillée");
                retour = messageMdp.exec();
                laPorte.deverrouiller();
            }
}

void digicode::onTimerTempoGache_timeout()
{
    tempoGache.setSingleShot(true);
}



