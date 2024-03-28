// ap2.c와 마찬가지로 포인터 배열과 배열 포인터의 차이를 알려주는 프로그램
// 정수형 배열과 정수형 포인터 배열을 선언, 값을 할당, 출력한다.
// c언어에서 배열은 포인터로 사용할 수 있기 때문에 배열의 이름은 배열의 첫 번째 요소의 주소를 가리킨다.
// 배열의 이름과 배열의 첫 번째 요소의 주소는 같다.
// 배열의 이름에 정수를 더하면 배열의 첫 번째 요소의 주소에 정수를 더한 주소를 가리킨다.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [hyunseung] [2023041001]] -----]\n");

    int list[5]; // 정수형 배열 선언
    int *plist[5]; // 정수형 포인터 배열 선언
    list[0] = 10; // list 배열 첫 번째 요소에 10 할당
    list[1] = 11; // list 배열 두 번째 요소에 11 할당
    plist[0] = (int *)malloc(sizeof(int)); // plist 배열 첫 번째 요소에 동적 메모리 할당
    printf("list[0] \t= %d\n", list[0]);
    printf("list \t\t= %p\n", list);
    printf("&list[0] \t= %p\n", &list[0]);
    printf("list + 0 \t= %p\n", list + 0);  
    printf("list + 1 \t= %p\n", list + 1);
    printf("list + 2 \t= %p\n", list + 2);
    printf("list + 3 \t= %p\n", list + 3);
    printf("list + 4 \t= %p\n", list + 4);
    printf("&list[4] \t= %p\n", &list[4]);
    free(plist[0]); // 동적메모리 해제
}