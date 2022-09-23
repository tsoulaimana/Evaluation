#include "menu.h"
#include <iostream>
#include "comptebancaire.h"
#include "compteepargne.h"
using namespace std;


//main compteEpargne

int main()
{
    enum CHOIX_MENU
    {
        OPTION_1 = 1 ,
        OPTION_2,
        OPTION_3,
        OPTION_4,
        QUITTER
    };

    int valeur;
    CompteEpargne epargne(1,1);
    CompteBancaire solde(1);
    int choix;
    try{
        Menu leMenu("../LaBanque/compteEpargne.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                solde.ConsulterSolde();
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "saisissez votre somme a depose" << endl;
                scanf("%d",&valeur);
                solde.Deposer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "saisissez votre somme a retirer" << endl;
                scanf("%d",&valeur);
                solde.Retirer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_4:
                epargne.CalculerInterets();
                Menu::AttendreAppuiTouche();
                break;
            }

        } while(choix != QUITTER);
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}








//Compteclient
/*
int main()
{
    enum CHOIX_MENU
    {
        OPTION_1 = 1 ,
        OPTION_2,
        OPTION_3,
        QUITTER
    };
    CompteEpargne epargne(0.02,785);
    CompteBancaire solde(1);
    int choix;
    try{
        Menu leMenu("../LaBanque/client.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                cout << "Vous avez choisi l'option n°1" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "Vous avez choisi l'option n°2" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "Vous avez choisi l'option n°3" << endl;
                Menu::AttendreAppuiTouche();
                break;
            }

        } while(choix != QUITTER);
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}
*/

//main compteBancaire
/*
int main()
{
    enum CHOIX_MENU
    {
        OPTION_1 = 1 ,
        OPTION_2,
        OPTION_3,
        QUITTER
    };

    CompteBancaire solde(1);
    int valeur;
    int choix;
    try{
        Menu leMenu("../LaBanque/compteBancaire.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                solde.ConsulterSolde();
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "saisissez votre somme a depose" << endl;
                scanf("%d",&valeur);
                solde.Deposer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "saisissez votre somme a retirer" << endl;
                scanf("%d",&valeur);
                solde.Retirer(valeur);
                Menu::AttendreAppuiTouche();
                break;
            }
        } while(choix != QUITTER);
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}
*/
