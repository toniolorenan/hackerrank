#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
    int lookup[26] = {0};
    int i = 0;
    while (a[i] != '\0'){
        lookup[a[i]-'a']++;
        i++;
    }
    i=0;
    while (b[i] != '\0'){
        lookup[b[i]-'a']--;
        i++;
    }
    i=0;
    for (int x=0;x<26;x++){
        i += (lookup[x] > 0) ? lookup[x]  :  -lookup[x];
        //printf("%d",lookup[x]);
    }
    printf("%d", i);
    return 0;
}
