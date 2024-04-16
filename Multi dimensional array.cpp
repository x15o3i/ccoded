//multi dimensional arrays

// x[3][4] 3 (first bracket) is for row and 4(second bracket) is for column 2d array

//x[3][4][5] 3 first bracket rep the number of arrays, 4 second bracket rep number of rows, 5 last bracket rep number of columns for 3d array

//initializing it is like int x[2][3]= {{1,3,0} {1,5,9}}
#include<iostream>
using namespace std;

	int main(){
		int x[3][3]= {{1,2,3},{3,4,5},{5,6,7}};
		int i,j;
		
		for(i=0; i<3; i++) {
			
			cout << "\n";
			
			for(j=0;  j<3; j++) {
				
				cout << "\n";
				
				// to print with postioning
				 cout << "x[" << i <<"][" << j << "]" << x[i][j];
				 
				 //to print out as a matrix
				 cout << x[i][j]<<"\t";
			}
		}
		return 0;
	}
