//
// Created by eric on 02/09/19.
//

#ifndef CORRECTIONBANQUEINTERACTIVE_BANQUE_H
#define CORRECTIONBANQUEINTERACTIVE_BANQUE_H


#include "Client.h"

class Banque {

private:

    Client clients[100];
    int nbclients;

public:

    Banque();
    void ajouterclient(const string &nom_du_client);
    void bilanclient(const int numeroduclient);
    void afficherBilan();

    Client *getClients();

    //int choixClient();

    //int choixCompte(const int numclient);

    float choixMontant();

    void opclient(const int numcli);

    string saisieClient();

    void interaction();

    int choix(string type, int limit);
};


#endif //CORRECTIONBANQUEINTERACTIVE_BANQUE_H
