//program to store and display values

#include<iostream>
using namespace std;

int main() {
	int numbers [5],i,total=0,average;
    //int marks[5], i;

	cout << "Input your values" << "\n";
	
	cout <<"\n";
	
    for (i = 0; i < 5; ++i) { //i is the index
    	
    	cout<<"Value" <<" "<< i+1<< ":";
        cin >> numbers[i];
        total = total + numbers[i];
       
    }
     	average = total/5;
		
		cout <<"\n";
		
		//display values 
		 for (i = 0; i < 5; ++i) { //i is the index
        cout << "num [" << i << "] = " << numbers[i] << "\n";
        
       
    }
     cout <<"\n";
     cout << "Your toatal is " << total <<"\n";
      cout << "Your Average is " << average;
    
		
    return 0;
}

