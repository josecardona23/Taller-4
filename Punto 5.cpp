#include <stdio.h>
#include <stdlib.h>
struct promedio{
	float nota1, nota2, nota3;
};
struct alumno {
	char nombre[30];
	char sexo[20];
	int edad, grado;
	 promedio prom;
} estu[100];
	const int L=100;
	int n, posme, posma, mayor=0.0, menor=999.999;
	float prome[L];
//Prototipos de funcion
void crearAlumnos(int n, alumno estu[L], int L);
void imprimirAlumnos(int n, alumno estu[L], int L);

int main(int argc, char *argv[]) {
//Llamando a la funcion
	crearAlumnos(n, estu, L);
	imprimirAlumnos(n, estu, L);

	return 0;
}
//Llenando los datos de los trabajadores
void crearAlumnos(int n, alumno estu[L], int L){
	int i;
	printf("Ingrese la cantidad de alumnos a registrar: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("\nIngrese los datos del alumno N %d.\n", i+1);
		printf("Nombre: ");
		scanf("%s", &estu[i].nombre);
		printf("Edad: ");
		scanf("%d", &estu[i].edad);
		printf("Sexo: ");
		scanf("%s", &estu[i].sexo);
		printf("Grado: ");
		scanf("%d", &estu[i].grado);
			printf("\nAhora ingrese sus notas.\n");
		printf("Nota 1: ");
		scanf("%f", &estu[i].prom.nota1);
		printf("Nota 2: ");
		scanf("%f", &estu[i].prom.nota2);
		printf("Nota 3: ");
		scanf("%f", &estu[i].prom.nota3);
		//Calculando el promedio segun los datos ingresados.
		prome[i] = (estu[i].prom.nota1+estu[i].prom.nota2+estu[i].prom.nota3)/3;
		//Calculando el promedio mayor.
		if(prome[i] > mayor){
			mayor = prome[i];
			posma = i;
		}
		//calculando el promedio menor.
		else if (prome[i]<menor){
			menor = prome[i];
			posme = i;
		}
	}
}
//Imprimiendo los datos de los trabajadores con mayor y menor salario
void imprimirAlumnos(int n, alumno estu[L], int L){
	//Alumno con mayor promedio
	printf("\n Datos del alumno con el mayor promedio. \n");
	printf("Nombre: %s", estu[posma].nombre);
	printf("\nEdad: %d", estu[posma].edad);
	printf("\nSexo: %s", estu[posma].sexo);
	printf("\nGrado: %d", estu[posma].grado);
	printf("\nPromedio %2.1f", prome[posma]);
	//Alumno con menor promedio
	printf("\n\nDatos del alumno con el menor promedio. \n");
	printf("Nombre: %s", estu[posme].nombre);
	printf("\nEdad: %d", estu[posme].edad);
	printf("\nSexo: %s", estu[posme].sexo);
	printf("\nGrado: %d", estu[posme].grado);
	printf("\nPromedio %2.1f", prome[posme]);
}
