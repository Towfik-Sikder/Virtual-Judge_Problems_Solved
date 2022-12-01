#include <stdio.h>
#include <stdbool.h>
int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int i = 0;
        bool a = false;
        while(s[i] != '\0'){
             if((s[i] == '8') && (n >= 11)){
                a = true;
                break;
            }
            i++;
        }
         if(a == true){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
    }

    return 0;
}
