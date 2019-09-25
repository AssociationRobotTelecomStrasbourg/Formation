# Formation Arduino

## Entrées/Sorties numériques (Digital Input/Output)

Les signaux numériques sont des 0 et 1 représentés par GND (0V) et VCC (5V) pour Arduino Uno et Nano.

Les entrées numériques mesures l'état de la pin.
Les sorties numériques contrôle l'état de la pin.

On peut choisir le mode entrée ou sortie avec la fonctions [`pinMode(pin, mode)`](https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/).
Les deux modes sont :
- `OUTPUT`
- `INPUT`

On régle l'état de la pin avec
[`digitalWrite(pin, value)`](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/). L'état est
[`digitalRead(pin)`](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/)

## Gestion du temps
Différence entre bloquant et non bloquant
Bloquant
Non bloquant
[`delay(ms)`](https://www.arduino.cc/reference/en/language/functions/time/delay/)
[`millis()`](https://www.arduino.cc/reference/en/language/functions/time/millis/)

## Analogique
Conversion analogique numériques
Lecture
Pas d'écriture analogique mais PWM
[`analogRead(pin)`](https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/)
[`analogWrite(pin, value)`](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/)


## Communication Série
Vitesse de communication
écriture
lecture interprétation (parsing)
[`Serial.begin(speed)`](https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/)
[`Serial.available()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/available/)
[`Serial.print(val)`](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/)
[`Serial.println(val)`](https://www.arduino.cc/reference/en/language/functions/communication/serial/println/)
[`Serial.parseInt()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/parseint/)
[`Serial.parseFloat()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/parsefloat/)
[`Serial.readString()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/readstring/)

## Fonctions diverses
Voici diverses fonctions que Arduino fournit pour divers usages.
Pour générer des nombres aléatoires:
- [`random(min, max)`](https://www.arduino.cc/reference/en/language/functions/random-numbers/random/)
- [`randomSeed(seed)`](https://www.arduino.cc/reference/en/language/functions/random-numbers/randomseed/)

Pour borner une valeur dans un intervalle:
[`constrain(x, a, b)`](https://www.arduino.cc/reference/en/language/functions/math/constrain/)

Pour appliquer une fonction affine sur une valeur sans se tirer les cheveux:
[`map(value, fromLow, fromHigh, toLow, toHigh)`](https://www.arduino.cc/reference/en/language/functions/math/map/)

## Interruption
Qu'est ce que c'est?
Activation/désactivation
[`attachInterrupt(digitalPinToInterrupt(pin), ISR, mode)`](https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/)
[`detachInterrupt(digitalPinToInterrupt(pin))`](https://www.arduino.cc/reference/en/language/functions/external-interrupts/detachinterrupt/)
[`interrupts()`](https://www.arduino.cc/reference/en/language/functions/interrupts/interrupts/)
[`noInterrupts()`](https://www.arduino.cc/reference/en/language/functions/interrupts/nointerrupts/)
