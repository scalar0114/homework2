//이 코드는 C 언어로 작성된 프로그램
//배열의 모든 요소를 합산하는 세 함수(sum1, sum2, sum3)를 선언하고 사용하는 방법을 보여준다.
//sum1 함수는 배열을 인수로 받는다.
//sum2 함수는 포인터를 인수로 받는다.
//sum3 함수는 배열의 크기와 포인터를 인수로 받는다.
//각 함수는 배열의 모든 요소를 합산하고 결과를 반환한다.

#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("[----- [hyunseung] [2023041001]] -----]\n");

    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i;
    
    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
}

float sum1(float list[], int n)
{
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}

float sum2(float *list, int n)
{
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}

float sum3(int n, float *list)
{
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}