#include <iostream>
using namespace std;

void conquer(int arr[], int si, int mid, int ei){
    int mergedSize = ei - si + 1;
    int merged[mergedSize];
    int idx1 = si;
    int idx2 = mid + 1;
    int x = 0;

    while(idx1 <= mid && idx2 <= ei){
        if(arr[idx1] <= arr[idx2]){
            merged[x++] = arr[idx1++];
        }
        else{
            merged[x++] = arr[idx2++];
        }
    }

    while(idx1 <= mid){
        merged[x++] = arr[idx1++];
    }
    while(idx2 <= ei){
        merged[x++] = arr[idx2++];
    }

    for(int i=0, j=si; i < mergedSize; i++, j++){
        arr[j] = merged[i];
    }
}


void divide(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    divide(arr, si, mid);
    divide(arr, mid + 1, ei);
    conquer(arr, si, mid, ei);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    divide(arr, 0, n - 1);
    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}