#include<stdio.h>
int main(){
    int arr[5][5],i,j,r,c;
    printf("enter the rows and columns");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element");
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int min = arr[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min =arr[i][j];
            }
        }
    }
    int diff ;
    diff =max-min;
    int sum;
    sum = max+min;
    printf("%d is max\n",max);
    printf("%d is min\n",min);
    printf("%d is difference\n",diff);
    printf("%d is sum",sum);
    return 0;
}