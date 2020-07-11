/*
Constraints:
* The starting first number should be either 9 or 8.
* Can use random module.
* Should use recursive function.
* no repitation of same numbers.
*/
#include<stdio.h>
#include<stdlib.h>
void main() {
    //time is set to NULL to make we get new range of values on each execution. 
    srand(time(NULL));
    int a[10], i, j, t;
    a[0] = (rand() % 2) + 8, a[1] = a[0] == 9? a[0] - 1 : a[i] + 1;
    for (i = 2; i < 10; i++) {
        t = rand() % 10;
        for (j = 0; j < i; j++) if(t == a[j]) break;
        if (i == j) a[i] = t;
        else i--;
    }
    for (i = 0; i < 10; i++) printf("%d", a[i]);
}

