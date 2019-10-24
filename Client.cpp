//
// Created by eric on 30/08/19.
//

#include "Client.h"

string Client::getNom() {

    return nom;
}





Client::Client(const string &nom_du_client) : nom(nom_du_client),nbcomptes(0) {

}





 Compte* Client::getComptes()  {
    return comptes;
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
    comptes[nbcomptes]=Compte(nbcomptes);
    nbcomptes++;

}

Client::Client() {

}

unsigned int Client::getNbcomptes() const {
    return nbcomptes;
}




