#include "Magasin.h"
#include "Produit.h"
#include <string>
#include <iostream>

Magasin::Magasin(){
   
}
void Magasin::ajouteProduitMag(std::string nom,std::string description,double prix,int quantite){

    Produit* test = new Produit(nom,description,prix,quantite);
   _produits.push_back(test);
}


void Magasin::display(std::string nom){
  if (nom == "") 
  {
        for (auto & element : _produits) {
          std::cout << *element;
}

  }
  else 
  {
          for (auto & element : _produits) {
            if(element->getTitre() == nom)
               std::cout << *element;
  }
}

}
