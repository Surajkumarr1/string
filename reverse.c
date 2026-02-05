#include<stdio.h>
int main(){
    char A[]="Ritik";
    
    int i,j;
    for(j=0;A[j]!='\0';j++){
    }
    j=j-1;
    for (i=0;i<j;i++,j--){
int t = A[i];
A[i] = A[j];
A[j] = t;
    }
    printf("%s ",A);
    return 0;
}
