#ifndef DIGICODE_H
#define DIGICODE_H

#include "porte.h"
#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QString>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class digicode; }
using namespace std;
QT_END_NAMESPACE

class digicode : public QWidget
{
    Q_OBJECT

public:
    digicode(QWidget *parent = nullptr);
    ~digicode();

private slots:
    void onQpushButtonClicked();
    void Verifier();
    void onTimerTempoGache_timeout();



private:
    Ui::digicode *ui;
    QPushButton *touche;
    QGridLayout *grille;
    QLineEdit *afficheur;
    QString CodeEntre;
    QString CodeSecret;
    const int tailleCode = 4;
    Porte laPorte;
    QTimer tempoGache;

};
#endif // DIGICODE_H
