//
// Created by mohamedElHaddadi on 5/22/2022.
//

#include "Individu.h"
Individu::Individu(string nom, string prenom, int age):nom(nom),prenom(prenom),age(age) {

}

string Individu::getNom() {return nom;}

int Individu::getAge() {return age;}

string Individu::getPrenom() {return prenom;}
Individu::Individu(const Individu &preson) {
    nom=preson.nom;
    prenom=preson.prenom;
    age= preson.age;
}

void Individu::afficher() {
    cout<<" Nom    :"<<nom<<endl;
    cout<<" Prenom :"<<prenom<<endl;
    cout<<" Age    :"<<age<<endl;
}