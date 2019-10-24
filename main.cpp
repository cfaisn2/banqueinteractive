#include <iostream>
#include "Compte.h"
#include "Client.h"
#include "Banque.h"

int main() {
    /*Compte c1=Compte(1);
    c1.depot(1000);
    c1.afficherSolde();
    c1.retrait(500);
    c1.afficherSolde();
    Compte c2=Compte(2);
    c1.virer(100,c2);
    c1.afficherSolde();
    c2.afficherSolde();*/
    /*Client cl1=Client("Eric");
    cl1.ajouterCompte();
    cl1.ajouterCompte();
    cl1.getComptes()[0].depot(1000);
    cl1.getComptes()[1].depot(200);
    cl1.afficherSolde(0);
    Client cl2=Client("Tom");
    cl2.ajouterCompte();
    cl2.ajouterCompte();
    cl2.getComptes()[0].depot(100);
    cl2.getComptes()[1].depot(200);*/
    /*Banque bq1=Banque();
    bq1.ajouterclient("Eric");
    bq1.ajouterclient("Tom");
    bq1.getClients()[0].ajouterCompte();
    bq1.getClients()[0].ajouterCompte();
    bq1.getClients()[0].getComptes()[0].depot(1000);
    bq1.getClients()[0].getComptes()[1].depot(200);
    bq1.getClients()[1].ajouterCompte();
    bq1.getClients()[1].ajouterCompte();
    bq1.getClients()[1].getComptes()[0].depot(100);
    bq1.getClients()[1].getComptes()[1].depot(200);
    bq1.bilanclient(0);
    bq1.afficherBilan();*/
    Banque b1;
    b1.interaction();


}