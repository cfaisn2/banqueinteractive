//
// Created by eric on 30/08/19.
//

#include <iostream>
#include "Client.h"

string Client::getNom() {

    return nom;
}





Client::Client(const string &nom_du_client) : nom(nom_du_client) {

}


float Client::getSolde() {
    float totalsolde=0;
    for(Compte c:comptes)
    {
        totalsolde+=c.getSolde();
    }
    return totalsolde;
}

void Client::afficherSolde(int numcompte) {
    comptes[numcompte].afficherSolde();


}

void Client::ajouterCompte() {
    comptes.push_back(Compte(comptes.size()));
    cout<<"Le compte "<<comptes.size()-1<<" a été crée"<<endl;


}

Client::Client() {

}



 vector<Compte> &Client::getComptes()  {
    return comptes;
}




