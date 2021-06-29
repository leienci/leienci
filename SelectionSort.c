/*选择排序*/
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

void selection(int num[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) //开始选择排序
        //每次以num[i]为基准值 num[i]为当前最小值
        for (int j = i + 1; j < n; j++)
            if (num[i] > num[j])
            {
                //遍历数组中的元素进行比较 小于基准值就进行交换
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
}

void main()
{
    int n, num[512];
    scanf("%d", &n);   //输入要排序的数个数
    input_fun(num, n); //输入要排序的数
    selection(num, n); //调用插入排序函数
    print_fun(num, n); //输出排序后的数
}