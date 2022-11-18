#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "gpiofuncties.h"


int exportt(int nr){
   FILE *fp;
   char tekst[10];
 
    fp=fopen("/sys/class/gpio/export","w");
    if (fp==0)
       return 0;
    sprintf(tekst,"%d",nr);
	fprintf(fp,"%s",tekst);
    fclose(fp);

	return 1;
}

int digitalWrite(int nr,int v) {
	FILE *fp;
	char gpionr[50]="/sys/class/gpio/gpio";
	char tekst[10];
	sprintf(tekst,"%d",nr);
	strcat(gpionr,tekst);
	strcat(gpionr,"/value");
	fp=fopen(gpionr,"w");
    if (fp==0)
       return -399;
	fprintf(fp,"%d",v);
    fclose(fp);
	return 0;
}

int digitalRead(int nr) {
	FILE *fp;
    int v;
	char gpionr[50]="/sys/class/gpio/gpio";
	char tekst[10];
	sprintf(tekst,"%d",nr);
	strcat(gpionr,tekst);
	strcat(gpionr,"/value");
	fp=fopen(gpionr,"w");
    if (fp==0)
       return -399;
	fscanf(fp,"%d",&v);
    fclose(fp);
	return v;
}


int pinMode(unsigned pinNr,unsigned OUTPUT) {
	FILE *fp;
    char tekst[10];
	char gpionr[50]="/sys/class/gpio/gpio";

    int rt=exportt(pinNr);
	if(!rt)
	     return -99;
    usleep(100000);  
	
    sprintf(tekst,"%d",pinNr);
    strcat(gpionr,tekst);
    strcat(gpionr,"/direction");
    fp=fopen(gpionr,"w+");
    if (fp==0)
       return -99;
    rt=fprintf(fp,"out");
     if (rt<0)
       return rt-200;
    fclose(fp);
    return 1;
}

