#include <stdio.h>
#include <stdlib.h>
//Prototipos de funcion
struct Competidor{
	char nombre[30], sexo[30], club[30];
	int edad;
}comp;
void crearCompetidor();
void asignarCategoria();

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	crearCompetidor();
	asignarCategoria();
	//Imprimiendo los datos del competidor
	printf("\nMostrando los datos del competidor.\n");
	printf("Normbre: %s", comp.nombre);
	printf("Edad: %d", comp.edad);
	printf("Sexo: %s", comp.sexo);
	printf("\nClub: ", comp.club);

	return 0;
}
//Llenando los datos  del competidor
void crearCompetidor(){
	printf("Ingrese sus datos. \n");
	printf("Nombre: ");
	fgets(comp.nombre, 30, stdin);
	printf("Edad: ");
	scanf("%d", &comp.edad);
	printf("Sexo (M / F): ");
	scanf("%s", &comp.sexo);
	printf("Club: ");
	scanf("%s", &comp.club);
}

//Asignando una categoria segun los datos ingresados
void asignarCategoria(){
	char categoria;
	
	if(comp.edad <= 15){
		categoria = "Infantil";
	}else if(comp.edad <= 30){
		strcpy(categoria, "Joven");
	}else{
		strcpy(categoria, "Mayor");
	}
	
}
