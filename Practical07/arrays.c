#include<stdio.h>
#include<stdlib.h>

int *allocate(int n){//make an array to store  n integers
int *p;
p=(int *) malloc(n*sizeof(int));
if (p==NULL){
	printf("error in allocating memory\n");}
return p;
}

void fillones(int *array, int n){//set every element to 1
int i;
for (i=0;i<n;i++){
	array[i]=1;}
}

void print(int *array, int n){//print out each element
int i;
for (i=0; i<n; i++){
printf("%d\n", array[i]);}
}

void freearray(int *array){//free the array
free(array);
}

int main(void){
int size,*a;

printf("enter the size of the array\n");
scanf("%d", &size);

a=allocate(size);
fillones(a,size);
print(a,size);
freearray(a);

return 0;
}


