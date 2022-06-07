# 第一个C语言项目

## 1. 新建一个项目

vscode貌似没有新建项目

直接右键用code打开

## 2. 新建源文件

xxxx.c--->源文件

xxxx.c--->头文件

## 3. 编写代码

```c
//1. 写出主函数 C语言函数是从主函数第一行开始的
#include<stdio.h>
int main() // int是整形，对应返回的整形0
{
    printf("hellow,world!");//库函数，在屏幕上打印信息（引用头文件stdio.h）
    return 0;
}
```

## 4. 编译代码

快捷键：ctrl+F5 

程序运行太快，一闪而过，解决办法：

vs2013：

	1. 右键项目，点击属性
	2. 连接器-->配置属性-->系统-->子系统-->控制台-->应用-->确定

vscode：

```c
//在VC 6.0下，要添加如下的头文件！
#include <stdlib.h> 


system("Pause");
```

## 5. 补充

1. 如何打开vscode的c运行黑框以及如何使黑框停留：

   在***launch.json***文件中加入

   ```
   "externalConsole": true
   ```