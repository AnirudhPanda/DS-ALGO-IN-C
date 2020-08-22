/*Bubble Sort*/

#include<stdio.h>

void bubbleSort();
int main(){
    int a[100],n,i,j,temp;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter array elements: ");
        scanf("%d \n", &a[i]);
    }
    bubbleSort(a, n);
}

void bubbleSort(int a[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Array is: ");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
