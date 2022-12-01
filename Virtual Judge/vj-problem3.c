#include <stdio.h>
int main(){
    char s[1001];
    scanf("%s", s);
    int length = strlen(s);
    int countArr[length + 1];
    for(int i = 0; i < length; i++){
        countArr[i] = 0;
    }
    for(int i = 0; i < length; i++){
        int asValue = s[i];
        if(asValue >= 48 && asValue <= 57){
            int x = asValue - 48;
            countArr[x]++;
        }
    }
     for(int i = 0; i < 10; i++){
        printf("%d ", countArr[i]);
    }


    return 0;
}
