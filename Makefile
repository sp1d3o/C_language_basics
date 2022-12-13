#Name: Basic Calculator Project - For Education Purposes
#Author: Cmaxs
#Date: 13.12.2022

files = main.c calcul.c calcul.h math.h

calcul: ${files}
	gcc main.c calcul.c -o calcul

clean:
	rm main.c calcul.c calcul.h main.h

pack:
	tar cvf ${files}
