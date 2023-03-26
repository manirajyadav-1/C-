#include<iostream>
using namespace std;

int main(){
    cout << "Enter basic salary:";
    int basic_salary;
    float gross_salary;
    cin >> basic_salary;
    cout << "Enter designation:(Manager,Supervisor,Clerk):";
    string designation;
    cin >> designation;
    switch (designation[0])
    {
    case 'M':
    cout << "Gross salary of Manager:" << (gross_salary = basic_salary + basic_salary*1.5);
    break;
    case 'S':
    cout << "Gross salary of Supervisor:" << (gross_salary = basic_salary + basic_salary*1.25);
    break;
    case 'C':
    cout << "Gross salary of Clerk:" << (gross_salary = basic_salary + basic_salary*1.1);
    break;
    }
    return 0;
}