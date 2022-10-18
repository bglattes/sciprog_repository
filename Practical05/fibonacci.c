#include <stdio.h>
#include <stdlib.h>

//input argument: f_(n-1) and f_(n-2)
void fib(int *a,int *b);

int main(void){

int n,i;
int f1=1,f0=0;//starting terms

printf("enter a positive integer for n\n");
scanf("%d",&n);

printf("the fibonacci sequence is:\n %d, %d,", f0,f1);//first two terms

for(i=2;i<=n;i++){//calculate and print the 3rd through nth number
	fib(&f1,&f0);//current value of f1 and f0
	printf("%d,",f1);

}
printf("\n");
return 0;
}

void fib(int *a,int *b){
int fn;
fn=*a+*b;
*b=*a;//update f0
*a=fn;//update f1
}



















