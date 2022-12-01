#include <stdio.h>
#include <string.h>
int main(){
    int n,i;
    char word[101];
    scanf("%d", &n);
    for(i=0; i<n; i++){
            scanf("%s",word);

    int wordLength= strlen(word);
    int middle= wordLength-2;
    if(wordLength<=10){
        printf("%s\n",word);
    }
    else{
        printf("%c%d%c\n", word[0],middle,word[wordLength-1]);
    }



    }
    return 0;


    }

















/*int main(){

    int n;
    scanf("%d",&n);
    int r,e,c;
    int i;

    for(i=0; i<n; i++){
        scanf("%d %d %d", &r, &e, &c);

        if(r<(e-c)){
            printf("advertise\n");
        }
        else if(r==(e-c)){
            printf("does not matter\n");
        }
        else{
            printf("do not advertise\n");
        }
    }

    return 0;
}*/
