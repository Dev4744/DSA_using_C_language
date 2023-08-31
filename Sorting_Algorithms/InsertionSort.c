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
void InsertionSort(int a[],int n){
    int i,j,key;
    for(i=1 ; i<n ; i++){
        key = a[i];
        for(j=i-1 ; (j>=0) && (a[j]>key); j--){
            
             a[j+1] = a[j]; 
        }
        a[j+1] = key;
    }
}
int main(){
    int a[30],n;
    printf("Enter array limit : ");
    scanf("%d",&n);
    accept(a,n);
    InsertionSort(a,n);
    printf("Array in ascending order : ");
    display(a,n);
    printf("\n");
}