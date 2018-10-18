/*
 * Objectif: Allumer la led 13 (pinMode, digitalWrite)
 *           Puis la faire clignoter (delay)
 *           Puis compléter la méthode clignote de Led (millis)
 */

#include "led.h"

Led l(13);

void setup() {}

void loop() {
  l.allume();
  delay(1000);
  l.eteint();
  delay(1000);
}
