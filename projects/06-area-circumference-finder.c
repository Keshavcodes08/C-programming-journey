#include<stdio.h>
int main()
{
	float l,b,r;
	float area, perimeter, circumference , area2;
	printf("Enter the Length of rectangle: ");
	scanf("%f",&l);
	printf("Enter the breadth of rectangle: ");
	scanf("%f",&b);
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	area= l * b;
	perimeter = 2*(l+b);
	area2= (r*r)*22/7;
	circumference=(r*2)*22/7;
	printf("area of rect:%f\n",area);
	printf("perimeter of rect:%f\n", perimeter);
	printf("area of circle:%f\n",area2);
	printf("circumference of circle:%f \n",circumference);
	return 0;
}
	
	
	