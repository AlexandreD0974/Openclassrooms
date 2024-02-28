#include <iostream>
#include <string>
#include <array>
using namespace std ;

int main(){
    string chaine1("Bonjour !");
    string chaine2("Greg");

    if (chaine1 == chaine2) // Faux
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }
    cout << "longeur de la chaine." << chaine1.size()<<endl;
    cout << "longeur de la chaine." << chaine2.size()<<endl;
    cout << chaine1.substr(3,4) << endl;
    cout << chaine2.substr(0,1) << chaine2.substr(3,4) << endl;


    return 0;
}


