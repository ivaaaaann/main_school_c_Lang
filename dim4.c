#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main17()
{
    int arr[10];
    int ans[10];

    for (int a = 0; a < 10; a++)
    {
        scanf("%d", &arr[a]);
        ans[a] = arr[a] % 42;
    }
    int answer = 0;
    int x = 0;
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b < a; b++)
        {
            if (ans[a] != ans[b])
                x++;
        }
        if (x == a)
        {
            answer++;
        }
        x = 0;
    }
    printf("%d", answer);
    return 0;
}