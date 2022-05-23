//
// Created by mohamedElHaddadi on 5/22/2022.
//

#include "Etudiant.h"
 Etudiant::Etudiant(string nom, string prenom, int age, string niveau, string filier) : Individu(nom,prenom,age ),Niveau(niveau),Filiere(filier){}

void Etudiant::afficher()
{
    Individu::afficher();
    cout<<" Niveau :"<<Niveau<<endl;
    cout<<" filiere:"<<Filiere<<endl;
}
Etudiant::Etudiant(Etudiant &e) {
    nom=e.nom;
    prenom=e.prenom;
    age=e.age;
    Niveau=e.Niveau;
    Filiere=e.Filiere;
}