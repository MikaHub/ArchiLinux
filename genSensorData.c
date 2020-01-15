/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher Bonjour à l'écran.
*/
int main(int argc, char* argv[])
{
    printf("Bienvenue jeune padawan\n"); // Cette instruction affiche Bonjour à l'écran
    // printf("nb = %d\n", argc);
    char c; /* le caractere */
    // for(int i = 0 ; i < argc; i++){
    //     printf("%s \n", argv[i]);
    // }
    while (read(0, &c, 1) == 1)
    {

        write(1, &c, 1);
    }
    
    /*printf("Veuillez taper un caractere : ");
    c = getc(stdin);

    printf("Vous avez tape  : ");
    putc(c, stdout) ;
    printf("\n");*/

  return 0;          // Le programme renvoie le nombre 0 puis s'arrête
}