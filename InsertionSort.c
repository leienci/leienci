/*插入排序*/
#include <stdio.h>
#include <stdlib.h> //rand()srand()
#include <time.h>   //time()

void print_fun(int num[], int n)
{
    for (int i = 0; i < n; i++) //循环输出数组的数值
        printf("%d ", num[i]);
    printf("\n");
}

void input_fun(int num[], int n)
{
    srand((unsigned)time(NULL)); //生成随机数之前先进行播种
    for (int i = 0; i < n; i++)  //循环输入要排序的数
        //scanf("%d", &num[i]);
        num[i] = rand() % 100; //生成0-100之间的随机数
    print_fun(num, n);
}

void insertion(int num[], int n)
{
    int i, j, value;
    for (i = 0; i < n - 1; i++)
    {
        value = num[i + 1]; //确定基准值
        for (j = i + 1; j >= 0 && value < num[j - 1]; j--)
            //从num[j - 1]开始遍历
            num[j] = num[j - 1];
        num[j] = value; //插入保存的值
        //print_fun(num, n); //输出每一遍排序的结果
    }
}

void main()
{
    int n, num[512];
    scanf("%d", &n);   //输入要排序的数个数
    input_fun(num, n); //输入要排序的数
    insertion(num, n); //调用插入排序函数
    print_fun(num, n); //输出排序后的数
}