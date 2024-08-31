#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Indique qué afirmación en relación con el siguiente programa es correcta:
int main(){
	struct person{
		char name[50];
		int age;
	};
	
	struct filming {
		char place[50];
		float budget;
	};
	struct movie{
		struct person dir;
		struct person act1;
		struct person act2;
		struct filming lc;
	};
		
	}
	/*a) Se producirá un error de compilación porque la estructura person está repetida en tres miembros de la estructura movie.
	b) Se produce un error de compilación porque un miembro de una estructura no puede ser otra estructura.
	c) La sentencia strcpy(my_movie.director.name, "Federico Fellini");genera un error en tiempo de compilación.
	d) Todas las afirmaciones anteriores son falsas.*/
