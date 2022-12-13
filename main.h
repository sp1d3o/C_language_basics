#ifndef MAIN_H_
#define MAIN_H_
//to výše je tzv include guard - vysvětlím níže

/**
 * Vítej. Jeslti tě v sobotu bolela palice po těch pár trivialitách, po tomhle vybouchne.
 * Začněme.
 * Základní datové typy (viz sobota, snad si něco pamatuješ):
 *
 * char = znak, např. 'A'
 * short = krátké celé číslo (rozsah je na internetu)
 * int = celé číslo (-//-)
 * float = desetinné číslo
 * double = dvakrát přesnější desetinné číslo
 *      kdyby tě zajímalo jak se to liší/odvozuje: https://en.wikipedia.org//wiki/Floating-point_arithmetic
 * long
 * long long
 * long double
 *
 * Základní řízení běhu programu (naťukli jsme začátek):
 * IF - ELSE /IF - ELSE IF - ELSE konstrukce
 *  vytvořím si dvě proměnné
 *  int a = 5;
 *  int b = 10;
 *
 *  //pokud je a menší než b
 *  if(a < b) {
 *      //vypiš co chci
 *      printf("a je menší než b");
 *  }
 *
 *  //nebo pokud je a větší než b
 *  else if(a > b) {
 *      //vypiš co chci
 *      printf("a je větší než b");
 *  }
 *
 *  //pokud není pravda žádný if, tak else je defaultní možnost jak se zachovat
 *  else {
 *      printf("a je stejné jako b");
 *  }
 *
 *  dá se použít pouze samotný IF:
 *
 * if(a > b) {
 *  printf("vypiš co chceš");
 * }
 *
 * FOR a WHILE cykly
 * tyhle jsou dost podobný, vypadají takhle:
 * FOR cyklus:
 *  for(počátek(inicializace); podmínka; inkrementace) {
 *      tělo cyklu(příkazy);
 *  }
 *
 *  např.:
 *  for(int i = 0; i < 10; i++) {
 *      printf("%d\n", i);
 *  }
 *
 *  vysvětlení:
 *  část před prvním středníkem: vytvoř proměnnou i typu int a nastav ji na 0
 *
 *  část uprostřed mezi středníky - podmínka: pokud je i menší než 10
 *
 *  poslední část - inkrementace: zvětši proměnnou i o 1 (i++ je to samé jako i = i + 1,
 *  prostě se hodnota i zvýší o jedničku (i-- by hodnotu zmenšilo o 1))
 *
 *  tělo cyklu (ten příkaz printf) - vypiš hodnotu i
 *
 *  s tím, že cesta je: vytvoření proměnné i -> podmínka, pokud je pravdivá (pokud je i menší než
 *  10->vypiš aktuální hodnotu->zvyš hodnotu i o 1 a vrať se do podmínky
 *
 *  takže tento cyklus proběhne celkem 9x - vypíší se pod sebou čísla 0 až devět
 *
 *  to samé by v cyklu WHILE vypadalo takhle:
 *
 *  int i = 0;
 *  while(i < 10) {
 *      printf("%d\n", i);
 *      i++;
 *  }
 *
 *  vysvětlení while: když je splněna podmínka, proveď tělo cyklu
 *
 *
 *  v cyklu DO - WHILE by to vypadalo takto:
 *
 *  int i = 0;
 *  do {
 *      printf("%d\n", i);
 *      i++;
 *  }
 *  while(i < 10);
 *
 *  bacha na středníky :D
 */


#endif