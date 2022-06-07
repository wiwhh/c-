#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch = 'a';     //创建一个字符类型的空间
    int age = 20;      //整形
    short num = 10;    //短整型，int可以省略
    //long
    //long long
    float weight = 55.5;//单精度浮点型
    double d = 0.0 ;    //双精度浮点型
    printf("char的大小为%d\n",sizeof(char)); //sizeof()计算变量大小，单位字节
    printf("short的大小为%d\n",sizeof(short));
    printf("int的大小为%d\n",sizeof(int));
    printf("long的大小为%d\n",sizeof(long));
    printf("long long的大小为%d\n",sizeof(long long));
    printf("float的大小为%d\n",sizeof(float));
    printf("double的大小为%d\n",sizeof(double));

    //变量的使用
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum = %d\n",sum);
    system("pause");
    return 0;
}