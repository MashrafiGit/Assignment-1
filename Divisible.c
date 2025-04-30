#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* get value from user */
    int N;
    scanf("%d", &N);
    
    // check the condition
    if(N%3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
