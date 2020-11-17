#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int getBit(int pos, int n){
    return ((n & (1<<pos)) != 0);
}

int result=0;

int unique(int arr[], int n){
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << unique(arr, n);
    return 0;
}