#include "build/temp/_test_lec_mem.c"
#include "lec_mem.h"
#include "unity.h"




void test_leer_primera_posicion_memoria (void) {

 uint16_t dir_mem = 0x0000;

 leer_almacen_trafico(&dir_mem);

 UnityAssertEqualNumber((UNITY_INT)((0x0000)), (UNITY_INT)((dir_mem)), (

((void *)0)

), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);







}
