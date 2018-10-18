#ifndef BOUTON_H
#define BOUTON_H

class Bouton{
public:
  Bouton(int pin);
  bool etat() const; //Etat du bouton
  void attendChangement(bool etat) const; //Attend que l'état du bouton
  //soit différent de celui donné en argument
  
private:
  int _pin; //Pin du bouton
};

#endif
