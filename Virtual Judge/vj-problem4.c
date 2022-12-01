#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int countArr[n+1];
        memset(countArr, 0, sizeof(countArr));
        for(int i = 0; i < n; i++){
            countArr[arr[i]]++;
        }
        int x = 0;
        for(int i = 0; i <= n; i++){
            if(countArr[i] >= 3){
                x = i;
            }
        }
        if(x > 0){
            printf("%d\n", x);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}
