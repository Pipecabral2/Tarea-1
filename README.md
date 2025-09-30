# Tarea-1
#==== STACK DEMO ====
#Top of stack: 30
#Popped: 30
#Popped: 20

#==== QUEUE DEMO ====
#Front of queue: 1
#Dequeued: 1
#Dequeued: 2

#==== HASH TABLE DEMO ====
[0] -> (apple:50) -> NULL
[1] -> NULL
[2] -> NULL
[3] -> NULL
[4] -> NULL
[5] -> NULL
[6] -> (orange:30) -> NULL
[7] -> NULL
[8] -> NULL
[9] -> (banana:20) -> NULL
Search apple: 50
[0] -> (apple:50) -> NULL
[1] -> NULL
[2] -> NULL
[3] -> NULL
[4] -> NULL
[5] -> NULL
[6] -> (orange:30) -> NULL
[7] -> NULL
[8] -> NULL
[9] -> NULL

Qué hice

Las estructuras (Stack, Queue y Hash Table) las programé desde cero en C, usando únicamente librerías básicas del lenguaje (stdio.h, stdlib.h, string.h).
No usé ninguna librería de estructuras de datos ya hechas.
El Stack lo hice con un arreglo y un índice top.
La Queue está implementada como un arreglo circular con dos índices (front y rear).
La Hash Table la construí con listas enlazadas para resolver colisiones.

Para armar todo me apoyé con ChatGPT para escribir más rápido el código y organizar la documentación, pero cada parte la revisé, corregí y adapté para que funcionara.

Test cases que probé

Stacks:

Hacer push de varios valores y confirmar que salen en orden inverso con pop.

Probar peek para ver el último valor sin sacarlo.

Intentar pop en un stack vacío → que muestre underflow.

Llenar el stack completo → que muestre overflow.

Queue :

Encole varios valores y confirmar que salen en orden con dequeue.

Revisar peek para ver el primer elemento.

Intentar dequeue en una cola vacía → que muestre underflow.

Probar la circularidad: llenar, vaciar un poco y volver a encolar.

Hash Table :

Inserte varias claves distintas y buscarlas.

Buscar claves que no existen → debe regresar -1.

Eliminar una clave y comprobar que ya no aparece.

Insertar claves que caigan en la misma posición (colisión) y comprobar que ambas se guardan bien.
