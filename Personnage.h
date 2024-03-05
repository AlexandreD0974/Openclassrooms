//
// Created by Alexandre dorseuil on 28/02/2024.
//

#ifndef OPENCLASSROOMS_PERSONNAGE_H
#define OPENCLASSROOMS_PERSONNAGE_H

#endif //OPENCLASSROOMS_PERSONNAGE_H

#include <string>

class Personnage{

    public :
        // Méthodes
        Personnage() = default;
        Personnage(std::string nomArme, int degatsArme);
        Personnage(Personnage const &autre);

        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant();


    private:

        // Attributs
        int m_vie{100};
        int m_mana{100};
        std::string m_nomArme{"Epee rouillee"};
        int m_degatsArme{10};
    };


