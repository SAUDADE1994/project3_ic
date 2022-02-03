# project3_ic
fcm-shannon

COMPILE

$ g++ main.c++ ../include/fcm.c++ ../include/lang.c++ -o main
---------------------------------------------------------------
EXECUTE

./main "localização_texto_a_comparar"
exemplos:

$ ./main ../samples/ref/r_PT.txt 
	compara um texto em pt, com os vários textos modelos presentes em samples/ref/
	
$ ./main ../samples/ref/r_FR.txt
	compara um texto em fr, com os vários textos modelos presentes em samples/ref/
	
...
