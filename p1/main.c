#include <stdio.h>

int main(void){
    int n;
    int method = 0;
    scanf("%d", &n);
    
    for(int a=1 ; a*900 < n ; a++){
        for(int b=2 ; b*750 < n ; b+=2){
            for(int c=1 ; c*200 < n ; c++){
                if(a*900 + b*750 + c*200 == n ){
                    if(c < a || c < b){
                        printf("%d %d %d\n", a, b, c);
                        method = 1;
                    }
                }
            }
        }
    }
    if(!method){
        printf("none\n");
    }
    
    return 0;
}
