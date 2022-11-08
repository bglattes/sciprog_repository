#include<stdio.h>

int iteration(int a, int b){
int x;

while(b!=0){
	x=b;
	b=a%b;
	a=x;
	}
return a;
}

int recursion(int a, int b){

if(b==0){return a;}
	else{return recursion(b,a%b);}
}

int main(void){

int a,b,i,r;

printf("enter positive integers for a and b, with a>=b\n");
scanf("%d %d", &a, &b);

if(a<0 || b<0){
	printf("a or b not positive\n");
	return 0;}

i=iteration(a,b);
r=recursion(a,b);

printf("the iterative GCD(a,b)=%d\n", i);
printf("the recursive GCD(a,b)=%d\n", r);


return 0;
}
