#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>

class Produit{
  public:
    Produit(std::string titre, std::string description, int quantité, double prix );
    std::string getTitre() const;
    std::string getDescription() const;
    int getQuantite() const;
    double getPrix() const;
    friend void operator+(Produit produit);
    void setQuantite(Produit& produit, int nouvelle_quantite);
    
    friend std::ostream& operator<< (std::ostream& out, const Produit& produit);
  private:
    std::string _titre;
    std::string _description;
    int _quantite;
    double _prix;
};

#endif