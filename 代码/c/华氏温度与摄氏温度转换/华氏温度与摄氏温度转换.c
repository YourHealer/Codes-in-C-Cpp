#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c,f;
	int type;
	
	printf("The Transformation Between Temperatures.\n");
	printf("****************************************************\n");
	printf("\nFahrenheit degree To Celsius degree.   plz input 1\n");
	printf("Celsius degree To Fahrenheit degree.   plz input 2\n"); 
	
	  scanf("%d",&type);
	
	  if(type==1)
	  {
	  	printf("\nplz input the temperature.\n");
	  	scanf("%f",&f);
	  	c=(5.0/9)*(f-32);
	  	printf("The celsius degree is %.2f.\n",c);
	  }
	  
	  else if(type==2)
	       {
	  	    printf("\nplz input the temperature.\n");
	  	    scanf("%f",&c);
	  	    f=9.0*c/5+32;
	     	printf("The fahrenheit degree is %.2f.\n",f);
	       }
	  
	       else printf("Error!");
	       
	return 0;
}
