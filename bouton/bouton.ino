/*
 * Objectif: Récupérer l'état du bouton sur la pin 2 (pinMode, digitalRead)
 *           Puis allumer la led 13 si le bouton est appuyé
 *           et l'éteindre sinon (Led)
 *           Puis chaque appuie du bouton change l'état de la led
 *           Pour cela il faut enlever le rebond du bouton (delay ou millis)
 */

 bool etat = false;
 unsigned long temps, tempsRebond = 10;

void setup() {
  pinMode(2, INPUT_PULLUP);
  temps = millis();
}

void loop() {
  /*
  digitalWrite(13, !digitalRead(2));
  */
  if (etat && (etat = !digitalRead(2))) {
    digitalWrite(13, !digitalRead(13));
    delay(tempsRebond);
  }
  /*
  if (etat && (etat = !digitalRead(2)) && temps - millis() > tempsRebond)
    digitalWrite(13, !digitalRead(13));
  */
}
