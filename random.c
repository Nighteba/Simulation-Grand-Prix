#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv){
	unsigned int randval;
	FILE *f;
	
	while(randval < 40000 || randval > 60000){
		f=fopen("/dev/random", "r");
		fread(&randval, 2, 1, f);
		fclose(f);
	};
	printf("%u\n", randval);

	return 0;
	
}
