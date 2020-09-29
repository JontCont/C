#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
