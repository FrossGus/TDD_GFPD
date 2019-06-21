#include "build/temp/_test_lec_mem.c"
#include "lec_mem.h"
#include "unity.h"










void test_leer_primera_posicion_memoria (void) {





 uint16_t dir_mem = 0x0000;





 leer_almacen_trafico(&dir_mem);





 UnityAssertEqualNumber((UNITY_INT)((0x000)), (UNITY_INT)((dir_mem)), (

((void *)0)

), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);



}



void test_devolver_true_false_lectura_posicion_memoria (void) {





 uint16_t dir_mem = 0x0000;





 

_Bool 

     devolucion;





 devolucion = leer_almacen_trafico(&dir_mem);





 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((devolucion)), (

((void *)0)

), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);



}





void test_devolver_valor_posicion_memoria (void) {





 uint16_t dir_mem = 0x0000;





 uint16_t devolucion;





 devolucion = leer_almacen_trafico(&dir_mem);





 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((devolucion)), (

((void *)0)

), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);



}



void test_leer_varias_direcciones_memoria (void) {





 uint16_t dir_mem = 0x0000;





 uint16_t devolucion;





 for (int i = 0; i < 100; i++){





  devolucion = leer_almacen_trafico(&dir_mem + i);





  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((devolucion)), (

 ((void *)0)

 ), (UNITY_UINT)(89), UNITY_DISPLAY_STYLE_INT);



 }

}



void test_leer_varias_direcciones_memoria_sumar_valores (void) {





 uint16_t dir_mem = 0x0000;





 uint16_t devolucion;





 for (int i = 0; i < 100; i++){





  devolucion = devolucion + leer_almacen_trafico_sumando(&dir_mem + i);







 }

 UnityAssertEqualNumber((UNITY_INT)((100)), (UNITY_INT)((devolucion)), (

((void *)0)

), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_INT);

}
