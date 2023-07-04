#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int x, y, w, h;
    scanf("%d%d%d%d", &x, &y, &w, &h);
    int arr[4]; // 차를 저장 할 변수
    arr[0] = x;
    arr[1] = y;
    arr[2] = w - x;
    arr[3] = h - y;

    bubbleSort(arr, 4);

    printf("%d", arr[0]);

    return 0;
}