#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "windows.h"
//�������ܣ�ʵ���ۼ����
int func_sum(int n)
{
    int sum = 0;
    if (n < 0)
    {
        printf("n must be > 0\n");
        exit(-1);
    }
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

//��������ǻص����������еڶ�������Ϊһ������ָ�룬ͨ���ú���ָ����������ͺ��������ѽ�����ظ���������
int callback(int n, int (*p)(int))
{
    printf("�ص���\r\n");
    Sleep(1000);
    Sleep(1000);
    Sleep(1000);
    Sleep(1000);
    return p(n);
}

int main(void)
{
    int n = 0;
    printf("please input number:");
    scanf("%d", &n);
    printf("the sum from 0 to %d is %d\n", n, callback(n, func_sum)); //�˴�ֱ�ӵ��ûص�������������ֱ�ӵ���func_sum����
    getchar();
    scanf("%d", &n);
    return 0;
}
