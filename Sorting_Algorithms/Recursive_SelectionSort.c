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
int Sort(int a[],int j,int n,int min,int pos){
   if(j==n-1)
   return;
   if(a[j] < min){
   pos = j;
   min = a[j];
   }
   pos = Sort(a,j+1,n,min,pos);
   return pos;
}
void Selection(int a[],int n,int i){
  if(i==n-1)
   return;
   int pos = Sort(a,i+1,n,a[i],i);
   int t = a[pos];
   a[pos] = a[i];
   a[i] = t;
   Selection(a,n,i+1);
}
int main(){
    int a[30],n;
    printf("Enter array limit : ");
    scanf("%d",&n);
    accept(a,n);
    SelectionSort(a,n);
    printf("Array in ascending order : ");
    display(a,n);
    printf("\n");
}