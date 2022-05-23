//
// Created by mohamedElHaddadi on 5/21/2022.
//

#ifndef CPP_TPS_STRING_H
#define CPP_TPS_STRING_H
#define UNIT unsigned int
#define NULL 0
#include <iostream>
using namespace std;
class String {
    char*chaine ; // la chaîne en elle-même
    UNIT taille ; // la longueur de la chaîne
public :
    String() ;
    String(const char*) ;
    String (const String &) ;
    ~String() ;
    friend ostream &operator<<(ostream & os,const String& s);
    String & operator=(const String &) ;
    bool operator == (const String &) ;
    String & operator+=(const String &) ;
    String & operator+=(const char*) ;
    String & operator+=(const char) ;
    String operator+(const String&) ;
    char& operator[](UNIT);
    bool isEmpty(); //si la chaine est vide
    void Empty() ;//détruire la chaîne
    UNIT getSize() ; // retourne la taille de la chaine.
};


#endif //CPP_TPS_STRING_H
