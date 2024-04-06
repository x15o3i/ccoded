#include<iostream>
using namespace std;
	int larger(int x, int y, int z){
		if (x>y && x>z)
		return x;
		
		else if (y>x && y>z)
		return y;
		
		else 
		return z;
	}
	
	int main(){
		int num1,num2,num3;
		
	cout << "Enter first integer:";
	cin >> num1;
	
	cout << "Enter second integer:";
	cin >> num2;
	
	cout << "Enter third integer:";
	cin >> num3;
	
	cout << "The largest between the of " << num1 << "," <<num2 << " and " << num3 << " is " << larger(num1,num2,num3) << endl;
	
	return 0;
	}
