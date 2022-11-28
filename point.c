#include <stdlib.h>
#include <stdio.h>

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// ��ȡ���ֵ
int getNextRandomValue(void)
{
    return rand();
}
int main(void)
{
    int a;
    int myarray[10];
    /* getNextRandomValue ���ܼ����ţ������޷����룬��Ϊ��������֮���൱�ڴ���˲���ʱ������ int , �����Ǻ���ָ��*/
    
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\r\n", myarray[i]);
    }
    printf("0x%x\r\n0x%x\r\n", &getNextRandomValue, &myarray);
    printf("\n");
    a = getchar();
    printf("%d", a);
    getchar();
    return 0;
}