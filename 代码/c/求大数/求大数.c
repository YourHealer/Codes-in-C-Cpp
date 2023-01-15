#include <stdio.h>
#include <stdlib.h>

	int find_bigger(int x,int y)
	{
	int max;
	max=(x>y?x:y);
	return(max);	
	} 
	
int main()
{
    int num_1,num_2;
	printf("plz input two numbers that you want to use.\n");
	scanf("%d%d",&num_1,&num_2);
	int max;
	max=find_bigger(num_1,num_2);
	printf("Oops£¡The bigger one is %d.\n",max);
	return 0;
}
