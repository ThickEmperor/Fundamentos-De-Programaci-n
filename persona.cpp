#include <stdio.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
} Persona;

//typedef struct persona Persona;


int main()
{
    Persona array_de_personas[10];
	Persona una_persona;
    char c;
    FILE *aarchivo;

	//int a, b;
	//char nombre_completo[100];s
	 for(int i = 0; i < 10; i++)
        {
            array_de_personas[0].id_persona = 1;
            printf("Introduzca su nombre completo:\n");
            fgets(array_de_personas[0].nombre, 99,stdin);
            printf("Introduzca el sexo de la persona [H/M]:\n");
            array_de_personas[0].sexo = getc(stdin);
            while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
            printf("Introduzca la direccion:\n");
            fgets(array_de_personas[0].direccion, 99,stdin);
            printf("Introduzca la religion:\n");
            fgets(array_de_personas[0].religion, 49,stdin);
            printf("Introduzca la escolaridad:\n");
            fgets(array_de_personas[0].escolaridad, 19,stdin);
            printf("Introduzca la edad:\n");
            scanf("%hu", &array_de_personas[0].edad);
            while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        }
    aarchivo = fopen("miarchivo.bin", "w");
    if(aarchivo == NULL)
    {
        printf("Error al abrir archivo.\n");
        return(1);
    }

    fwrite(array_de_personas, sizeof(Persona), 10, aarchivo);

    fclose(aarchivo);
}
