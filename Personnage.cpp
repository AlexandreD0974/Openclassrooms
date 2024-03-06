//
// Created by Alexandre dorseuil on 28/02/2024.
//

#include "Personnage.h"
#include <iostream>

using namespace std;

Personnage::Personnage(std::string nomArme, int degatsArme) {
    m_arme = {nomArme, degatsArme};
}

Personnage::Personnage(Personnage const &autre) {
    m_arme = autre.m_arme;
}




void Personnage::recevoirDegats(int nbDegats){
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible){
    cible.recevoirDegats(m_arme.getdegats());
    //On inflige à la cible les dégâts que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePotion){
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme){
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant(){
    return m_vie > 0;
}

void Personnage::afficherEtat() {
    cout << "vie : " << m_vie << endl;
    cout << "mana : " << m_mana << endl;
    cout << "Nom de l'arme : " << m_arme.getNom() << endl;
    cout << "Nombre de degats : " << m_arme.getdegats() << endl;




}





