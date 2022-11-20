#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100


int get_lines(char filename[MAX_FILE_NAME]){
	FILE *fp;
	fp = fopen(filename, "r");
	char ch_read;
	int count=0;
	while((ch_read = fgetc(fp))!=EOF){
		if(ch_read == '\n'){//count the new lines, size of matrix
			count=count+1;
		}
	}	
	printf("Number of lines is: %d\n", count);
	fclose(fp);
	return count;
}
int main(void){

FILE *f;
char filename[MAX_FILE_NAME];
printf("Enter file name\n");
scanf("%s", filename);

int n=get_lines(filename);
f=fopen(filename, "r");

int i, **magicsquare=malloc(n*sizeof(int *));

for(i=0;i<n;i++){
	magicsquare[i]=malloc(n*sizeof(int));//each row is an array
}
int j;
for(i=0;i<n;i++){//put numbers into array
	for (j=0;j<n;j++){
	fscanf(f,"%d", &magicsquare[i][j]);
	}
}
int flag=ismagic(magicsquare,n);
if (flag=1){//print result
	printf("this is a magic square\n");
	}else{
	printf("this is not a magic square\n");
}

for(i=0;i<n;i++){//free the arrays
	free(magicsquare[i]);
}
free(magicsquare);
fclose(f);

return 0;
}


