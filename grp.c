#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <errno.h>
#include "proto.h"
#define NB_TEMPS 3
#define NB_COUREURS 22

int main(int argc, char*argv[]){
        int i, j;       // variables d'iterations dans les boucles
        int min = 40000;
        int max = 60000;
        pid_t pid;
        voiture course[NB_COUREURS];
        course[0].numero = 44;
        course[1].numero = 6;
        course[2].numero = 5;
        course[3].numero = 7;
        course[4].numero = 3;
        course[5].numero = 33;
        course[6].numero = 19;
        course[7].numero = 77;
        course[8].numero = 11;
        course[9].numero = 27;
        course[10].numero = 26;
        course[11].numero = 55;
        course[12].numero = 14;
        course[13].numero = 22;
        course[14].numero = 9;
		course[15].numero = 12;
        course[16].numero = 20;
        course[17].numero = 30;
        course[18].numero = 8;
        course[19].numero = 21;
        course[20].numero = 31;
        course[21].numero = 94;

		size_t size_k = sizeof(voiture);
        key_t key=8888 ; /* clé à passer a shmget*/
        int shmFlag; /*flag  à passer a shmget*/
        int shmid; /*l'id de la memoire partagée*/
        voiture *pmem; // pointeur vers la memoire partagée

        shmid = shmget (key, size_k*NB_COUREURS,IPC_CREAT|0666);// crée la mémoire partagée, la clé, sa taille, les permission
        pmem = shmat(shmid, NULL, 0);

        if(shmid== -1){
                perror("shmget fail");
                exit(1);
        }

        for(i = 0; i < NB_COUREURS; i++){
                pid = fork();

                if(pid == -1){
                        exit(EXIT_FAILURE);
                }
                if(pid == 0){
                        //printf("voiture num:%d", j);
                        voiture v;
                        for(j = 0; j < NB_TEMPS; j++){
                                v.abandon = randoms(1, 10);
                                if(v.abandon != 5 ){
                                        v.tpsSecteur[j] = randoms(40000, 60000);
                                }else{

                                        v.tpsSecteur[j] = 0;
                                        return 0;
                                }
								 //printf("Temps secteur: %u\n", v.tpsSecteur[i]);
                                v.tpsTour += v.tpsSecteur[j];
                                //printf("%u\n", v.tpsTour);
                        }

                 shmdt(pmem); //détache le segment de la mémoire partagée                       
                }//fin code du fils

        return 0;
        }//fin du for  de temps Secteur

}//fin de la main               
        



