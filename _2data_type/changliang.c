#include<stdio.h>
#include<stdlib.h>
#define MAX 10000 //define标识符定义常量
enum Sex
{
    MALE  = 3, //枚举类型未来可能出现的取值,=3为赋初值，下面依次递增
    FEMALE,
    SECREC
};
int main()
{
    const int num = 10;
    // num = 20; //报错，const修饰后不能更改，num还是变量，具有常属性不能修改
    printf("%d\n",num);
    int arr[10] = {0};
    const int n = 10;
    //int arr2[n] = {0};//报错，因为const修饰后还是变量
    

    int a = MAX;
    printf("%d\n",a);



    enum Sex s = MALE;

    printf("%d",s);

    system("pause");
    return 0;
}