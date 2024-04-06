#include<iostream>
using namespace std;

	int add(int a, int b){ //function name is add and it is a user defined function.
	return a+b;
	}

	int subtract(int a, int b){
		return a-b;
	}
	
		int quotient(int a, int b){
		return a/b;
	}
	
		int multiplication(int a, int b){
		return a*b;
	}
		int mod (int a, int b){
			return a%b;
		}
	
int main(){
	int num1, num2,sum;
	cout << "Enter first integer:";
	cin >> num1;
	
	cout << "Enter second integer:";
	cin >> num2;
	
	
	
	 cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1,num2) << endl;//endl is to move to a new line or /n
     
      cout << "The sub of " << num1 << " and " << num2 << " is " << subtract(num1,num2)  << endl;
      
      cout << "The product of " << num1 << " and " << num2 << " is " << multiplication(num1,num2) << endl;
      
       cout << "The Quotient of " << num1 << " and " << num2 << " is " << quotient(num1,num2)  << endl;
       
       cout << "The modulus of " << num1 << " and " << num2 << " is " << mod(num1,num2) << endl;
    
	
	return 0;
}
