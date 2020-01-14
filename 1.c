#include <stdio.h>
#include <stdlib.h>
#include "myprogram.h"

int main(int argc, char** argv)
{
    int a[2] = {1, 5};
    int* result;
    add(a, a + 1, result);
    printf("%d\n", *result);

    mys* m;
    m -> x = 0.0f;
    m -> y = 0.0f;
    m -> next;

    for (; m -> next != NULL; m -> next)
    {
        //
    }
    

    mys m1;
    m1.x = 0.0f;
    m1.y = 0.0f;

    return 0;
}
