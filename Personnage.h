//
// Created by Alexandre dorseuil on 28/02/2024.
//

#ifndef OPENCLASSROOMS_PERSONNAGE_H
#define OPENCLASSROOMS_PERSONNAGE_H

#endif //OPENCLASSROOMS_PERSONNAGE_H

#include <string>
#include "Arme.h"

class Personnage{

    public :

        Personnage() = default;
        Personnage(std::string nomArme, int degatsArme);
        Personnage(Personnage const &autre);
//METhoDE
        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        void afficherEtat();
        bool estVivant();



    private:

        // Attributs
        int m_vie{100};
        int m_mana{100};
        Arme m_arme;

    };



