//
// Created by mohamedElHaddadi on 5/20/2022.
//

#ifndef CPP_TPS_COMPLEXE_H
#define CPP_TPS_COMPLEXE_H

#include <iostream>
using namespace std;
class complexe {
  float reel;
  float img ;
public:
    complexe(float r=0,float t=0):reel(r),img(t){};
    complexe(const complexe&);
    complexe& operator+=(const complexe&);
    complexe& operator-=(const complexe&);
    complexe& operator*=(const complexe&);
    complexe& operator/=(const complexe&);
    bool operator==(const complexe&);
    float getImg(){return  img;}
    float getReel(){return  reel;}
    void setReel(float  r){reel=r;}
    void setimg(float i){img=i;}
    friend complexe addition (const complexe&z1,const complexe&z2);
    friend complexe soustraction (const complexe&z1,const complexe&z2);
    friend complexe multiplication (const complexe&z1,const complexe&z2);
    friend ostream & operator<<(ostream & os ,const complexe & z);
};


#endif //CPP_TPS_COMPLEXE_H
