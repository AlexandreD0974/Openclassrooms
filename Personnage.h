//
// Created by Alexandre dorseuil on 28/02/2024.
//

#ifndef OPENCLASSROOMS_PERSONNAGE_H
#define OPENCLASSROOMS_PERSONNAGE_H

#endif //OPENCLASSROOMS_PERSONNAGE_H

#include <string>

class Personnage
{

public :
    // Méthodes


    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();


private:

    // Attributs
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;
};


