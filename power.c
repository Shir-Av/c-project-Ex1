#include<stdio.h>
#include "myMath.h"

double Exp(int x){
	return Pow(2.718,x);
}
double Pow(double x, int y){
	double num = 1;
	for (int i = 0; i < y; i++){
		num *= x;
	}
	return num;
}
