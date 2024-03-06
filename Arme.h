//
// Created by Alexandre dorseuil on 06/03/2024.
//

#ifndef OPENCLASSROOMS_ARME_H
#define OPENCLASSROOMS_ARME_H

#endif //OPENCLASSROOMS_ARME_H

#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
    public:

    Arme();
    Arme(std::string nom, int degats);

    std::string getNom();
    int getdegats();

    void changer(std::string nom, int degats);
    void afficher() const;

    private:

    std::string m_nom;
    int m_degats;
};

#endif