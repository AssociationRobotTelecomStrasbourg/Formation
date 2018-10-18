#ifndef MOTEUR_H
#define MOTEUR_H

class Moteur{
public:
  Moteur(int pin1, int pin2);
  void tourner(int pwm, int temps = 0) const; //Actionne le moteur et 
  //attend "temps" milliseconde, 0 si argument non spécifié
  
private:
  //Pins du moteur
  int _pin1;
  int _pin2;
};

#endif
