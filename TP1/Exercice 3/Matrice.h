//
// Created by mohamedElHaddadi on 5/22/2022.
//

#ifndef CPP_TPS_MATRICE_H
#define CPP_TPS_MATRICE_H
#include <iostream>
using namespace std;

class Matrice{
        typedef double*ligne ;
        ligne*Line ;
        int n ;
        int m ;
        public :
        Matrice(int, int) ;
        Matrice(const Matrice&) ;
        ~Matrice() ;
        bool operator==(Matrice &) ;
        double operator()(int, int) ;
        Matrice& operator*=(Matrice &);
        void remplirMatrice();
        void affiche();
} ;


#endif //CPP_TPS_MATRICE_H
