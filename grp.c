#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include<sys/ipc.h>
#include <sys/sem.h>
#include <errno.h>
#define NB_TEMPS 3
#define NB_COUREURS 3


typedef struct voiture voiture;
struct voiture {
        int numero;
        int abandon;
        bool pitStop;
        unsigned int tpsSecteur[NB_TEMPS];
        unsigned int tpsTour;
};


int main(int argc, char*argv[]){
        int i;
        int j;
        int k;
        int l;
        pid_t pid;
        struct voiture course[NB_COUREURS];

int main(int argc, char*argv[]){
        int i;
        int j;
        int k;
        int l;
        pid_t pid;
        struct voiture course[NB_COUREURS];
        size_t size_k = sizeof(voiture);
        key_t key=9999 ; /* clé à passer a shmget*/
        int shmFlag; /*flag  à passer a shmget*/
        int shmid; /*l'id de la memoire partagée*/
        char * pmem; // pointeur vers la memoire partagée

        shmid = shmget (key, size_k*NB_COUREURS,IPC_CREAT|0666);// crée la mémoire partagée, la clé, sa taille, les permission

        if(shmid== -1){
                perror("shmget fail");
                exit(1);
        }


        srand(time(0));
        for(i = 0; i < NB_COUREURS; i++){
                pid = fork();
                pmem = shmat(shmid,0,0); // attache un segment aux processus courant
                if(pid == -1){
                        exit(EXIT_FAILURE);
                }
 				if(pid = 0){
                        printf("voiture num:%d", j);
                        voiture v;
                        for(j = 0; j < NB_TEMPS; j++){
                                v.abandon = (rand() % 10);

                                if(v.abandon % 10 != 0){
                                        v.tpsSecteur[j] =(rand() % 10);
                                }else{

                                        v.tpsSecteur[j] = 0;
                                }
                                //printf("Temps secteur: %u\n", v.tpsSecteur[i]);
                                v.tpsTour += v.tpsSecteur[i];
                                //printf("%u\n", v.tpsTour);

                  }


            }
 }


        for(k = 0; k < NB_COUREURS; k++){
        printf("Voiture : %d\n", k);
                for(l = 0; l < 3; l++){
                printf("Temps secteur : %d\n", l);
                }
        }

        shmdt(pmem); //détache le segment de la mémoire partagée

}//main



