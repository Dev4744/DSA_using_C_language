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
void merge(int a[],int s,int e){
    int mid;
    if(s<e){
        mid = (s+e)/2;
        merge(a,s,mid);
        merge(a,mid+1,e);
        MergeSort(a,s,mid,e);
    }
}
void MergeSort(int a[],int s,int mid,int e){
    int i,j,k,b[20];
    i=s;
    j = mid+1;
    k = 0;
    
    while(i<=mid && j<=e){
        if(a[i] < a[j])
        b[k++] = a[i++];
        else
        b[k++] = a[j++];
    }
    while(i<=mid)
    b[k++] = a[i++];
    while(j<=e)
    b[k++] = a[j++];

    for(i=s,k=0 ; i<=e ; i++,k++)
    a[i] = b[k];
    
}
int main(){
    int a[30],n;
    printf("Enter array limit : ");
    scanf("%d",&n);
    accept(a,n);
    merge(a,0,n-1);
    printf("Array in ascending order : ");
    display(a,n);
    printf("\n");
}