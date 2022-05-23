//
// Created by mohamedElHaddadi on 5/22/2022.
//

#ifndef CPP_TPS_INDIVIDU_H
#define CPP_TPS_INDIVIDU_H

#include <iostream>
#include <string>
using namespace  std;
class Individu{
protected :
    int age ;
    string nom ;
    string prenom ;
public :
    Individu(string nom="", string prenom="", int age=0);
    Individu(const Individu &); // constructeur de recopie
    string getNom() ; // retourne le nom ;
    string getPrenom() ;//retourne le prénom
    int getAge() ;// retourne l’âge
    void afficher();

} ;


#endif //CPP_TPS_INDIVIDU_H
