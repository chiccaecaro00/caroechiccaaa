#include <stdio.h>

int main ()
{
    
    int a;
    int b;

    printf("inserisci due numeri\n");

    printf("a è multiplo di b?\n");
    scanf("%d %d", &a,&b);

    if(a%b == 0)

    {
    printf ("a multiplo di b\n");
    }

    else
    {
        printf("a non multiplo di b\n");
    }

}



