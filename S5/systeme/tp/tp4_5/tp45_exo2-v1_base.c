/**-------------------------------------------------------------------------
  TP4 - Squelette code exercice 2-V1
  Compilation : gcc tp45_exo2-v1_base.c boucler.o -o tp45_exo2-v1 -Wall
--------------------------------------------------------------------------**/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "boucler.h"

/*------------------------------------------------------------------------
 Fonction d'affichage d'une erreur selon la cause de l'echec d'une primitive
 Arret du processus avec retour valant codeRetour
  ------------------------------------------------------------------------*/
void erreur (char *msg, int codeRetour) {
  perror(msg);
  exit(codeRetour);
}

/*------------------------------------------------------------------------
 Traitement associ� � SIGINT
  ------------------------------------------------------------------------*/
void traiterSIGINT (int sig) {

  /*   A compl�ter */	

  printf(">> Ctrl-C/SIGINT recu par %d\n", getpid());
}


/*------------------------------------------------------------------------
 Code execute par chaque processus fils 
  ------------------------------------------------------------------------*/
void fils (/* A compl�ter */) {
  /* A completer : appeler ind�finiment afficher() */

  exit(0);
}

/*------------------------------------------------------------------------*/
int main(int argc, char *argv[]) {

  // Se prot�ger contre Ctrl-C (SIGINT)
  /* A compl�ter */
  
  printf("Processus (pere) de pid %d : protege contre SIGINT\n", getpid());

  /* Cr�er son fils */
  switch (fork()) {
    case - 1 : erreur("Echec fork", 1);

    case 0 : fils();

    /* default : break; */		
  }
 
  printf("Processus (pere) de pid %d : j'ai cree un fils de pid %d\n",
	 /* A compl�ter */ );

  /* Attendre �ventuellement la fin de son fils */
  wait(NULL);

  return 0;
}
