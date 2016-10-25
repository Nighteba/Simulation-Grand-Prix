#include "rand.h"		//Génération de nombres aléatoires
#include <vector>
#include <stdio.h>
#include <std.lib>
#include <stdbool.h>	//Librairie des booléens
#include <time.h>		//Simule les temps des coureurs

#define RAND_MAX 




//	int listeCoureurs[22] = {44, 6, 5, 7, 3, 33, 19, 77, 11, 27, 26, 55, 14, 22, 9, 12, 20, 30, 8, 21, 31, 94};
	struct voiture
	{
		int numero;
		bool abandon;		// abandon ou panne de voiture
		bool pitStop;
		int tempsEssais[3];
		int meilleurTemps;
		//long tempsCourseQualifs[9];
	};
	
	int maxTempsMillis = 60000;	// temps maximal de course
	int minTempsMillis = 40000;	// temps minimal de course
	
//	double tempsParCoureur[22];
 
 //OU double coureurs[3][22];
int randTemps(int a, int b)
{
	return rand()%(b-a) + a;
}

int tempsTotal(struct car)
{
	int totalTime;		//temps total du coureur
	for(int i = 0; i < sizeof(car.tempsEssais); i++)
	{
		totalTime += tempsEssais[i];
	}
	return totalTime;
}

 int genereRandTemps(int coureur)
 {
	unsigned int randval;
	FILE *f;
	
	f=fopen("/dev/random", "r");
	fread(&randval, sizeof(randval), 1, f);
	fclose(f);
	for(int i=0; i < sizeof(tempsEssais) - 1;i++)
	{
		if(tempsEssais[i] != null)
		{
			tempsEssais[i] = randval % 2;
		}
	}
	
	
 }
 void roule()
{
	//générer des temps, pits stops, abandons aléatoirement avec random
	
	
}


void setTemps(int[], int indice)
{
	//Randomiser le temps du coureur entre le record mondial courant en tant que RAND_MAX 
	// & la pire valeur possible, placer le temps dans une case du tableau
					int tempsTour = randTemps();
				tempsCourseEssais[indice] = tempsTour;
	
}


void remplaceTemps(double tempsPrecedent, double nouveauTemps)
{
	if(tempsPrecedent > nouveauTemps)
	{
		tempsPrecedent = nouveauTemps;
	}
	
}

void eliminationCoureurs(char)
{
	
}

	/*A realiser dans un fichier different, juste pour l'affichage*/
void afficheVoiture(struct voiture)
{
	//affiche les resultats d'une voiture donnée
	printf("numero");
	for(int i= 0; i < tempsEssais.length && tempsEssai[i] != null; )
	{
		printf(tempsEssais[i]);
	}
	
}

	
void affichePalmares()
{
	double nouveauTableau[sizeof()];
}

int main(int argc,char **argv)
{
	srand(time(NULL));
	
	//Vendredi matin : essai libre 1 "heure" 30 (P1)
	
			//Relevé temps S1
			
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
				
				
				
			//Relevé temps S2
			
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
			
				
			//Relevé temps S3
			
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
	
	//Vendredi aprèm : essai libre 1 "heure" 30  (P2)
	
			//Relevé temps S1
				
				
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
			
			//Relevé temps S2
			
				
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
			
			//Relevé temps S3
			
				
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
				
	//Samedi matin : essai libre 1 "heure" 30 (P3)
			
			//Relevé temps S1
			
			
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
			
			//Relevé temps S2
			
				
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
			
			//Relevé temps S3
			
			
			if(abandon)
			{
				
			}
			else
			{
				
				//random(temps)
				//Inserer le random dans le tableau via setTemps
			}
			
	//Samedi aprèm
	
			//Q1, durée : 18 minutes, six joueurs en moins à la fin (retrait des éléments 17 à 22)
			
			//Q2, durée : 15 minutes, six joueurs en moins à la fin (retrait des éléments 16 à 11)
			
			//Q3, durée : 12 minutes, classement des joueurs pour décider de leur place à la dernière course
			
	//Dimanche après-midi : dernière course & classement final	avec tous les coureurs dans l'ordre défini par les séances libres.
	
	
	
}


}
