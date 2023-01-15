#include <iostream> 
#include <cstdio>
#include <cstring>
#include <queue>
#include <cmath> 

using namespace std;  
  
int main ()  
{  
    //定义用例个数变量   
    long long amount;  
      
    //定义学生个数   
    long long num;  
      
    //定义外部、内部循环变量   
    long long out;  
    long long in;   
      
    //定义学生位置   
    long long x,y;  
      
    //定义临时变量   
    long long temp;  
      
    //定义结果变量   
    long long res_x,res_y;   
      
    //定义计数变量   
    long long cnt;  
      
    //输入用例个数   
    scanf("%lld",&amount);  
      
    for(out=1;out<=amount;out++)  
    {     
        //初始化计数变量   
        cnt=0;  
          
        //定义x优先队列、y优先队列      
        priority_queue<long long,vector<long long>,less<long long> >x_big;  
        priority_queue<long long,vector<long long>,greater<long long> >x_small;  
        priority_queue<long long,vector<long long>,less<long long> >y_big;  
        priority_queue<long long,vector<long long>,greater<long long> >y_small;  
          
          
        //输入学生个数   
        scanf("%lld",&num);  
        printf("Case: %lld\n",out);   
          
        //进行运算   
        for(in=1;in<=num;in++)  
        {             
            scanf("%lld %lld",&x,&y);   
              
            //x    判断大堆是否为空   
            if(x_big.empty())  
            {  
                //大堆为空，大堆堆尾插入x，并自动排序   
                x_big.push(x);  
            }     
            else  
            {   
                //大堆非空,小堆为空  
                if(x_small.empty())  
                {  
                    //判断输入量是否大于等于大堆堆顶值   
                    if(x>=x_big.top())  
                    {  
                        //如果是，将x插入小堆堆尾，并自动排序 ;  
                        x_small.push(x);  
                    }   
                    else   
                    {  
                        //如果不是，将大堆堆顶值插入小堆堆尾，并排序；大堆插入x，并排序；   
                        x_big.push(x); 
						temp=x_big.top(); 
						x_big.pop(); 
						x_small.push(temp); 
                    }  
                }  
                  
                //大堆不空，小堆不空 且两个堆的元素个数相同   
                else if(!(x_big.size()-x_small.size()) ) 
                {  
                    // 判断x是否小于等于小堆顶值   
                    if(x<=x_small.top())  
                    {  
                        //如果是，将x插入大堆尾，并自动排序；   
                       x_big.push(x);  
                    }  
                    else  
                    {  
                        //如果不是 ，将小堆顶值赋给temp，再将之插入大堆尾，并自动排序，删除小堆顶值，小堆尾插入x，并自动排序；   
                       x_small.push(x);
					   temp=x_small.top();
					   x_small.pop(); 
					   x_big.push(temp);  

                    }  
                }  
                    //小堆不空 且大堆的元素个数多于小堆的元素个数  
                    else if(x_big.size()>x_small.size())  
                        {  
                            //判断x是否大于等于小堆顶值   
                            if(x>=x_big.top())  
                            {  
                                //如果是，将x插入小堆尾，并自动排序；  
                                x_small.push(x);  
                            }  
                            else   
                            {  
                                //如果不是 ，将x插入大堆尾，并自动排序，再将大堆顶值赋给temp，删除大堆顶值，小堆尾插入temp，并自动排序；  
                                x_big.push(x);  
                                temp=x_big.top();  
                                x_big.pop();  
                                x_small.push(temp);  
                            }  
                        }  
            }  
                  
            //y 同理   
            if(y_big.empty())  
            {  
                y_big.push(y);  
            }  
            else  
            {  
                if((y_small.empty()))  
                {  
                    if(y>=y_big.top()) y_small.push(y);  
                    else   
                    {   y_big.push(y);
						temp=y_big.top();
						y_big.pop();  
                    	y_small.push(temp);

                    }  
                }  
                  
              
                else if(!(y_big.size()-y_small.size()) ) 
                    {  
                        if(y<=y_small.top())  
                        {  
                         y_big.push(y);  
                        }  
                        else  
                        {   y_small.push(y); 
							temp=y_small.top();
                            y_small.pop();  
                            y_big.push(temp); 
                        }  
                    }  
                    else if(y_big.size()>y_small.size())  
                        {  
                            if(y>=y_big.top())  
                            {  
                                y_small.push(y);  
                            }  
                            else   
                            {  
                                y_big.push(y);  
                                temp=y_big.top();  
                                y_big.pop();  
                                y_small.push(temp);  
                            }     
                        }  
            }  
            
			//只有奇数个数才会更新中位数  
            if(in%2)  
            {  
                //取堆顶值   
                res_x=x_big.top();  
                res_y=y_big.top();  
            }  
              
            //结果加和   
            cnt=cnt+llabs(res_x-x);  
            cnt=cnt+llabs(res_y-y);  
              
            //输出结果   
            printf("%lld.0000\n",cnt);  
              
        }  
    }  
}  
