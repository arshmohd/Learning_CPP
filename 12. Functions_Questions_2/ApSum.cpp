#include<iostream>

using namespace std;

void Calculate(int number){
    int sum;
    sum = (number*(number+1))/2;
    cout << sum;
}

int main(){
    cout << "This program will print he sum of all the numbers up to a given number\n ";
    cout << "Enter your number: ";
    int n;
    cin >> n;

    Calculate(n);
    return 0;
}