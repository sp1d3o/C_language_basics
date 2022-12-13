Cosi jako učební text o základech programovacího jazyka C.
Dokumentováno ve formě komentářů, někdy později možná v rámci tréninku dodělám dokumentaci z LaTeXu xD
Tenhle wannabe projekt ukazuje nejjednodušší a nejblbější kalkulačku - dost jednoduchej příklad na pochopení a zároveň se na něm dá spousta věcí ukázat.
Tenhle projekt bude obsahovat 4 důležité zdrojové soubory: 
calcul.h - tzv. header file(co to je se dozvíš) pro funkce kalkulačky
calcul.c - implementační soubor s funkcemi kalkulačky
main.h - víceméně hlavní soubor pro obecné informace, generické ukázky konceptů atd atd
main.c - hlavní soubor který bude vše spouštět

Kalkulačka by měla umět: 
    sčítat
    odčítat
    násobit
    dělit
    umocňovat na druhou - v případě zadání power <číslo>
    odmocňovat - v případě zadání sqrt <číslo> na vstupu od uživatele

  Bude brát ze standardního vstupu od uživatele 2 čísla, případně textový vstup, pokud bude chtít umocnit/odmocnit. Měla by zkontrolovat validitu vstupu,
  v případě zadání špatného vstupu (budeme počítat pouze s kladnými celými čísly menšími než 100) vypíše chybovou hlášku a program skončí.

Překládáno pomocí pravidla:
  gcc main.c calcul.c -o calcul
Lze využít příkaz make, viz Makefile

Spouštění pomocí:
  ./calcul {argument1, argument2}

Snad pomůže.    
