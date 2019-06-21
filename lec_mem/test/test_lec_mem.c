//TP 3 de Testing de Sistemas Embebidos
// Gustavo Fabian Paredes Delaloye
/*

Tesis "Desarrollo de un sistema de monitoreo de redes TCN" para las formaciones chinas de la Linea
Sarmiento.

La funcion a testear debe Leer en forma completa la memoria compartida (almacen de trafico).

Los pasos a cumplir en cada testeo son:
i   Leer posicion de memoria (PRIMER COMMIT).
ii  Devolver TRUE si pudo leer, y FALSE si no (SEGUNDO COMMIT).
iii Devolver valor de la posicion de memoria leida (TERCER COMMIT)
iv  Leer varias direcciones de memoria (CUARTO COMMIT).
v   Sumar los valores de las direcciones de memoria leidas. (QUINTO COMMIT)

*/
#include "stdio.h"
#include <stdint.h>
#include <stdbool.h>

#include "unity.h"
#include "lec_mem.h"

#define TRUE 1
#define FALSE 0

void test_leer_primera_posicion_memoria (void) {

	// Asigno la direccion de memoria a leer.
	uint16_t dir_mem = 0x0000;

	// Envio la direccion de memoria a leer a la funcion especifica.
	leer_almacen_trafico(&dir_mem);	

	// Compruebo que leyo la direccion de memoria que le pase.
	TEST_ASSERT_EQUAL(0x000, dir_mem);

}

void test_devolver_true_false_lectura_posicion_memoria (void) {
	
	// Asigno la direccion de memoria a leer.
	uint16_t dir_mem = 0x0000;

	// Creo la variable booleana donde almacenar la devolucion.
	bool devolucion;

	// Envio la direccion de memoria a leer a la funcion especifica.
	devolucion = leer_almacen_trafico(&dir_mem);	

	// Compruebo que no pudo leer la direccion de memoria.
	TEST_ASSERT_EQUAL(FALSE, devolucion);

}


void test_devolver_valor_posicion_memoria (void) {
	
	// Asigno la direccion de memoria a leer.
	uint16_t dir_mem = 0x0000;

	// Creo la variable donde almacenar la devolucion.
	uint16_t devolucion;

	// Envio la direccion de memoria a leer a la funcion especifica y almaceno en devolucion
	devolucion = leer_almacen_trafico(&dir_mem);	

	// Compruebo que devolvio el valor de la direccion de memoria.
	TEST_ASSERT_EQUAL(0, devolucion);

}

void test_leer_varias_direcciones_memoria (void) {
	
	// Asigno la direccion de memoria a leer.
	uint16_t dir_mem = 0x0000;

	// Creo la variable donde almacenar la devolucion.
	uint16_t devolucion;


	for (int i = 0; i < 100; i++){

		// Envio la direccion de memoria a leer a la funcion especifica y almaceno en devolucion
		devolucion = leer_almacen_trafico(&dir_mem + i);	

		// Compruebo que devolvio el valor de la direccion de memoria.
		TEST_ASSERT_EQUAL(0, devolucion);

	}
}

void test_leer_varias_direcciones_memoria_sumar_valores (void) {
	
	// Asigno la direccion de memoria a leer.
	uint16_t dir_mem = 0x0000;

	// Creo la variable donde almacenar la devolucion.
	uint16_t devolucion;


	for (int i = 0; i < 100; i++){

		// Envio la direccion de memoria a leer a la funcion especifica y almaceno en devolucion
		devolucion = devolucion + leer_almacen_trafico_sumando(&dir_mem + i);	

		// Compruebo que devolvio el valor de la direccion de memoria.

	}
	TEST_ASSERT_EQUAL(100, devolucion);
}



