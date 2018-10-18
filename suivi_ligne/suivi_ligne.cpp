#include <Arduino.h>
#include "suivi_ligne.h"

SuiviLigne::SuiviLigne(int pin, int seuil) : _pin(pin), _seuil(seuil) {}

void SuiviLigne::reglerSeuil(int seuil) {
  _seuil = seuil;
}

int SuiviLigne::brut() const {
  return analogRead(_pin);
}

bool SuiviLigne::etat() const {
  /*
   * À compléter
   * Retourne true pour le blanc
   * false pour le noir
   */
}
