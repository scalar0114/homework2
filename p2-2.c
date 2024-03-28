// //p2-2.c는 배열의 이름과 배열의 첫 번째 요소의 주소를 출력하는 프로그램
// //배열의 이름과 배열의 첫 번째 요소의 주소는 같다.
// //배열의 이름에 정수를 더하면 배열의 첫 번째 요소의 주소에 정수를 더한 주소를 가리킨다.
// //배열의 이름과 배열의 첫 번째 요소의 주소를 출력하는 함수를 작성한다.
// //함수를 호출할 때 배열의 이름과 배열의 첫 번째 요소의 주소를 전달한다.
// //함수에서는 배열의 이름과 배열의 첫 번째 요소의 주소를 출력한다.

// #include <stdio.h>

// void print_one(int *ptr, int rows);

// int main()
// {
//     printf("[----- [hyunseung] [2023041001]] -----]\n");

//     int one[] = {0, 1, 2, 3, 4};
//     printf("one = %p\n", one);
//     printf("&one = %p\n", &one);
//     printf("&one[0] = %p\n", &one[0]);
//     printf("\n");
//     printf("------------------------------------\n");
//     printf(" print_one(&one[0], 5) \n");
//     printf("------------------------------------\n");
//     print_one(&one[0], 5);
//     printf("------------------------------------\n");
//     printf(" print_one(one, 5) \n");
//     printf("------------------------------------\n");
//     print_one(one, 5);
//     return 0;
// }

// void print_one(int *ptr, int rows)
// { /* print out a one-dimensional array using a pointer */
//     int i;
//     printf("Address \t Contents\n");
//     for (i = 0; i < rows; i++)
//         printf("%p \t %5d\n", ptr + i, *(ptr + i));
//     printf("\n");
// }