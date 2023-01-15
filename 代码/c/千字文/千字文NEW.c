#include "string.h"
#include "stdio.h"
#include "math.h"

int main()
{
	//定义用来读取连续字符的变量 
    char ch1, ch2, ch3;
    //定义等价变量 
    int t, tt, ttt;
	int m;
	int x, xx, xxx;
	//定义数组 
    long zi[65536];
    //对数组进行初始化 
    memset(zi, 0, sizeof(zi));
 
 	//实现截止输入 
    while(scanf("%c", &ch1) != EOF)
    {
        t = ch1;
        if(t < 128)
        {
        //ASCII码，无需再读入字符 
        	;	
		} 
            
        else if(t<224 && t>=192)
        {
        	//再读入一个字符 
            ch2 = getchar();
            //赋值 
            tt = ch2;
            //unicode码 
            m = (t - pow(2, 7) - pow(2, 6)) * pow(2, 6) + tt - pow(2, 7);
 			//以unicode码作下标 
            zi[m]++;
        }
        	else
        	{
        	//再读入两个字符 
            ch2 = getchar();
            ch3 = getchar();
            //赋值 
            tt = ch2;
            ttt = ch3;
            //unicode码 
            m = (t - pow(2, 7) - pow(2, 6) - pow(2, 5)) * pow(2, 12) + (tt - pow(2, 7)) * pow(2, 6) + ttt - pow(2, 7);
            //以unicode码作下标 
			zi[m]++;
        	}
            
    }
    
 	//定义标记变量 用于看该字符是否重复出现 
    int flag = 0;
    //循环变量 
    int i; 
    //进行遍历 确定是否出现重复字符 
    for (i = 0; i < 65536; i++)
    {
        if(zi[i] > 1)
        {
            flag = 1;
            break;
        }
    }
    
    //整篇文章出现重复字符 
    if(flag == 1)
    {
    	// 从ASCII码后面开始遍历 
        for (i = 128; i < 65536; i++)
        {
        	//utf-8用了两个字节来存 
            if(i >= 128 && i < 2048)
            {
                if(zi[i] > 1)
                {
                	//将第一位utf-8码进行还原 
                    x = i/64 + 192;
                    //将第二位utf-8码进行还原 
                    xx = i%64+128;
                    //x表示以小写的十六进制数输出；4表示输出的十六进制数的宽度是4个字符；0表示输出的十六进制数中，不足4个字符的部分，用“0”来补 
                    printf("%c%c 0x%04x %ld\n", x, xx, i, zi[i]);
                }
            }
 
            //utf-8用了三个字符来存 
            else
            {
                if(zi[i] > 1)
                {	
                	//将第一位utf-8码进行还原 
					x = i/4096+224;
					//将第二位utf-8码进行还原 
                    xx = (i / 64) % 64 + 128;
                    //将第三位utf-8码进行还原 
                    xxx = i % 64 + 128;
                    printf("%c%c%c 0x%04x %ld\n", x, xx, xxx, i, zi[i]);
 
                }
            }
            
        }
    }
    
    //整篇文章未出现重复字符 
    else
    {
        printf("No repeat!\n");
    }
    
        return 0;
}
