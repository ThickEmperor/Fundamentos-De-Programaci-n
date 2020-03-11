// MuchosDados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    const int lados = 6;
    int v1, v2;
    int suma2 = 0;
    int suma3 = 0;
    int suma4 = 0;
    int suma5 = 0;
    int suma6 = 0;
    int suma7 = 0;
    int suma8 = 0;
    int suma9 = 0;
    int suma10 = 0;
    int suma11 = 0;
    int suma12 = 0;
    int aux = 0;
    char resp = 's';
    printf("tirare dos dado\n");
    while (resp != 'n')
    {
        for(int i = 0; i <= 36000; i++)
        {
            v1 = rand() % lados + 1;
            v2 = rand() % lados + 1;
            aux = v1 + v2;
            if (aux == 2)
            {
                suma2 = suma2 + 1;
            }
            if (aux == 3)
            {
                suma3 = suma3 + 1;
            }
            if (aux == 4)
            {
                suma4 = suma4 + 1;
            }
            if (aux == 5)
            {
                suma5 = suma5 + 1;
            }
            if (aux == 6)
            {
                suma6 = suma6 + 1;
            }
            if (aux == 7)
            {
                suma7 = suma7 + 1;
            }
            if (aux == 8)
            {
                suma8 = suma8 + 1;
            }
            if (aux == 9)
            {
                suma9 = suma9 + 1;
            }
            if (aux == 10)
            {
                suma10 = suma10 + 1;
            }
            if (aux == 11)
            {
                suma11 = suma11 + 1;
            }
            if (aux == 12)
            {
                suma12 = suma12 + 1;
            }
            
        }
       
        printf("\nsuma 2 = %d \n", suma2);
        printf("suma 3 = %d \n", suma3);
        printf("suma 4 = %d \n", suma4);
        printf("suma 5 = %d \n", suma5);
        printf("suma 6 = %d \n", suma6);
        printf("suma 7 = %d \n", suma7);
        printf("suma 8 = %d \n", suma8);
        printf("suma 9 = %d \n", suma9);
        printf("suma 10 = %d \n", suma10);
        printf("suma 11 = %d \n", suma11);
        printf("suma 12 = %d \n", suma12);
        printf("desea continuar?");
        scanf_s("%c", &resp, 1);

    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
