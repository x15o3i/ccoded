#include<iostream>
using namespace std;

	int main(){
	double x = 0.1; // initial value of x0
    int i, iterations;
    
    cout << "Enter number of iterations---->";
    
    cin >> iterations;
    
    for (i=0; i < iterations; i++){
    	x = x * x + 0.16;
    	cout << "x" << i + 1 << " = " << x << endl;
	}
	return 0;
	}
