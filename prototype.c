#include <stdio.h>//déclaration des bibliothèques
#include <stdlib.h>
#include <time.h>
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

//fonction random
int randoms(int min, int max){

        srand(time(NULL));
        int r = (rand()%(max - min))+ min;
        return r;
}

struct voiture {
        int numero;
        int abandon;
        unsigned int tpsSecteur[NB_TEMPS];
        unsigned int tpsTour;
};

void swap(voiture * pv1, voiture * pv2) {
        voiture vTampon;
        vTampon = * pv1;
        *pv1 = *pv2;
        *pv2 = vTampon;

}

int comp (const void *p1, const void *p2)  {

        const voiture *pv1 = p1;
        const voiture *pv2 = p2;
        //return tps1 - tps2;
        return (pv1->tpsTour  - pv2->tpsTour);
}
