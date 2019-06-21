//TP 3 de Testing de Sistemas Embebidos
// Gustavo Fabian Paredes Delaloye
/*

Tesis "Desarrollo de un sistema de monitoreo de redes TCN" para las formaciones chinas de la Linea
Sarmiento.

La funcion a testear debe Leer en forma completa la memoria compartida (almacen de trafico).

Los pasos a cumplir en cada testeo son:
i   Leer posicion de memoria (PRIMER COMMIT).
ii  Devolver TRUE si pudo leer, y FALSE si no (SEGUNDO COMMIT).
iii Devolver valor de la posicion de memoria leida.
iii 
v   Calcular cantidad de datos incongruente y devolver valor.

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
