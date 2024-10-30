#include <stdio.h>
#include <string.h> 
int main() 
{ 

    //code 
    float altura; 
    int peso; 
    char sexo; 
     printf("Sexo da pessoa, M para masculino e F para feminino:"); 
    scanf("%c", &sexo); 
    printf("Altura da pessoa"); 
    scanf("%f", &altura); 
    if (sexo="M")
    peso=((72.7*altura)-58); 
    else if (sexo="F")
    peso=((62.1*altura)-44,7); 
    printf("Peso ideal="); 
    printf("%d", peso); 
return 0; 
}
