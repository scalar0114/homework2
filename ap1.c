// // ap1.c는 포인터 배열과 배열 포인터의 차이를 알려주는 프로그램
// // 정수형 배열과 정수형 포인터 배열을 선언, 값을 할당, 출력한다.
// // c언어에서 배열은 포인터로 사용할 수 있기 때문에 배열의 이름은 배열의 첫 번째 요소의 주소를 가리킨다.
// // 배열의 이름과 배열의 첫 번째 요소의 주소는 같다.
// // 배열의 이름에 정수를 더하면 배열의 첫 번째 요소의 주소에 정수를 더한 주소를 가리킨다.

// #include <stdio.h>
// #include <stdlib.h>

// void main()
// {
//     printf("[----- [hyunseung] [2023041001]] -----]\n");
    
//     int list[5]; // 정수형 배열 선언
//     int *plist[5] = { // 정수형 포인터 배열 선언
//         NULL,
//     };
//     plist[0] = (int *)malloc(sizeof(int)); // 동적 메모리 할당
//     list[0] = 1; // list[0]에 1 할당
//     list[1] = 100; // list[1]에 100 할당
//     *plist[0] = 200; // plist[0]에 200 할당
//     printf("list[0] = %d\n", list[0]);
//     printf("&list[0] = %p\n", &list[0]);
//     printf("list = %p\n", list);
//     printf("&list = %p\n", &list);
//     printf("----------------------------------------\n\n");
//     printf("list[1] = %d\n", list[1]);
//     printf("&list[1] = %p\n", &list[1]);
//     printf("*(list+1) = %d\n", *(list + 1));
//     printf("list+1 = %p\n", list + 1);
//     printf("----------------------------------------\n\n");
//     printf("*plist[0] = %d\n", *plist[0]);
//     printf("&plist[0] = %p\n", &plist[0]);
//     printf("&plist = %p\n", &plist);
//     printf("plist = %p\n", plist);
//     printf("plist[0] = %p\n", plist[0]);
//     printf("plist[1] = %p\n", plist[1]);
//     printf("plist[2] = %p\n", plist[2]);
//     printf("plist[3] = %p\n", plist[3]);
//     printf("plist[4] = %p\n", plist[4]);
//     free(plist[0]); // 동적메모리 해제
// }