/*code client*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>

#define SIZE    100
#define PORT    9600

int main(int argc, char *argv[])
{
    /* variables du client
    déclarer ici les variables suivantes :
    sockfd le descripteur de socket
    structure d'adresse du serveur
    pointeur vers la structure descriptive de la machine (hostent)
    zone de mémoire destinée à accueillir la chaine entrée au clavier
    taille de la chaine à envoyer
    */
	int sockfd = socket(AF_UNIX, SOCK_DGRAM,0);
	struct 

    /* code du client
        ouvrir le socket du client
        récuperer l'adresse ip du serveur à partir de son nom donné en ligne de commande
        remplir la structure d'adresse du serveur
        lire une ligne de l'entrée standard
        envoyer la chane lue au serveur
        */
        	
		char buffer[20] = argv[2];
		

        return 0;
}
