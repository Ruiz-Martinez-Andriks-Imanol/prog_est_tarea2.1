/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 10/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables enteras y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Condicionales
    -Espaciado \t y el salt ode renglón \n
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
	//Declaración de variables
	int servicio, cuenta;
	float minutos, descuento=0, total, dia, noche;
	//Proceso
	printf("Introduce el tipo de servicio(1. Regular, 2. Premium): ");
	scanf("%d",&servicio);
	printf("Introduce una cantidad: ");
	scanf("%f",&minutos);
	printf("Introduce el numero de cuenta: ");
	scanf("%d", &cuenta);
	printf("\t\t EL numero de la cuenta es: %d\n", cuenta);
	if (servicio==1) { //Condicional
	descuento=((50 + minutos)*0.20)+10;
	printf("El monto es: %10.2f\n ", descuento);
} else if (servicio==2) {
	dia=((minutos-75)*0.10)+25;
	noche=((minutos-75)*0.10)+25;	
	total= dia+noche;
	//Salida
	printf("Monto del dia: %10.2f\n ", dia);
	printf("Monto de la noche: %10.2f\n ", noche);
		printf("total: %10.2f\n ", total);
  }	
	return 0;
}
