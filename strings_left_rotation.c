#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *ans = malloc(sizeof(int) * n);
    for(int i=0;i<n;i++){
        ans[i] = a[(i+k)%n];
        printf("%d ", ans[i]);
    }
    
    return 0;
}
