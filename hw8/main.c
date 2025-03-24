#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[],int key,int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
    else if(arr[mid]<key)
        low=mid+1;
    else
        high=mid-1;

    }
    return -1;
}
int binarysearchrecursive(int arr[],int key,int low,int high){
    if(low>high)
        return -1;
    int mid=(low+high)/2;

    if(arr[mid]==key)
        return mid;

    else if(arr[mid]<key)
        return binarysearchrecursive( arr, key,mid+1, high);
    else
        return binarysearchrecursive( arr, key,low, mid+1);
}

void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod){
if(n==1){
    printf("move 1 disk from rod %c to rod %c\n",from_rod,to_rod);
    return;
}

towerofhanoi(n-1, from_rod,aux_rod,to_rod);
printf("move disk %d from rod %c to rod %c\n",n,from_rod,to_rod);

towerofhanoi(n-1,aux_rod,to_rod,from_rod);

}
int main()
{
int n=3;
towerofhanoi(n,'A','B','C');

    return 0;
}
