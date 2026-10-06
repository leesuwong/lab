#include <stdio.h>

int main(void)
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        // 가장 작은 값의 위치 찾기 i = 현재 정렬할 자리, min = 현재까지 찾은 가장 작은 값, j = 배열을 돌아다니는 변수
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // arr[i]와 가장 작은 값 교환
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // 결과 출력
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
