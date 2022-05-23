//
// Created by mohamedElHaddadi on 5/22/2022.
//
#include "Matrice.h"
int main(){
   Matrice M1(2,3);
   M1.remplirMatrice();
   M1.affiche();
   Matrice M2(M1);
   M2.affiche();
    M2*=M1;
   M2.affiche();
   cout<<M2(0,0);
    return 0;
}