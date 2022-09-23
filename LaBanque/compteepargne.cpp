#include "compteepargne.h"

/**
 * @brief CompteEpargne::CompteEpargne
 * @param _tauxinterets
 * @param _solde
 */
CompteEpargne::CompteEpargne(const float _tauxinterets, const float _solde):
    CompteBancaire(_solde),
    tauxinterets(_tauxinterets)
{

}



/**
 * @brief CompteEpargne::CalculerInterets
 */
void CompteEpargne::CalculerInterets()
{
    tauxinterets=0.02;
    tauxinterets= solde * tauxinterets;
    cout << "Interets: " << tauxinterets << "%" << endl;
}


/**
 * @brief CompteEpargne::ModifierTaux
 */
void CompteEpargne::ModifierTaux()
{

}
