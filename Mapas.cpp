#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int grados;
    float min, seg, grad1, grad2;
    char lat[6], longi[6],d; //declaración de variables
    printf("Latitud: "); //emepzar a pedir los datos
    gets(&lat);
    printf("  grados: ");
    scanf("%d", &grados);
    printf("  minutos: ");
    scanf("%f", &min);
    printf("  segundos: ");
    scanf("%f", &seg);
    while((d = getc(stdin)) != '\n' && d != EOF);
    grad1 = grados + (min / 60) + (seg / 3600);
    if(lat == "Sur" || lat == "sur")
	{
        grad1 = -grad1;
    }
    printf("Longitud: "); //imprime los valores recibidos
    gets(&longi);
    printf("  grados: ");
    scanf("%d", &grados);
    printf("  minutos: ");
    scanf("%f", &min);
    printf("  segundos: ");
    scanf("%f", &seg);
    grad2 = grados + (min / 60) + (seg / 3600);
    if(strcmp(lat,"Sur") == 0 || strcmp(lat,"sur") == 0) //comparación de latitud
	{
        if(strcmp(longi,"Oeste") == 0 || strcmp(longi,"oeste") == 0)
		{
            printf("https://maps.google.com/maps/place/-%.15f,-%.15f", grad1, grad2); //imprime la salida
        }
        else 
		{
            printf("https://maps.google.com/maps/place/-%.15f,%.15f", grad1, grad2);//imprime la salida
        }
    }
    else
	{
        if(strcmp(longi,"Oeste") == 0 || strcmp(longi,"oeste") == 0) //comparación de longitud
		{
            printf("https://maps.google.com/maps/place/%.15f,-%.15f", grad1, grad2);//imprime la salida
        }
        else
		{
            printf("https://maps.google.com/maps/place/%.15f,%.15f", grad1, grad2);//imprime la salida
        }
    }
	return 0;
}