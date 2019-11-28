#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int main(int argc, char *argv[]) {
	
	FILE *fp;
	char filepath[100];
	
	//file open
	printf("input the file path: ");
	scanf("%s", filepath);
	fp = fopen(filepath, "r");
	
	if (fp == NULL)
	{
		printf("file parh is wrong! %s\n", filepath);
		return -1;
	}
	fclose(fp);
	
	//word reading & analysis
	
	//output
	
	
	return 0;
}
