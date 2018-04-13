#include <stdio.h>
#include <stdlib.h>
//Creando tipo de dato.
struct promedio{
	float nota1, nota2, nota3;
};
struct alumno {
	char nombre[30];
	char sexo[30];
	int edad, grado;
	promedio prom;
}estu;
//Prototipo de funcion.
void todo();

int main(int argc, char** argv) {
	//Llamando a la funcion.
	todo();	
	return 0;
}
//Llenando los datos del alumno y sus notas.
void todo(){
	float promedio = 0;
	printf("Ingrese sus datos.\n");
	printf("Nombre: ");
	fgets(estu.nombre, 30, stdin);
	printf("Edad: ");
	scanf("%d", &estu.edad);
	printf("Sexo: ");
	scanf("%s", &estu.sexo);
	printf("Grado: ");
	scanf("%d", &estu.grado);
	printf("\n\nAhora ingrese sus notas.\n");
	printf("Nota 1: ");
	scanf("%f", &estu.prom.nota1);
	printf("Nota 2: ");
	scanf("%f", &estu.prom.nota2);
	printf("Nota 3: ");
	scanf("%f", &estu.prom.nota3);
	//calculando el promedio.
	promedio = (estu.prom.nota1 + estu.prom.nota2 + estu.prom.nota3)/3;
	//Imprimiendo los datos.
	printf("\n\nDatos del Alumno.\n");
	printf("Nombre: %s", estu.nombre);
	printf("\nEdad: %d", estu.edad);
	printf("\nSexo: %s", estu.sexo);
	printf("\nGrado: %d", estu.grado);
	printf("\nPromedio: %2.1f", promedio);
}

