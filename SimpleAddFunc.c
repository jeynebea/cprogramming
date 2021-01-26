#include <stdio.h>

int Add(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    int result;
    result = Add(3, 4);
    printf("result1: %d \n", result);
    result = Add(5, 8);
    printf("result2: %d\n", result);
    return 0;

}
//함수 Add를 main함수 내에서 반복 호출하여 사용//
