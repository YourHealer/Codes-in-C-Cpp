#include <stdio.h>
#include <stdlib.h>
#define people 2
#define subject 3
int score[people][subject];

int main() 
{
	int average_student(int mark);
	int average_subject(int mark);
	void find_max(int array[people][subject]);
	int add();
	int square_add();
	int variance();
	
	int i,j;
	for(i=0;i<people;i++)
	{
		for(j=0;j<subject;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
	
/*计算每个学生的平均分*/
    for(i=0;i<people;i++)
	{
		printf("第%d个学生的成绩为：%d。\n",i+1,average_student(i));
    }	
    
/*计算每个学科的平均分*/
    for(i=0;i<subject;i++)
	{
	    printf("第%d个学科的成绩为：%d。\n",i+1,average_subject(i));
	} 
    
/*找最高分*/
    find_max(score); 
    
/*求平均分方差*/
    printf("平均分方差为：%d。\n",variance());

	return 0;
}



/*求每个学生的平均分*/
int average_student(int mark) 
{
	int sum=0;
	int i; 
	for(i=0;i<subject;i++)
	{
		sum=sum+score[mark][i];
	}
	int aver;
	aver=sum/subject;
	
	return(aver);
}

/*求每个学科的平均分*/
int average_subject(int mark)
{
	int sum=0;
	int i; 
	for(i=0;i<people;i++)
	{
		sum=sum+score[i][mark];
	}
	int aver;
	aver=sum/people;
	
	return(aver);
}

/*找最高分对应关系*/
void find_max(int array[people][subject])
{
	int i=0;
	int j=0;
	int mark_i=0;
	int mark_j=0;
	int max=array[i][j];
	
	for(i=0;i<people;i++)
	{
		for(j=0;j<subject;j++)
		{
			if(array[i][j]>max)
			{
				mark_i=i;
				mark_j=j;
			}
		}
	}
	
	printf("最高分是第%d个同学的第%d门课。\n",mark_i+1,mark_j+1);
}

/*求学生平均分总和*/
int add()
{
	int sum=0;
	int i;
	for(i=0;i<people;i++)
	{
		sum=sum+average_student(i);
    }	
	return(sum);
} 


/*求总平方和*/
int square_add()
{
	
	int sum=0;
	int i;
	for(i=0;i<people;i++)
	{
		sum=sum+average_student(i)*average_student(i);
    }	
	return(sum);
}

/*求平均分方差*/
int variance()
{
	int sigma;
	sigma=square_add()/people-(add()/people)*(add()/people);
	
	return(sigma);
 } 
 
