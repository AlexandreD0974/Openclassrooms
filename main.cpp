#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main()
{
    Personnage david, goliath("Epee aiguisee", 20);
    Personnage Julien{"Tapette a mouche", 2};
    Personnage Jules(Julien);
    Personnage Arthur {"Excalibur" , 50 };
    Personnage Malenia {"Lame danseuse" , 100};

    goliath.attaquer(david);    //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath attaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);


    return 0;
}