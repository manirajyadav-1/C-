#include<iostream>
using namespace std;

int main(){
    cout << "Enter a no.:";
    int n;
    cin >> n;
    int first_num = 0;
    int second_num = 1;
    int next_num = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i==1){
            cout << first_num << " ";
            continue;
        }
        if(i==2){
            cout << second_num << " ";
            continue;
        }
        next_num = first_num + second_num;
        first_num = second_num;
        second_num = next_num;

        cout << next_num << " ";   
    }
    return 0;
    
}