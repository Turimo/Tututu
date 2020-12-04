#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
#include "Produit.h"

class Client{
  public:
    std::vector<Produit> getpanier() const;
    Client(int id,std::string prenom,std::string nom,std::vector<Produit> panier);
    void ajouterProduitPanier(Produit &produit);
  private:
    int _id;
    std::string _prenom;
    std::string _nom;
    std::vector<Produit> _panier;
};

#endif