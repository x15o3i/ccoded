#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, sum,mult,quo,sub;
    
    cout << "Enter first number: ";
    cin >> Num1;
    
    cout << "Enter second number: ";
    cin >> Num2;
    
    cout << "First number and Second number are"  << Num1 <<" " <<Num2 <<"respectively";
    
    sum = Num1 + Num2; // Adding Num1 and Num2
    mult= Num1 * Num2;
    quo= Num1/Num2;
    sub= Num1 - Num2;
    
    cout << "The sum of " << Num1 << " and " << Num2 << " is " << sum << endl;
    
     cout << "The product of " << Num1 << " and " << Num2 << " is " << mult << endl;
     
      cout << "The sub of " << Num1 << " and " << Num2 << " is " << sub << endl;
      
       cout << "The Quotient of " << Num1 << " and " << Num2 << " is " << quo << endl;
    
    return 0;
}

