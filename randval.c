#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "randval.h"

unsigned int randval(){
	unsigned int randval;
	FILE *f;
	
	do 
	{
		f=fopen("/dev/random", "r");		
		fread(&randval, 2.5, 1, f);
		fclose(f);
	} while (randval < 40000 || randval > 60000);

	//printf("%u\n", randval);
	return randval;	
}
