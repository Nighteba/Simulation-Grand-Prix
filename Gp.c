#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include "randval.h"
#define NB_TEMPS 3
#define NB_COUREURS 24

typedef struct voiture voiture;
struct voiture {
        int numero;
        int abandon;
        bool pitStop;
        unsigned int tpsSecteur[NB_TEMPS];
	unsigned int tpsTour;
};



int main(){
	int i;
	int j;
	int k;
	int l;
	pid_t pid;
	struct voiture course[NB_COUREURS];	

	for(i = 0; i < NB_COUREURS; i++){
		pid = fork();
		if(pid == -1){
			exit(EXIT_FAILURE);
		}
		if(pid = 0){
			//printf("Voiture :%d\n", j);
        		voiture v;
        		for(j = 0; j < NB_TEMPS; j++){
        			v.abandon = randval();
			
	        		if(v.abandon % 10 != 0){
                	       		v.tpsSecteur[i] = randval();                
                		}else{

                        		v.tpsSecteur[i] = 0;
				}
				//printf("Temps secteur: %u\n", v.tpsSecteur[i]);
				v.tpsTour += v.tpsSecteur[i];
				//printf("%u\n", v.tpsTour);
       			}
			course[j] = v;
			j++;
		}
	}

	for(k = 0; k < NB_COUREURS; k++){
	printf("Voiture : %d\n", k);
		for(l = 0; l < 3; l++){
		printf("Temps secteur : %d\n", l);
		}
	}
}//main
