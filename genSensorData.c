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
#include <stdio.h>
#include <string.h>

char GreatBuffer [100];
char ErrorBuffer [100];
char c;
char b;

/*
Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher Bonjour à l'écran.
*/
int main(int argc, char* argv[])
{
    printf("Bienvenue jeune padawan\n"); // Cette instruction affiche Bonjour à l'écran

    // printf("nb = %d\n", argc);
    // for(int i = 0 ; i < argc; i++){
    //     printf("%s \n", argv[i]);
    // }
    
    while (read(0, &c, 1) == 1)
    {
        //write(1, &c, 1);
        //write(1, &"j", 1);

        // Name of sensors
        char* sensorNames[]=
        {
          "Temperature",
          "Luminosite",
          "Son"
        };

        // Name of errors 
        char* errorCodes[]={
          "Erreur 1",
          "Erreur 2",
          "Erreur 3"
        };

        int sensorId = rand()%(1000);
        char* sensorName = sensorNames[rand()%(3)];
        int minValue = rand()%(100 +1);
        int value = minValue + rand() %(100 +1);
        int meanValue = value + rand() %(100 + 1);
        int maxValue = meanValue + rand() %(100 + 1);
        char* errorCode = errorCodes[rand()%(3)];
        char errorDetail[] = "Une erreur est survenue !\n";

        // Value ascii 79 = O / 10 = Line feed \n 
        // %s for string and %d for decimal
        if (c==79 && b==10){
            sprintf(GreatBuffer , "\n %d, %s, %d, %d, %d,%d \n", sensorId, sensorName,value, minValue, meanValue, maxValue );
            write(1,GreatBuffer,strlen(GreatBuffer));
        }
        // 69 = E
        else if(c==69 && b==10){
            sprintf(ErrorBuffer, "\n %d, %s, %s \n",sensorId, errorCode, errorDetail);
            write(2,ErrorBuffer,strlen(ErrorBuffer));
        }
        b = c;
    }
  // force l'affichage (vide le buffer), les caractères sont mit en mémoire
  fflush(stdout);
  return 0; // program return 0 and end 
}