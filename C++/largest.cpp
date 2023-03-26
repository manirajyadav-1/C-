#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    if(a>b && a>c){
        cout << "Largest No:" << a;
    }
    else if(b>a && b>c){
        cout << "Largest No:" << b;
    }
    else{
        cout << "Largest No:" << c;
    }
    

}