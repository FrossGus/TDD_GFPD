//TP 3 de Testing de Sistemas Embebidos
// Gustavo Fabian Paredes Delaloye
/*

Tesis "Desarrollo de un sistema de monitoreo de redes TCN" para las formaciones chinas de la Linea
Sarmiento.

La funcion a testear debe Leer en forma completa la memoria compartida (almacen de trafico).

Los pasos a cumplir en cada testeo son:
i   Leer posicion de memoria (PRIMER COMMIT).
ii  Devolver TRUE si pudo leer, y FALSE si no.
iii Devolver valor de la posicion de memoria leida.
iii 
v   Calcular cantidad de datos incongruente y devolver valor.

*/
#include "stdio.h"
#include <stdint.h>

#include "unity.h"
#include "lec_mem.h"

void test_leer_primera_posicion_memoria (void) {
	uint16_t dir_mem = 0x0000;
	leer_almacen_trafico(&dir_mem);	
	TEST_ASSERT_EQUAL(0x0000, dir_mem);
	//TEST_FAIL_MESSAGE("FALLO EL TEST !!");// Texto que sale si falla.


}
