//
// Created by Alexandre dorseuil on 06/03/2024.
//

#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom("Epee rouillee"), m_degats(10){}
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats){}

std::string Arme::getNom() {
    return m_nom;
}

void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

void Arme::afficher() const
{
    cout << "Arme : " << m_nom << " (Degats : " << m_degats << ")" << endl;
}


