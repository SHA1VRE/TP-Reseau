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
    d�clarer ici les variables suivantes :
    sockfd le descripteur de socket
    structure d'adresse du serveur
    pointeur vers la structure descriptive de la machine (hostent)
    zone de m�moire destin�e � accueillir la chaine entr�e au clavier
    taille de la chaine � envoyer
    */
	int sockfd = socket(AF_UNIX, SOCK_DGRAM,0);
	struct 

    /* code du client
        ouvrir le socket du client
        r�cuperer l'adresse ip du serveur � partir de son nom donn� en ligne de commande
        remplir la structure d'adresse du serveur
        lire une ligne de l'entr�e standard
        envoyer la chane lue au serveur
        */
        	
		char buffer[20] = argv[2];
		

        return 0;
}
