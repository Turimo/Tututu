#include "Client.h"
#include "Produit.h"
#include <vector>
#include <string>


std::vector<Produit> Client::getPanier() const{
  return _panier;
}


void ajouterProduitPanier(Produit &produit){
  
}

Client::Client(int id,std::string prenom,std::string nom,std::vector<Produit> panier):_id(id),_prenom(prenom),_nom(nom),_panier(panier){}