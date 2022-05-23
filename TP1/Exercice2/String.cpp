//
// Created by mohamedElHaddadi on 5/21/2022.
//

#include "String.h"
#include <cstring>
String::String() {chaine =NULL;taille=0;}
String::String(const char *ch) {
    taille=strlen(ch);
    chaine =new char[taille];
    strcpy(chaine,ch);
}
String::~String() {
    delete []chaine;
}
ostream &operator<<(ostream & os,const String& s){
    cout<<"la taille est :"<<s.taille<<endl;
    for (int i = 0; i < s.taille; ++i) {
        os<<s.chaine[i];
    }
    os<<endl;
    return  os;
}

unsigned int String::getSize() {return taille;}

void String::Empty() {delete []chaine;}

bool String::isEmpty() {
    if(chaine[0]=='\0' && taille==0)
        return true;
    else
        return false;}
String::String(const String &s) {
    taille=s.taille;
    strcpy(chaine,s.chaine);
}

char &String::operator[](unsigned int i) {
    if(i>=0 && i<=taille)
        return chaine[i];
}

String &String::operator=(const String &s) {
    String string1;
   string1.taille=s.taille;
    strcpy(string1.chaine,s.chaine);
}

bool String::operator==(const String &s) {
    if(strcmp(s.chaine,chaine))
        return true;
    else return false;
}

String String::operator+(const String &s) {
    String string1;
    string1.taille = taille + s.taille;
    string1=new char [string1.taille];
    int i;
    for ( i = 0; i < taille; ++i) {
        string1+=chaine[i];
    }cout<<string1;
    int j=0;
    while (i<string1.taille && j<s.taille)
    {
        string1.chaine[i]=s.chaine[j];
        i++;
        j++;
    }
    return string1;
}

String &String::operator+=(const char c) {
    chaine[taille]=c;
    taille++;
    return *this;
}

String &String::operator+=(const char *s) {
    for (int i = 0; i < strlen(s)+1; ++i) {
        (*this)+=s[i];
    }
    return *this;
}

String &String::operator+=(const String& string1) {
    taille = taille + string1.taille;
    char *m=new char[taille];
    strcpy(m,chaine);
    taille+= string1.taille;
    chaine=new char[taille];
    for (int i = 0; i < strlen(m)+1; ++i) {
        chaine[i] = m[i] ;
    }
    int i = strlen(m)+1;
    while (i < taille)
    {
        chaine[i] = chaine[strlen(m)-i-1] ;
        i++;
    }
    return *this;
}
