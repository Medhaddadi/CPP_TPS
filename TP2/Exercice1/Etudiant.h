//
// Created by mohamedElHaddadi on 5/22/2022.
//

#ifndef CPP_TPS_ETUDIANT_H
#define CPP_TPS_ETUDIANT_H
#include "Individu.h"

class Etudiant :public Individu{
    string  Niveau;
    string Filiere;
public:
    Etudiant(string nom,string prenom,int age ,string niveau , string filier);
    ~Etudiant(){}
    Etudiant(Etudiant & e);
    void afficher();
};


#endif //CPP_TPS_ETUDIANT_H
