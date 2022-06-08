#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    "abcd";
    char arr[] = "hellow";
    char arr1[] = "abc"; //"abc\0"
    char arr2[] = {'a','b','c'}; //没有结束字符\0，会接着输出乱码
    char arr3[] = {'a','b','c','\0'}; 
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);

    //求字符串长度
    int len = strlen("abc");
    printf("%d\n",len);
    printf("%d\n",strlen(arr2));
    printf("%d\n",strlen(arr3));
    system("pause");
    return 0;
}