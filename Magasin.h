#ifndef MAGASIN_H
#define MAGASIN_H

#include "Produit.h"
#include <string>
#include <vector>

class Magasin
{
private:
    std::vector<Produit*> _produits;
    //std::vector<Client*> _clients;
   // std::vector<Commande*> _commandes;

public:
    Magasin();
    void ajouteProduitMag(std::string nom,std::string description,double prix,int quantite);
    void display(std::string nom="");
    void majQuantProd(std::string nom,int quantite);


};

#endif //MAGASIN_H