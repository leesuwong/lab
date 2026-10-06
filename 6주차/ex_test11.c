#include <stdio.h>

int main(void)
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // i = 이번에 가져올 숫자의 위치, key = 이번에 끼워 넣을 숫자, j = key를 어디에 넣을지 찾는 변수
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
