#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    
    //code 
    char funcionario[12]; 
    float sal_bruto; 
    float sal_liquido; 
    printf("Nome do funcionário"); 
    scanf("%s",&funcionario); 
    {
    printf("Valor do salário bruto");
    scanf("%f",&sal_bruto); 
    }
    sal_liquido=(sal_bruto*0.90);
    printf("Valor do salário líquido\n"); 
    printf("%.2f", sal_liquido);
return 0; 
}
