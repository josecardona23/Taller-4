#include <stdio.h>
#include <stdlib.h>
//Creando nuevo tipo de dato
struct Trabajador {
	char nombre[30];
	char sexo[20];
	int edad, salario;
	 
} trab[100];
	const int L=100;
	int n, posme, posma, mayor=0, menor=99999;;
//Prototipos de funcion
void crearTrabajador(int n, Trabajador trab[L], int L);
void imprimirTrabajadores(int n, Trabajador trab[L], int L);

int main(int argc, char *argv[]) {
//Llamando a la funcion
	crearTrabajador(n, trab, L);
	imprimirTrabajadores(n, trab, L);

	return 0;
}
//Llenando los datos de los trabajadores
void crearTrabajador(int n, Trabajador trab[L], int L){
	int i;
	printf("Ingrese la cantidad de trabajadores a registrar: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("\nIngrese los datos del trabajador N %d.\n", i+1);
		printf("Nombre: ");
		scanf("%s", &trab[i].nombre);
		printf("Edad: ");
		scanf("%d", &trab[i].edad);
		printf("Sexo: ");
		scanf("%s", &trab[i].sexo);
		printf("Salario: ");
		scanf("%d", &trab[i].salario);
	}//Determinando el trabajador con el menor y mayor salario
		for(i=0; i<n; i++){
		if(trab[i].salario > mayor){
			mayor = trab[i].salario;//Guardando el valor del mayor salario en la variable mayor
		posma=i; //Guardando la posicion del empleado con mayor salario
		}
		if(trab[i].salario < menor){
			menor = trab[i].salario;//Guardando el valor del menor salario en la variable menor
		posme=i; //Guardando la posicion del empleado con menor salario
		}
	}
	
}
	
//Imprimiendo los datos de los trabajadores con mayor y menor salario
void imprimirTrabajadores(int n, Trabajador trab[L], int L){
		//Empleado con mayor salario
	printf("\nDatos del trabajador con el mayor salario. \n");
	printf("Nombre: %s", trab[posma].nombre);
	printf("\nEdad: %d", trab[posma].edad);
	printf("\nSexo: %s", trab[posma].sexo);
	printf("\nSalario: %d", trab[posma].salario);
	//Empleado con menor salario
	printf("\n\nDatos del trabajador con el menor salario. \n");
	printf("Nombre: %s", trab[posme].nombre);
	printf("\nEdad: %d", trab[posme].edad);
	printf("\nSexo: %s", trab[posme].sexo);
	printf("\nSalario: %d", trab[posme].salario);
}
