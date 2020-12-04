#include <iostream>
#include "Magasin.h"
#include "Produit.h"
#include <string>


int main() {
  Magasin MonMagasin;

  MonMagasin.ajouteProduitMag("Anus", "Rose", 20, 13);
  MonMagasin.ajouteProduitMag("Anus2", "Rose2", 20, 13);
  MonMagasin.display("Anus");
  MonMagasin.display();
}