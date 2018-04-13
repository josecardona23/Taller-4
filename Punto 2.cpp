#include <stdio.h>
#include <stdlib.h>
//Creando tipo de dato
struct Estudiante{
	char nombre[30];
	int edad, grado;
	float notas[4];
	float promedio;
};

Estudiante alumno[3];
int nEstu = 0;
//Prototipo de funcion
void menu();
void crearEstudiante();
void mostrarEstudiantes();
void mejorEstudiante();

int main(){
	menu();
	return 0;
}

void menu(){
	int opcion;
	
	do{
		printf("MENU\n");
		printf("1. Crear Estudiante\n");
		printf("2. Mostrar Estudiantes\n");
		printf("3. Mejor Estudiante\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: crearEstudiante();
				break;
			case 2: mostrarEstudiantes();
				break;
			case 3: mejorEstudiante();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}

	}while(opcion != 0);
}
//Creando los estudiantes
void crearEstudiante(){
	int i, suma = 0;
	printf("Ingrese nombre: ");
	scanf("%s", &alumno[nEstu].nombre);
	printf("\nIngrese edad: ");
	scanf("%d", &alumno[nEstu].edad);
	printf("\nIngrese grado: ");
	scanf("%d", &alumno[nEstu].grado);
	for(i = 0; i < 4; i++){
		printf("\nIngrese nota %d: ", i + 1);
		scanf("%f", &alumno[nEstu].notas[i]);
		suma += alumno[nEstu].notas[i];
	}
	alumno[nEstu].promedio = suma / 4;
	printf("Estudiante registrado con exito\n");
	nEstu += 1;
}
//Mostrando los estudiantes registrados
void mostrarEstudiantes(){
	int i, j;
	for(i = 0; i < nEstu; i++){
		printf("Estudiante No. %d\n", i + 1);
		printf("Nombre: %s", alumno[i].nombre);
		printf("Edad: %d", alumno[i].edad);
		printf("Grado: %d", alumno[i].grado);
		for(j = 0; j < 4; j++){
			printf("Nota %d = %.f\n", i + 1, alumno[i].notas[j]);
		}
		printf("Promedio: %.f\n", alumno[i].promedio);
	}	
}
//Definiendo al mejor estudiante
void mejorEstudiante(){
	int mayor = 0, i, aux, j;
	for(i = 0; i < nEstu; i++){
		if(alumno[i].promedio > mayor){
			mayor = alumno[i].promedio;
			aux = i;
		}
	}
	//Mostrando la informacion del mejor estudiante
	printf("\nMejor alumno No. %d\n", aux + 1);
	printf("Nombre: %s\n", alumno[aux].nombre);
	printf("Edad: %d\n", alumno[aux].edad);
	printf("Grado: %d\n", alumno[aux].grado);
	for(j = 0; j < 4; j++){
		printf("Nota %d = %.f\n", i + 1, alumno[aux].notas[j]);
	}
	printf("Promedio: %.f\n", alumno[aux].promedio);
}
