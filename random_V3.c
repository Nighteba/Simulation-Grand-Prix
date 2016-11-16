#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv){
	unsigned int randval;
	FILE *f;
	
	do 
	{
		f=fopen("/dev/random", "r");		
		fread(&randval, 2.5, 1, f);
		fclose(f);
	} while (randval < 40000 || randval > 60000);

	printf("%u\n", randval);
	return 0;	
}
