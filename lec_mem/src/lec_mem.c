#include "stdio.h"
#include <stdint.h>
#include <stdbool.h>
#include "lec_mem.h"

#define TRUE 1
#define FALSE 0


int leer_almacen_trafico(uint16_t * dir_mem){

	// Crea variable val_mem para guardar el dato leido de memoria.
	uint16_t val_mem = 0;

	// Guarda en val_mem el valor almacenado en la direccion apuntada por dir_mem (cero en este caso).
	val_mem = 0;

	// Devuelve el valor de val_mem
	return val_mem;

}


int leer_almacen_trafico_sumando(uint16_t * dir_mem){

	// Crea variable val_mem para guardar el dato leido de memoria.
	uint16_t val_mem = 0;

	// Guarda en val_mem el valor almacenado en la direccion apuntada por dir_mem (uno en este caso para comprobar la suma).
	val_mem = 1;

	// Devuelve el valor de val_mem
	return val_mem;

}

