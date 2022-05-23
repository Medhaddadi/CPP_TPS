//
// Created by mohamedElHaddadi on 5/22/2022.
//

#ifndef CPP_TPS_POINT_H
#define CPP_TPS_POINT_H
#include <iostream>
using namespace std ;

class Point{
protected:
    int x ;
    int y ;
public :
    Point(int abs, int ord){
        this->x=abs ;
        this->y=ord ;
    };
    virtual void  identifie(){
        cout<< " Je suis un point  ";
    }
     void  affiche(){
        identifie() ;
        cout<< " coordonnées :" <<x<< " "<<y <<endl;
    }
} ;
#endif //CPP_TPS_POINT_H
