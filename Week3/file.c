#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char x[30];
	FILE *readfile;

	readfile = fopen("readfile.txt","w+");
	if (!readfile){
		perror("OOOPs. File could not be opened:");
		exit(1);
	}	

	fprintf(readfile,"%s","my love is strong");

	\
		fclose(readfile);
	readfile = fopen("readfile.txt", "r+");
	while(fgets(x,29,readfile)!= NULL){
		printf("%s \n",x);
	}
	fclose(readfile);
	return 0;
}
