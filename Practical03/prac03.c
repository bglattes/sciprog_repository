#include <stdio.h>
#include <math.h>

int main(void){

int i,N;
float a,b,pi,res,x;
pi=3.1415;
a=0;
b=pi/3;
N=12;
res=0;
x=a;//set x0 to our starting point
for (i=1; i<N; i++){//summing all terms but the endpoints
	x=x+b/(float)N;//calculate xi
	res=res+2*tan(x);//add 2*f(xi) to the sum
}

res=res+tan(a)+tan(b);//add the endpoints
res=res*((b-a)/(2*(float)N));//term out front

printf("our approximation with %d steps is %f \n",N,res);
printf("log (2) is %f \n",log(2));


}
