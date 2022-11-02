#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int factorial(int n){
int res,i;
if(n<0){//no negative values
	printf("error, negative value");
	return (-1);
	} else if(n==0){//hard code in 0! =1
		return 1;
	} else{
		return (n*factorial(n-1));//recursively apply factorial
	}}



int main(void){
int order, i;
double e, *terms;

printf("enter the order of the polynomial\n");
scanf("%d",&order);

terms=malloc(order*sizeof(double));//allocate array with correct size

for(i=0; i<order; i++){//fill the array
	terms[i]=1.0/(double)factorial(i+1);
}

e=1.0;//start the sum result at 1
for (i=0;i<order;i++){//sum up to order requested
	e=e+terms[i];
}

free(terms);//free the array now that we have the sum
printf("e is estimated as %1.10lf with difference %1.10lf \n", e, e-exp(1)); 
return 0;
}
