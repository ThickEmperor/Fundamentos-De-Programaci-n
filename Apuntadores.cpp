#include <stdio.h>
#include <string.h>

char* voltea_cadena(char arr[]) {
  int largo_cadena = strlen(arr) - 1;
  char temp, *inicio = arr, *fin = arr;
  for(int j = 0; j < largo_cadena; j++){
    *fin++;
  }

  for (int i = 0; i <= (largo_cadena / 2); i++) {
    temp = *fin;
    *fin = *inicio;
    *inicio = temp;
    inicio++;
    fin--;
  }
  return arr;
}
int main()
{
  char str[100] = "Hola", *new_str;
  new_str = voltea_cadena(str);
  printf("La cadena volteada: %s\n", new_str);
  return 0;
}