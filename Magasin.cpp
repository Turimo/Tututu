#include "Magasin.h"
#include "Produit.h"
#include <string>
#include <iostream>

Magasin::Magasin(){
   
}
//Ajoute un produit au magasin
void Magasin::ajouteProduitMag(std::string nom,std::string description,double prix,int quantite){
    Produit* test = new Produit(nom,description,prix,quantite);
   _produits.push_back(test);
}

//Affichage d'un produit soit avec un nom en parametre soit la liste entière si pas de parametre
void Magasin::display(std::string nom){
  if (nom == "") 
  {
          std::cout << "---------Stock totale --------- \n";
        for (auto & element : _produits) {
          std::cout << *element;
        }

  }
  else 
  {
          std::cout << "---------Stock de "+nom+" --------- \n";
          for (auto & element : _produits) {
            if(element->getTitre() == nom)
               std::cout << *element;
          }
  }
}
//Modifie la quaqntite d'un produit
void Magasin::majQuantProd(std::string nom,int quantite){  
        for (auto & element : _produits) {
          if(element->getTitre() == nom)
              element->setQuantite(quantite);
  
 }

} 