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
void Sort(int a[],int j,int i,int n){
    if(j==n-i)
    return;
    int temp;
    if(a[j] > a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
    }
    Sort(a,j+1,n);
}
void Bubble(int a[],int i,int n){
    if(i==n-2)
    return;
    
    Sort(a,0,i,n);
    Bubble(a,i+1,n);
}
int main(){
    int a[30],n;
    printf("Enter array limit : ");
    scanf("%d",&n);
    accept(a,n);
    Bubble(a,n);
    printf("Array in ascending order : ");
    display(a,n);
    printf("\n");
}