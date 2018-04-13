#include <stdio.h>
#include <stdlib.h>
//Creando nuevo tipo de dato.
struct persona {
	char nombre[30];
	char discapacidad ='v';
}personas[100];
	const int L=100;
	int cantPersonas=0, posCon, posSin;
//Prototipo de funcion
void crearPersona();
void imprimir();

int main(int argc, char** argv) {
	//Llamando a la  funcion.
	crearPersona();
	imprimir();
	return 0;
}

//Llenando los datos de las personas.
void crearPersona(){
	int i, conDis[L], sinDis[L];
	char opcion[L];
	printf("Ingrese la cantidad de personas a registrar: ");
	scanf("%d", &cantPersonas);
	for(i=0; i<cantPersonas; i++){
		printf("\nIngrese datos del paciente N %d", i+1);
		printf("\nIngrese el nombre: ");
		scanf("%s", &personas[i].nombre);
		printf("Si es discapacitado presione 'v', sino 'f': ");
		scanf("%s", &opcion[i]);
		//determinando que personas tienen discapacidades y cuales no
		if(opcion[i] == 'v'){
			conDis[i]++;
			posCon=i;
		}else if(opcion[i] == 'f'){
		sinDis[i]++;
		posSin=i;
		}
	}	
}
//Imprimiendo los datos de las personas que tienen discapacidad y las que no.
void imprimir(){
	printf("\nLas personas con discapacidad son: \n");
	printf("- %s", personas[posCon].nombre);
	
	printf("\nLas personas sin discapacidad son:\n");
	printf("- %s", personas[posSin].nombre);
	
}
