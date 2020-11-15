
#include "myMath.h"

#define E 2.71828 

double  Exponent(int x)
{
     double sum = 1;

     if(x<0){
         for(int i=0 ; i<-x ; i++){
              sum = sum*E;
         }
         sum = 1/sum;
     }
     else
     {
         for(int i=0 ; i<x ; i++){
              sum = sum*E;
         }
     }

     return sum;

}


double Power(double x , int y){

      double sum = 1;

      if(y<0)
      {
         for(int i=0 ; i<-y ; i++){
               sum = sum*x;
         }
         sum = 1/sum;
      }
      else
      {
         for(int i=0 ; i<y ; i++){
               sum = sum*x;
         }
      }

      return sum;

}
