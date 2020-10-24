#include <stdio.h>
#include<string.h>

int main ()
{
    char n1[15],n2[15],n3[15];
    gets (n1);
    gets (n2);
    gets (n3);
    if (strcmp (n1,"vertebrado")==0)
    {
        if (strcmp (n2, "ave")==0)
        {
            if (strcmp (n3, "carnivoro")==0)
            {
                printf ("aguia\n");
            }
            else
            {
                printf ("pomba\n");
            }
        }
    }
    if (strcmp (n1, "vertebrado")==0)
    {
        if (strcmp (n2, "mamifero")==0)
        {
            if (strcmp (n3, "onivoro")==0)
            {
                printf ("homem\n");
            }
            else
            {
                printf ("vaca\n");
            }
        }
    }

    if (strcmp (n1, "invertebrado")==0)
    {
        if (strcmp (n2, "inseto")==0)
        {
            if (strcmp (n3, "hematofago")==0)
            {
                printf ("pulga\n");
            }
           else
            {
                printf ("lagarta\n");
            }
        }
    }
    if (strcmp (n1, "invertebrado")==0)
    {
        if (strcmp (n2, "anelideo")==0)
        {
            if (strcmp (n3, "hematofago")==0)
            {
                printf ("sanguessuga\n");
            }
            else
            {
                printf ("minhoca\n");
            }
        }
    }
    return 0;
}
