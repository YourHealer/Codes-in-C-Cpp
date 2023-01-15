#include <stdio.h>
#include <stdlib.h>
#define value 5

int main() 
{
	int matrix[value][value];
	int array[(value*value)];
	int index,jacket,k=0;
	
	printf("请输入元素！\n");
	
	for(index=0;index<value;index++)
	{
		for(jacket=0;jacket<value;jacket++)
		{
			scanf("%d",(*(matrix+index)+jacket));             /*要找第k 大的数，思路是要对所有数进行从大到小或从小到大的顺序排序，
			                                                   然后需要哪个就调用数组里哪个数*/ 
		}
	 } 
	 
	for(index=0;index<value;index++)
	{
		for(jacket=0;jacket<value;jacket++)
		{        
		array[k]=*(*(matrix+index)+jacket);
		k++; 
	    }
	}

	for(index=0;index<(value*value)-1;index++)
	{
		for(jacket=0;jacket<(value*value)-index-1;jacket++)
		{        
            int temp;
            if(array[jacket]>array[jacket+1])
            {
            	temp=array[jacket+1];
            	array[jacket+1]=array[jacket];
            	array[jacket]=temp;
			}
	    }
	}
	
	matrix[(value-1)/2][(value-1)/2]=array[(value*value)-1];
	matrix[0][0]=array[0];
	matrix[0][value-1]=array[1];
	matrix[value-1][0]=array[2];
	matrix[value-1][value-1]=array[3];
	
		for(index=0;index<value;index++)
	{
		for(jacket=0;jacket<value;jacket++)
		{
			printf("%3d",*(*(matrix+index)+jacket));             
		}
		printf("\n");
	 } 
	return 0;
}
