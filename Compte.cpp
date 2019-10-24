//
// Created by eric on 29/08/19.
//

#include <iostream>
#include "Compte.h"

Compte::Compte(int numero) {
    this->numero=numero;

}


void Compte::depot(const float valeur) {
    solde+=valeur;

}

void Compte::retrait(const float valeur) {
    solde-=valeur;
}

void Compte::afficherSolde() {
    std::cout.precision(2);
    std::cout<<"le solde du compte n° "<<numero<<" est de "<<std::fixed<<solde<<std::endl;

}

void Compte::virer(float valeur, Compte &destinataire) {
retrait(valeur);
destinataire.depot(valeur);

}

Compte::Compte() {}

float Compte::getSolde() const {
    return solde;
}

