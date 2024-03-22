
#include <stdio.h>

float main ()
{
    float n1, n2, n3, media;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &n1);
    
    printf("Informe o segundo número: ");
    scanf("%f", &n2);
    
    printf("Informe o terceiro número: ");
    scanf("%f", &n3);
    
    media= (n1 + n2 + n3) / 3;
    printf("A média obtida com as três notas é: %f", media);
    
    return 0;
}
