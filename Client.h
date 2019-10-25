//
// Created by eric on 30/08/19.
//

#ifndef CORRECTIONBANQUEINTERACTIVE_CLIENT_H
#define CORRECTIONBANQUEINTERACTIVE_CLIENT_H


#include <string>
#include <vector>
#include "Compte.h"
using namespace std;
class Client {

private:
    vector<Compte> comptes; //déclaration d'un vector de comptes
    string nom;

public:

    Client(const string &nom_du_client);
    Client();
    string getNom();
    float getSolde();
    void afficherSolde(int numcompte);
    void ajouterCompte();

    vector<Compte> &getComptes();




};


#endif //CORRECTIONBANQUEINTERACTIVE_CLIENT_H
