#include <stdio.h>

int main()

{
   int a;
   printf("data di nascita:");
   scanf("%d", &a);
    int b = 1969;
    if(a == b)
    {
        printf("é nato nello stesso anno");
    }
   else if(a>b)
   {
    printf("è nato %d annni dopo", a-b );
   }
   else 
   {
    printf("é nato %d anni prima", b-a);
   }
}