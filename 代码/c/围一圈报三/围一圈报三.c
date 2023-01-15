#include <stdio.h>
#include <stdlib.h>
#define capacity 50                 /*通过改变capacity的值确定不同的游戏人数对应的不同结果*/

void who_is_winner(int *pointer);

int main() 
{
	int people[capacity];

    who_is_winner(people); 
	
	return 0;
}

void who_is_winner(int *pointer)
{
	
	int index;
	int flag=0;
	int counter=capacity;
	
	for(index=0;index<capacity;index++)
	{
		*(pointer+index)=1;                 /*所有人赋值为1，代表还在圈里，是非隐身人。*/ 
	}
	
	for(index=0;;index++)
	{
		if(index==capacity)
		{
			index=0;
		}
		
		    if(*(pointer+index)==1)
		    {
			    flag++;
		    }
		    else continue;
		
		        if(flag%3==0)
		        {
			        *(pointer+index)=0;
			        counter--;
		        }
		
		if(counter==1) break;

	}
	
	for(index=0;index<capacity;index++)
	{
		if(*(pointer+index)==1)
		{
			printf("最后留下来的是%d",index+1);
		}
	}
}
