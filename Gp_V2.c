#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
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
	struct voiture course[NB_COUREURS];	

	do{
		printf("Voiture :%d\n", j);
        	voiture v;
        	for(i = 0; i < NB_TEMPS; i++){
			//printf("Laps: %d\n", i);
        		v.abandon = randval();
			
	        	if(v.abandon % 10 != 0){
                       		v.tpsSecteur[i] = randval();
                        	v.tpsTour += v.tpsSecteur[i];                
                	}else{

                        	v.tpsSecteur[i] = 0;
			}
			printf("%u\n", v.tpsSecteur[i]);
       		}
		course[j] = v;
		j++;
		printf("%u\n", course[i].tpsTour);
	} while (j < NB_COUREURS);
}//main
