#include<stdio.h>
int b = 10;
int main()
{
    printf("1：%d\n",b);
    {
        printf("2：%d\n",b);
        int a = 10;//a的作用域就是代码块的内部
    }
   	//printf("%d",a)//不能打印
    system("pause");
    return 0;
}