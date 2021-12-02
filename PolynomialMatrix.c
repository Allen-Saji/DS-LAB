#include<stdio.h>
#include<math.h>

	struct poly{
	int coeff;
	int exp;
	};
	
	struct poly a[10];  //Declaration of polynomial

int main(){

	int deg; //degree of the polynomial
	
	
	printf("Enter the highest degree of polynomial: ");
	scanf("%d" , &deg);
	
	int k=0;
	
	for(int i=0;i<=deg;i++)
   {   
       printf("\nEnter the coeff of x^%d :",i);  //entering values in coefficient of the polynomial terms
       scanf("%d",&a[i].coeff);
       a[k++].exp = i;
   }
   
   //printing the polynomial
   printf("\nExpression: %d",a[0].coeff);
   for(int i=1;i<=deg;i++)
   {
       printf("+ %dx^%d",a[i].coeff,a[i].exp);
   }     
   
   
   return 0;
}




