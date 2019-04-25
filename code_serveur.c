/*
* Code du serveur
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include <string.h>

/* Port local du serveur */
#define PORT 9600

int main(int argc, char *argv[])
{
    /*
     *VARIABLES DU SERVEUR
     *
     declarer ici les variables suivantes :
     -sockfd le descripteur de socket
     -structure de l'adresse locale du serveur
     -structure d'adresse du client
     - taille de l'adresse du client
     */

	int sockfd = socket(AF_UNIX, SOCK_DGRAM,0);
	struct localaddr
	{
		u_char sin_len;
		u_char sin_family;
		u_char sin_data[14];
	}
	
	struct sockaddr_in
	{
		short sin_family;
		u_short sin_port;
		struct in_addr sin_addr;
		char sin_zero[8];
	}
	
     /*
     CODE DU SERVEUR

     -ouvrir le socket du serveur
     remplir la structure d'adresse locale du serveur :
        la famille d'adresse
        l'adresse ip
        le port
    spécifier l'adresse locale du serveur (infinie)
    */

    /*boucle generale du serveur (infinie)
    */

    while(1){
    /*code de l'intérieur de la boucle*/
    }
    return 0;
}
