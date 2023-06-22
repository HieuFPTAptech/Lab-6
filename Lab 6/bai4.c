#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void randomize(int a[], int size){
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand();
        printf("\t%d; ", a[i]);
    }
}

int checkArray(int a[], int size, int n){
    for (int i = 0; i < size; i++)
    {
        if (a[i] == n)
        {
            return 1;
        }
       
    }
    return 0;
}

int main(){
    int number;
    int size = 20;
    int a[size];
    
    printf("\n20 random elements:");
    randomize(a, size);

    printf("\nEnter number to check: ");
    scanf("%d", &number);
    if (checkArray(a, size, number))
    {
        printf("\n%d is in the array", number);
    }else
    {
        printf("\n%d is not in the array", number);
    }    
    return 0;
}
