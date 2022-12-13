#ifndef CALCUL_H_
#define CALCUL_H_

// seznam knihoven (header files(viz main.h))

//knihovna pro vstup/výstup(funkce printf, scanf)
#include <stdio.h>
//knihovna pro práci s datovými typy a povahou dat - zda je celé číslo, znak atd atd (funkce isdigit(),
//isnumber(), isalpha()...)
#include <ctype.h>
//knihovna pro práci se slovy (odborně string = řetězec znaků (viz. main.h) - funkce strlen
#include<string.h>

//knihovna pro práci s logikou (pravda-True-cokoliv krom 0, nepravda-False-0)
#include <stdbool.h>

bool check_arguments();

#endif