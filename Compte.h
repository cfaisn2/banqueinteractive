//
// Created by eric on 29/08/19.
//

#ifndef CORRECTIONBANQUEINTERACTIVE_COMPTE_H
#define CORRECTIONBANQUEINTERACTIVE_COMPTE_H


class Compte {

private:
    unsigned int numero;
    float solde;
public:
    Compte(int numero);

    Compte();

    void depot(const float valeur);

    float getSolde() const;

    void retrait(const float valeur);

    void afficherSolde();
    void virer(float valeur,Compte &destinataire);

};


#endif //CORRECTIONBANQUEINTERACTIVE_COMPTE_H
