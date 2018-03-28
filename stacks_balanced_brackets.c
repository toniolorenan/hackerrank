#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool is_balanced(char expression[]) {
    char* st = (char *)malloc(1000 * sizeof(char));
    int   st_p = 0;
    int   i = 0;
    while (expression[i] != '\0'){
        //printf("%c %d\n", expression[i], st_p);
        switch(expression[i]){
            case '(':
                st[st_p]= ')';
                st_p++;
                break;
            case '[':
                st[st_p]= ']';
                st_p++;
                break;
            case '{':
                st[st_p]= '}';
                st_p++;
                break;
            case ')':
                if (st_p == 0)
                    return false;
                if (st[st_p-1]==')')
                    st_p--;
                else
                    return false;
                break;
            case ']':
                if (st_p == 0)
                    return false;
                if (st[st_p-1]==']')
                    st_p--;
                else
                    return false;
                break;
            case '}':
                if (st_p == 0)
                    return false;
                if (st[st_p-1]=='}')
                    st_p--;
                else
                    return false;
                break;
            default:
                break;
        }
        i++;
    }
    return (st_p == 0);
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        char* expression = (char *)malloc(512000 * sizeof(char));
        scanf("%s",expression);
         bool answer = is_balanced(expression);
         if(answer)
          printf("YES\n");
         else
          printf("NO\n");
    }
    return 0;
}
