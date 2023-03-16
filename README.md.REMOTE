# Hugo LE COZ



USART2 mode asynchrone baud rate = 115200 bit/s

Clock configuration = 32 MHz 

## **1.2 Le microcontrôleur sous KiCAD**

13. PB9 à la masse permet de choisir la selection du modes de boot

14. Le role de L1, C5, C7 est un filtre passe bas du second ordre qui permet de supprimer les parasites de l'alimentation

## **1.3 Le reste du schémas**

3. On peut retrouver sur la première page la valeur que doit avoir au minimum Cin et Cout de 0.47uF mais sur la page 3 on nous indique une valeur typique de 1uF
4.
5. Valeur condensateur page 25
6. CS => Chip Select est activée à l'état bas et permettre ainsi l'établissement de la communication SPI
7. LDAC => (Load DAC) Lorsque cette entrée est à 0, elle provoque un changement de la tension de sortie et lorsque la broche LDAC est activée, les valeurs enregistrées dans le registre de mise à jour sont chargées simultanément dans tous les DAC associés. Cela permet d'assurer une mise à jour cohérente et synchrone des sorties analogiques.
8. MOSI => la broche MISO n'existe pas dans le DAC
9.
10. cela se trouve dans la documentation du STLink page 26

## **3.1 Activation des LL drivers**

2. 
3.
4.
5.

## 3.2 LED simple
![led](https://github.com/hugolc95/TP-C/blob/main/image/LEDsimple.png)
2. La valeur du prescaler est de 63


## 3.3 LED avec timer

1- On active le TIM21 

2- Pour qu'il y est des interruption toutes les milli-secondes
On met 16000 pour le prescaler et 1000 pour l'AutoReloadRegister (ARR)

6- La routine de service d’interruption se trouve dans le fichier stm3210xx_it.c

7- 


## 3.4 UART

code photo telephone

5- il manque le **&**, il faut donnée une adresse car la déclaration de SerialTransmit(**&** ch, 1); le premier parametre est un pointeur
