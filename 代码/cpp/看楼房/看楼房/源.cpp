#include <iostream>  
#include <cstring>   
#include <stack>  
using namespace std;

//定义   
long long color[1000010]; //记录楼房颜色  
long long height[1000010]; //记录楼房高度   
long long repeat[1000010]; //判断是否重复   
int amo; //记录数据组数  
int n; //记录楼房高度  


stack<long long> c; //定义颜色栈  
stack<long long> h; //定义高度栈   
int main()
{
    cin >> amo;
    for (int j = 0; j < amo; j++)    //每种用例   
    {
        long long cnt = 0; //定义计数器并初始化为0   

        memset(color, 0, sizeof(color));
        memset(height, 0, sizeof(height));
        memset(repeat, 0, sizeof(repeat)); //初始化   

        while (!h.empty())
        {
            h.pop();
            c.pop();
        }               //清空栈   

        cin >> n; //输入房子个数   
        for (int i = 0; i < n; i++)
        {
            cin >> color[i];  //输入颜色   
        }
        for (int i = 0; i < n; i++)
        {
            cin >> height[i]; //输入高度   
        }

        for (int i = 0; i < n; i++)
        {
            if (i == 0) //把第一组高度与颜色输入,计数器自增  
            {
                h.push(height[0]);
                c.push(color[0]);
                repeat[color[0]]++;
                cnt++;
            }
            else        //把其他组高度与颜色输入   
            {
                if (height[i] >= h.top()) //当前楼房高度大于或等于栈顶高度   
                {
                    if (!h.empty())
                    {
                        do
                        {
                            h.pop();
                            repeat[c.top()]--;
                            if (repeat[c.top()] == 0)
                            {
                                cnt--;
                            }
                            c.pop();

                        } while (!h.empty() && height[i] >= h.top());
                    }


                }
                h.push(height[i]);
                if (repeat[color[i]] == 0) cnt++;
                repeat[color[i]]++;
                c.push(color[i]);
                //不重复就算入  
            }

            printf("%lld%c", cnt, (i == n - 1 ? '\n' : ' '));       //输出操作   
        }
    }
    return 0;
}