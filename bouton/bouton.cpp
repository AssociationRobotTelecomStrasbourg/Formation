#include <Arduino.h>
#include "bouton.h"

Bouton::Bouton(int pin) : _pin(pin) {
  pinMode(_pin, INPUT_PULLUP); //Règle le mode de la pin du bouton
  //en entrée avec une pull-up
}

bool Bouton::etat() const {
  return !digitalRead(_pin); //Le mode pull-up inverse HIGH = 1 et LOW = 0
  //! l'inverse en retour (fonction not)
}

void Bouton::attendChangement(bool etat) const {
  /*
   * À compléter
   * Reste dans la fonction tant que l'état du bouton
   * est le même que l'état donné en argument
   */
}

