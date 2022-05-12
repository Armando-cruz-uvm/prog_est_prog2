/* 
Autor: Armando Cruz Cruz
Escuela: UVM Campus Villahermosa
Materia: Programacion Estructurada
CICLO: 01/2022

Programa en lenguaje C que muestra el uso de:
- declaracion de variables
- variables del tipo flotantes
- scanf
- operaciones aritmeticas
- printf para mostrar los valores de las variables

*/
#include<stdio.h>

int main() {
	// Declaracion variables
	float base,altura,area;
	//Entrada de datos
	printf("Introduce la base: ");
	scanf("%f",&base);
	printf("Introduce la altura: ");
	scanf("%f",&altura);
	//Proceso
	area=base*altura/2;
	//salida
	printf("El area del triangulo es %f",area);
	return 0;
}

