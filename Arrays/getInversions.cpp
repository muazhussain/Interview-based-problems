// Problem link: https://www.codingninjas.com/codestudio/problems/count-inversions_615

#include <bits/stdc++.h> 

long long merge(long long* arr, int left, int mid, int right) {
    long long inv = 0;
    int i = left, j = mid + 1, k = 0;
    long long temp[right - left + 1];
    while(i <= mid && j <= right) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv += (long long) (mid - i + 1);
        }
    }
    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    while(j <= right) {
        temp[k++] = arr[j++];
    }
    for(i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
    return inv;
}

long long countInversion(long long* arr, int left, int right) {
    int inv = 0;
    if(left < right) {
        int mid = left + (right - left) / 2;
        inv += countInversion(arr, left, mid);
        inv += countInversion(arr, mid + 1, right);
        inv += merge(arr, left, mid, right);
    }
    return inv;
}

long long getInversions(long long *arr, int n){
    long long res = countInversion(arr, 0, n - 1);
    return res;
}
