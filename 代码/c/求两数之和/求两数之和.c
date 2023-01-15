#include <stdio.h>
#include <stdlib.h>

float get_sum(float fp_1,float fp_2)
{
	float sum;
	sum=fp_1+fp_2;
	return(sum);
 } 

int main()
{
	float num_1,num_2;
	float result;
	printf("plz input two numbers!\n");
	scanf("%f%f",&num_1,&num_2);
	result=get_sum(num_1,num_2);
	printf("the result is %f\n",result);
	return 0;
}
