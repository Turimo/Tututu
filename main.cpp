#include <iostream>
#include "Magasin.h"
#include "Produit.h"
#include <string>


int main() {
  Magasin MonMagasin;

  MonMagasin.ajouteProduitMag("Switch", "Rose", 20, 13);
  MonMagasin.ajouteProduitMag("PS4", "Rose2", 20, 13);
  
  MonMagasin.display("PS4");

  MonMagasin.display();
  MonMagasin.majQuantProd("Switch", 4);
  MonMagasin.display();


  
}