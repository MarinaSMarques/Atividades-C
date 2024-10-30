#include <stdio.h>
#include <string.h> 
int main() 
{ 
    //code 
    int nota1; 
    int nota2; 
    int nota3; 
    int media; 
    
    printf("Primeira nota");
    scanf("%d", &nota1); 
    printf("Segunda nota"); 
    scanf("%d", &nota2); 
    printf("Terceira nota"); 
    scanf("%d", &nota3); 
    media=((nota1*2+nota2*3+nota3*5)/10); 
    printf("%d", media); 
    if (media==10) 
    printf("\n Ótimo desempenho \n"); 
    else if (media>=7) 
    printf("Aprovado"); 
    else if (media<7 && media>=4) 
    printf("Exame final");
    else if (media<4) 
    printf("Reprovado");
return 0; 
}
