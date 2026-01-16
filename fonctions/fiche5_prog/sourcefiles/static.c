#include<stdio.h>
int incremente();
int main(int argc, char *argv[])
{
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente() + 10);
    printf("%d\n", incremente());
    return 0;
}
int incremente()
{
    static int nombre = 0;
    nombre++;
    return nombre;
}
// Une variable déclarée dans une fonction est supprimée à la fin de la fonction, elle n'est accessible que dans cette fonction.
//  Une variable déclarée dans une fonction avec static devant n'est pas supprimée à la fin de la fonction, elle conserve sa valeur au fur et à mesure de l'exécution du programme.