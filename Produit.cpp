#include "Produit.h"
#include <string>
#include <iostream>

Produit::Produit(std::string titre, std::string description, int quantité, double prix): _titre(titre), _description(description), _quantite(quantité), _prix(prix){}

std::string Produit::getTitre () const{
  return _titre;
}

std::string Produit::getDescription () const{
  return _description;
}

int Produit::getQuantite() const{
  return _quantite;
}

double Produit::getPrix() const{
  return _prix;
}

void Produit::setQuantite(Produit& produit,int nouvelle_quantite){
  _quantite=nouvelle_quantite;
}

  std::ostream& operator<<(std::ostream& out, const Produit& produit)
{out <<"\nProduit : " << produit._titre << "\nDescription : " << produit._description << "\nPrix : " <<produit._prix << "\nQuantitée : " <<produit._quantite << "\n";
return out;
}
  

  


