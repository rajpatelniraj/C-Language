#include<stdio.h>
int main(){
    int arr[20], *p;
    p=&arr[0];
    for(int i=0;i<10;i++){
        arr[i]=2*(i+1);
    }
    for(int i=0;i<10;i++){
        if(i==9) printf("%d",*(p+i));
        else printf("%d,",*(p+i));
    }
    return 0;
}