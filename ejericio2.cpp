#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Indique qu� afirmaci�n en relaci�n con el siguiente programa es correcta:
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
	/*a) Se producir� un error de compilaci�n porque la estructura person est� repetida en tres miembros de la estructura movie.
	b) Se produce un error de compilaci�n porque un miembro de una estructura no puede ser otra estructura.
	c) La sentencia strcpy(my_movie.director.name, "Federico Fellini");genera un error en tiempo de compilaci�n.
	d) Todas las afirmaciones anteriores son falsas.*/
