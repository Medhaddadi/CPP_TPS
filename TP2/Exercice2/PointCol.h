//
// Created by mohamedElHaddadi on 5/22/2022.
//

#ifndef CPP_TPS_POINTCOL_H
#define CPP_TPS_POINTCOL_H

#include "Point.h"
#include<cmath>
class PointCol :public Point{
 int col ;
public:
 PointCol(int x,int y ,int col ):Point(x,y){
     this->col=col;
 }
 void identifie(){
     cout<< " Je suis un point decolor "<<col;
 }
 double rho(){
     return sqrt(pow(x,2)+pow(y,2));
 }
};


#endif //CPP_TPS_POINTCOL_H
