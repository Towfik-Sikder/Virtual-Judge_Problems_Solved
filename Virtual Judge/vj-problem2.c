#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int revArr[n];
    for(int i = n - 1; i >= 0; i--){
        scanf("%d", &revArr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", revArr[i]);
    }

    return 0;
}












//#include <stdio.h>
//int main(){
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    int newArr[n];
//    for(int i = 0; i < n; i++){
//        scanf("%d", &arr[i]);
//
//        for(int i = 0,  j = n - 1; i < n; i++, j--){
//            newArr[j] = arr[i];
//        }
//
//    }
//    for(int i = 0; i < n; i++){
//        printf("%d\n", newArr[i]);
//    }
//
//    return 0;
//}
