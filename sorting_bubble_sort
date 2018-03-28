#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                cnt++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n", cnt);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n-1]);
    
    return 0;
}
