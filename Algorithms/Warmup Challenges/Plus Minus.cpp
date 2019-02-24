#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    // Complete this function
    float pos=0.0,neg=0.0,zer=0.0;
    for(i=0;i<n;i++)
    {
        if(*(a+i)>0)
            pos+=1.0;
        else if(*(a+i)<0)
            neg+=1.0;
        else
            zer+=1.0;
    }
    
    printf("%0.6f\n",pos/n);
    printf("%0.6f\n",neg/n);
    printf("%0.6f",zer/n);

}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}

