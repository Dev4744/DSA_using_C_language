#include<stdio.h>
void accept(int a[],int n){
    printf("Enter array numbers : ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",a+i);
    }
}
void display(int a[],int n){
    for(int i=0 ; i<n ; i++)
      printf("%d\t",a[i]);
}
void BubbleSort(int a[],int n){
    int i,j,t;
    for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                t = a[j];
             a[j] = a[j+1];
             a[j+1] = t; 
            }
        }
    }
}
int main(){
    int a[30],n;
    printf("Enter array limit : ");
    scanf("%d",&n);
    accept(a,n);
    BubbleSort(a,n);
    printf("Array in ascending order : ");
    display(a,n);
    printf("\n");
}