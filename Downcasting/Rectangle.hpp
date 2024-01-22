#include "Forme.hpp"
class Rectangle : public Forme {

public:
    Rectangle(double longueur, double hauteur);
    double surface() const;
    double perimetre() const;
    void afficher() const;
    void setLongueur(double longueur);
    void setHauteur(double hauteur);
    double getLongueur() const;
    double getHauteur() const;
    ~Rectangle();
    void action();
private:
    double longueur;
    double hauteur;
};


