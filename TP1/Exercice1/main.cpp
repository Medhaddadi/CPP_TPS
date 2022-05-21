//
// Created by mohamedElHaddadi on 5/20/2022.
//

#include "complexe.h"
int main(){
    complexe p(2,4);
    complexe z(1,3);
    p+=z;
    cout<<p;
    p*=z;
    cout<<p;
    return 0;
}
