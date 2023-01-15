#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	//定义读取变量 
	unsigned char read1,read2,read3;
	unsigned char output1,output2,output3;
	//定义结果变量
	int result; 
	
	//储存出现次数 
	int array[65536];
	
	//定义标志变量，检测整篇文章是否有重复
	int flag=0; 
	
	//定义循环变量
	int i; 
	
int main()
{
	memset(array,0,sizeof(array));
	
	//进行输入及存储工作 
	while(~(scanf("%c",&read1)))
	{
		//ascii码 
		if(read1<128) 
		{
			;
		}
		
		//汉字由两个字节编码 
		if((read1>=192)&&(read1<224))
		{
			read2=getchar();
			result=((read1&31)<<6)+(read2&63);
			array[result]=array[result]+1; 
			
		}
		
		//汉字由三个字节编码 
		if((read1>=224)&&(read1<240))
		{
			read2=getchar();
			read3=getchar();
			result=((read1&15)<<12)+((read2&63)<<6)+(read3&63);
			array[result]=array[result]+1; 
		}
	}
	
	//检测是否有重复出现的汉字 
	for(i=0;i<65536;i++)
	{
		if(array[i]>1)
		{
			flag=1;
		}
	}
	
	//没有重复出现的汉字
	if(flag==0)
	{
		printf("No repeat!\n");
	}
	
	if(flag==1)
	{
		for(i=0;i<65536;i++)
		{
			//如果重复 
			if(array[i]>1)
			{
				//原码两位
				if(i<2048)
				{
					output1=((i&1984)>>6)+192;
					output2=(i&63)+128;
					
					printf("%c%c 0x%04x %d\n",output1,output2,i,array[i]); 
				 } 
				 
				//原码三位
				else
				{
					output1=((i&61440)>>12)+224;
					output2=((i&4032)>>6)+128;
					output3=(i&63)+128;
					
						printf("%c%c%c 0x%04x %d\n",output1,output2,output3,i,array[i]); 
				 } 
				 
				
			}
		}
	}
	
	return 0; 
} 
