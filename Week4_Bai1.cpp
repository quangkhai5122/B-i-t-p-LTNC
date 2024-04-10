#include <bits/stdc++.h>
using namespace std;

int equalizeArray(int arr[] , int n){
    int tempArr[100] = {0};
    for (int i=0 ; i<n ; i++){
        tempArr[arr[i]-1] ++;
    }
    int maxOftempArr = tempArr[0];
    for (int i=0 ; i<n ; i++){
        if(maxOftempArr < tempArr[i])
            maxOftempArr = tempArr[i];
    }
    return n - maxOftempArr;
}
int main()
{
    int n; cin >> n;
    int* arr = new int[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout << equalizeArray(arr , n);
    delete[] arr;
}
