#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int i = 0;
    int x;
    int y;
    while(s[i] != '\0'){
        if(s[i] == 'n'){
            x++;
        }
        if(s[i] == 'z'){
            y++;
        }
        i++;
    }
    for(int i = 0; i < x; i++){
           printf("1 ");
        }
    for(int i = 0; i < y; i++){
        printf("0 ");
    }

    return 0;
}
