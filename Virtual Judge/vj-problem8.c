#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    int length = strlen(s);
    int count = 0;
    for(int i = 0, j = 1; i < length; i++, j++){
        if(s[i] == s[j]){
            count++;
            if(count == 6){
                break;
            }
        }
        else{
            count = 0;
        }
    }
    if(count >= 6){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

