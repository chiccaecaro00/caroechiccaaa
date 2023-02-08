#include <stdio.h>

int main ()
{
    int a;

    printf("stabilire se l'anno è bisestile o meno");
    scanf("%d", &a);

    if((a%4 ==  0 && a%100 != 0) || a%400 == 0)
    
    {
      printf("l'anno è bisestile");

    }

    else
    {
      printf("l'anno non è bisestile");
    }
} 