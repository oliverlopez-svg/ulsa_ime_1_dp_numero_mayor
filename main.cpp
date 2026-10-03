// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    // Paso 1: mensaje de bienvenida
    std::cout << "bienvenido al programa\n";
    std::cout << "por favor, ingrese 3 numeros\n";

    // Variables (siempre inicializadas)
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int mayor = 0;

    // Paso 2: leer los tres números
    std::cin >> numero1 >> numero2 >> numero3;

    // Paso 3: decidir cuál es el mayor
    // Se usa if / else if / else porque solo se necesita un resultado final.
    // Si dos números son iguales, la condición >= mantiene el primer valor como ganador.
    if (numero1 >= numero2 && numero1 >= numero3) {
        mayor = numero1;
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        mayor = numero2;
    } else {
        mayor = numero3;
    }

    // Paso 4: mostrar el resultado
    std::cout << "El numero mayor es: " << mayor << std::endl;

    // ¿Qué significa return 0;?
    // Indica que el programa terminó correctamente.
    return 0;
}