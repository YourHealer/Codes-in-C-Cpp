#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("对于方程ax^2+bx+c=0,请输入a，b，c的参数值,。\n"); 
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a==0) 
	{
		if(b==0) 
		{
			if(c==0) printf("any num is its root.\n");
			else printf("no root.\n");
		}
		else 
		{
		float root;
		root=-1.0*c/b;	
		printf("x=%.2f\n",root);	
		}
	}
	else
	{
		float key1,key2,root1,root2;
		float judge;
		judge=b*b-4*a*c; 
		    if(judge<0)
		    {
			key1=-b/(2.0*a);
		    key2=sqrt(-judge)/(2.0*a);
			printf("root1=%.2f+%.2fi,root2=%.2f-%.2fi\n",key1,key2,key1,key2);
		    }
		         if(judge>0)
		         {
		    	 key1=-b/(2.0*a);
		         key2=sqrt(judge)/(2.0*a);
		         root1=key1+key2; root2=key1-key2;
		         printf("x1=%.2f,x2=%.2f\n",root1,root2);
			     }
			     if(judge==0)
			     {
			     key1=-b/(2.0*a);
			     printf("x1=x2=%.2f\n",key1);	
				 }
	
	}
	return 0;
}
