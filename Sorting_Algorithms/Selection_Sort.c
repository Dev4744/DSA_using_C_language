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
void SelectionSort(int a[],int n){
   int i,j,mid,pos,min,temp;
   for(i=0 ; i<n ; i++){
        pos = i;
        min = a[i];
        for(j=i+1 ; j<n ; j++){
            if(min>a[j]){
                min = a[j];
                pos = j;
            }
        }
        temp = a[i];
         a[i] = a[pos];
        a[pos] = temp;

   }
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