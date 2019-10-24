//
// Created by eric on 30/08/19.
//

#ifndef CORRECTIONBANQUEINTERACTIVE_CLIENT_H
#define CORRECTIONBANQUEINTERACTIVE_CLIENT_H


#include <string>
#include "Compte.h"
using namespace std;
class Client {

private:
    Compte comptes[100]; //déclaration d'un tableau de comptes
    string nom;
    unsigned int nbcomptes;

public:

    Client(const string &nom_du_client);
    Client();
    string getNom();
    float getSolde();
    void afficherSolde(int numcompte);
    void ajouterCompte();
    Compte* getComptes();

    unsigned int getNbcomptes() const;


};


#endif //CORRECTIONBANQUEINTERACTIVE_CLIENT_H
