#include <stdio.h> 
int main() 
{ 
    //code 
    int distribuidor; 
    int impostos; 
    int custofabrica; 
    int custoconsumidor; 
    distribuidor=(0.28); 
    impostos=(0.45); 
    {
    printf("custo fábrica"); 
    scanf("%d", &custofabrica);
    }
    {
    custoconsumidor=(custofabrica*0.28*0.45+(custofabrica)); 
    printf("%d", custoconsumidor);
    }
return 0;
}
