#include <stdio.h> 
int main() 
{ 
    //code 
    int valorA; 
    int valorB; 
    int valorC; 
    int R; 
    int S; 
    int D;
    {
    printf("Entre com o primeiro número");
    scanf("%d", &valorA); 
    }
    {
    printf("Entre com o segundo número"); 
    scanf("%d", &valorB);
    }
    {
    printf("Entre com o terceiro número");
    scanf("%d", &valorC); 
    }
    {
    R=((valorA+valorB)*(valorA+valorB)); 
    printf("\n""%d",R);
    }
    {
    S=((valorB+valorC)*(valorB+valorC)); 
    printf("\n""%d",S);
    }
    {
    D=((R+S)/2); 
    printf("\n""%d",D);
    }
return 0;
}
