#include<stdio.h>
#include<math.h>


double arctanh1(double x,double d){//maclaurian series method
int i;
double err,step,ah;
step = d+1;//make sure d>step to start
ah=0;
i=0;
double val;
while(fabs(step)>=d){//while each step is bigger than d
	val=2*i+1;
	step=pow(x,val)/(val);
	ah=ah+step;
	i++;
}
return ah;//arctanh up to precision d
}

double arctanh2(double x){//logarithm method
double ah;
ah=(log(1+x)-log(1-x))/2;
return ah;
}

int main(void){
double d;
printf("enter a positive real number delta\n");
scanf("%lf",&d);
int length=1000;
double mac[length];//stores results from arctanh1
double ln[length];//stores results from arctanh2
double x=-0.9;
int i=0;//array index
while(x<=0.9 && i<length){//fill the arrays
	mac[i]=arctanh1(x,d);
	ln[i]=arctanh2(x);
	printf("the difference at x=%lf is %.10lf\n", x, fabs(mac[i]-ln[i]));
	x=x+.01;//step size
	i++;
}	




return 0;
}
