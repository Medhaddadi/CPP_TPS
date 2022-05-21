//
// Created by mohamedElHaddadi on 5/20/2022.
//
#include <cmath>
#include "complexe.h"
complexe::complexe(const complexe &z )
{
    reel=z.reel;
    img=z.img;
}

complexe &complexe::operator+=(const complexe &z) {
    reel+=z.reel;
    img+=z.img;
}
complexe &complexe::operator-=(const complexe &z) {
    reel-=z.reel;
    img-=z.img;
}
complexe &complexe::operator*=(const complexe &z) {
    reel=-(img*z.img)+(z.reel*reel);
    img=img*z.reel+z.img*reel;
}
complexe &complexe::operator/=(const complexe &z) {
    float aide=(float ) 1/pow((z.img),2)-pow((z.reel),2);
    reel=(-(img*z.img)+(z.reel*reel))*aide;
    img=(img*z.reel+z.img*reel)*aide;
}
bool complexe::operator==(const complexe &z) {
 if(z.img==img && z.reel==reel )
     return  true;
 else
     return  false;
}
 ostream & operator<<(ostream & os ,const complexe & z){
    os<<"    Z= "<<z.img<<" * i +"<<z.reel<<endl;
     return os;
}
 complexe addition (const complexe&z1,const complexe&z){
    complexe z3;
     z3.reel=z.reel+z1.reel;
     z3.img=z.img+z1.img;
     return z3;
}
complexe soustraction (const complexe&z1,const complexe&z){
    complexe z3;
    z3.reel=z.reel-z1.reel;
    z3.img=z.img-z1.img;
    return z3;
}
complexe multiplication (const complexe&z1,const complexe&z){
    complexe z3;
    z3.reel=-(z1.img*z.img)+(z.reel*z1.reel);
    z3.img=z1.img*z.reel+z.img*z1.reel;
    return z3;
}