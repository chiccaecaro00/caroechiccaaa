#include <stdio.h>

int main ()
{

int a;


printf ("l'utente è maggiorenne?\n");
scanf ("%d", &a);


if (a >= 18)
{
    printf("a è maggiore di 18\n");
}
else 
{
    printf("a è minore di 18\n");
}


}