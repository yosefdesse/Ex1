#include "myMath.h"


int main(){

double x;

printf("Please insert a real number : ");
scanf("%lf", &x);

printf("f(x) = e^x + x^3 - 2 at point %.6g is : %0.4lf \n",x,Exponent(x)+Power(x,3)-2);

printf("f(x) = 3x + 2x^2 at point %.6g is : %0.4lf \n",x,mul(x,3)+2*Power(x,2));

printf("f(x) = (4x^3)/5 - 2x at point %.6g is : %0.4lf \n",x,div(4*Power(x,3),5)-mul(x,2));


return 0;

}
