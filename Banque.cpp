//
// Created by eric on 02/09/19.
//

#include <iostream>
#include <iomanip>
#include "Banque.h"
using namespace std;

Banque::Banque() {

}

void Banque::ajouterclient(const string &nom_du_client) {
    clients.push_back(Client(nom_du_client));


}

void Banque::bilanclient(const  int numeroduclient) {


    for (Compte c: clients[numeroduclient].getComptes())
    {
    c.afficherSolde();
    }



}

void Banque::afficherBilan() {
    for(int i=0;i<clients.size();i++)
    {
        bilanclient(i);
    }

}



void Banque::interaction() {
    int saisie=0;
    cout<<"Quel opération voulez-vous effectuer?"<<endl;
    cout<<"1-Ajouter un client"<<endl;
    cout<<"2-Effectuer une opération sur un client"<<endl;
    cout<<"3-Afficher un bilan général"<<endl;
    cin>>saisie;
    switch (saisie)
    {
        case 1:
            this->ajouterclient(this->saisieClient());
            break;

        case 2:
            this->opclient(this->choix("client",clients.size()));
            break;

        case 3:
            this->afficherBilan();
            break;



    }

    interaction(); //Recursivité
}

string Banque::saisieClient() {
    string saisie="";
    cout<<"Veuillez saisir un nom\n";
    cin>>saisie;
    return saisie;
}

void Banque::opclient(int numcli) {
    int saisie=0;
    cout<<"1-Créer un compte\n";
    cout<<"2-Créditer\n";
    cout<<"3-Débiter\n";
    cout<<"4-Virer\n";
    cout<<"5-Afficher un bilan\n";
    cout<<"6-Retour au menu principal\n";
    cin>>saisie;
    switch (saisie)
    {
        case 1:
            clients[numcli].ajouterCompte();
            break;
        case 2:
            clients[numcli].getComptes()[this->choix("compte",clients[numcli].getComptes().size())].depot(this->choixMontant());
            break;
        case 3:
            clients[numcli].getComptes()[this->choix("compte",clients[numcli].getComptes().size())].retrait(this->choixMontant());
            break;

        case 4:
            clients[numcli].getComptes()[this->choix("compte",clients[numcli].getComptes().size())].
            virer(this->choixMontant(),clients[this->choix("client",clients.size())].
            getComptes()[this->choix("compte",clients[numcli].getComptes().size())]);
            break;

        case 5:

            bilanclient(numcli);
            break;

        case 6:
            this->interaction();
            break;



    }

    this->opclient(numcli);

}

int Banque::choix(string type,int limit) {
    int saisie=0;
    for(int i=0;i<limit;i++)
    {
        cout<<i<<endl;
    }
    cout<<"Veuillez choisir un "<<type<<endl;
    cin>>saisie;
    return saisie;

}

float Banque::choixMontant() {
    float montant;
    cout << "Veuillez donner un montant";
    cin >> montant;
    return montant;
}







