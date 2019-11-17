#include<stdio.h>
#include  "myMath.h"

int main(){

printf("please insert a real number:");
double x;
scanf("%lf",&x);
double y = sub(add(Exp((int)x),Pow(x,3)),2);
printf("the value of f(x) = e^x+x^3-2 at the point %0.4lf is: %0.4lf \n",x,y );
double z = add(mul(3.0,x), mul(2.0,Pow(x,2)));
printf("the value of f(x) = 3x+2x^2 at the point %0.4lf is: %0.4lf \n",x,z);
double w = sub(div(mul(4.0,Pow(x,3)),5),mul(2.0,x));
printf("the value of f(x) = (4x^3)/5-2x at the point %0.4lf is: %0.4lf \n",x,w);


return 0;
}
