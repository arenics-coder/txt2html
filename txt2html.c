#include <stdio.h>
#include <stdlib.h>
#include "txt2html.h"


void usage(void)
{
	printf("usage:\ntxt2html <inputfile.txt> <outputfile.html>\n");
	return;
}

int main(int argc, char *argv[])
{
	char vect[10]={0};
	FILE *txtfile, *htmlfile;

	if(argc != 3){
		usage();
		exit(1);
	}


	txtfile = fopen(argv[1], "r");
	if(!txtfile) {
		printf("fail to open %s file, exiting...\n", argv[1]);
		exit(1);
	}
	
	htmlfile = fopen(argv[2], "w");
	if(!htmlfile){
		printf("fail to open/create %s file, exiting...\n", argv[2]);
		exit(1);
	}

	fwrite((const void*)html_template, sizeof(char), sizeof(html_template)/sizeof(char), htmlfile);

	fclose(txtfile); fclose(htmlfile);

	printf("\n%d\n", sizeof(vect));
	return 0;
}

