// Palindromos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include<stdio.h>
int main()
{
    char cadena[1000];
    int palindromo, p = 0;
    printf("Escribe la palabra:\n");
    scanf_s("%s", cadena, 1000);
    fflush(stdout);
    palindromo = strlen(cadena) - 1;

    //for (int cad_izquierda = 0, cad_derecha = palindromo - 1; cad_izquierda = (palindromo / 2); cad_izquierda++, cad_derecha--) {
    for (int i = 0; i <= (palindromo / 2); i++) {
        if (cadena[i] != cadena[palindromo - i])   p++;
    }

    if (p > 0) {
        printf("No");
    }

    else {
        printf("Si");
    }

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
