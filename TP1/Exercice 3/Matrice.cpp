//
// Created by mohamedElHaddadi on 5/22/2022.
//

#include "Matrice.h"

Matrice::Matrice(int i, int j) {
    n=i;
    m=j;
    Line =new ligne [n];
    for (int k = 0; k < n; ++k) {
        Line[k]=new double [m];
    }
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < m; ++l) {
            Line[k][l]=0;
        }
    }
}
Matrice::Matrice(const Matrice &M) {
    n=M.n;
    m=M.m;
    Line =new ligne [n];
    for (int k = 0; k < n; ++k) {
        Line[k]=new double [m];
    }
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < m; ++l) {
           Line[k][l]=M.Line[k][l];
        }
    }
}

bool Matrice::operator==(Matrice &M) {
    if(n==M.n && m==M.m)
    {
        for (int k = 0; k < n; ++k) {
            for (int l = 0; l < m; ++l) {
                if (**(Line + l * m + k) != **(M.Line + l * m + k))
                    return false;
            }
        }
        return true;
    } else
        return false;

}

double Matrice::operator()(int i, int j) {
    if(i<=n && j<=m && i>=0 && j>= 0)
        return **(Line+i*m+j);
}

void Matrice::remplirMatrice() {
    cout<<"remplire la matrice "<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<" Line "<<i+1<<" :";
        for (int j = 0; j < m; ++j) {
            cin>>Line[i][j];
        }
    }
}

void Matrice::affiche() {
    cout<<" la matrice :"<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<" "<<Line[i][j];
        }
        cout<<endl;
    }
}
Matrice::~Matrice() {
    for (int i = 0; i < n; ++i) {
        delete [](Line[i]);
    }
}

Matrice &Matrice::operator*=(Matrice &M) {

    if (m==M.n)
    {
        Matrice P(*this);
        this->m=M.m;
        Line =new ligne [n];
        for (int k = 0; k < n; ++k) {
            Line[k]=new double [m];
        }
        for (int i = 0; i < this->n; ++i) {
            for (int j = 0; j < this->m; ++j) {
                double k=0;
                for (int l = 0; l < this->m; ++l) {
                   k= P.Line[i][l]*M.Line[l][j];
                }
                Line[i][j]=k;
            }
        }
        return *this;
    }
}