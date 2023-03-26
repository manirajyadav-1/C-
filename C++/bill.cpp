#include<iostream>
using namespace std;

int main(){
    cout << "Enter the total no of items:";
    int n;
    cin >> n;
    float price,sum = 0;
    cout << "Enter price of items:";
    for(int i=0;i<n;i++){
        cin >> price;
        sum = sum + price;
    }
    cout << "Total sum of items:" << sum;
}