/*Sanidhya Singh
PRN-24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter first number: \n";
    cin >> a;
    cout<<"Enter second number: \n";
    cin >> b;
    int sum=a+b,subs=a-b,mult=a*b;
    float divi=a/b;
    cout<<"Addition: ";
    cout<<sum;
    cout<<"\nSubtraction: ";
    cout<<subs;
    cout<<"\nMultiplication: ";
    cout<<mult;
    cout<<"\nDivision: ";
    cout<<divi;
    return 0;
}

/*Output
Enter first number: 
20
Enter second number: 
30
Addition: 50
Subtraction: -10
Multiplication: 600
Division: 0
*/
