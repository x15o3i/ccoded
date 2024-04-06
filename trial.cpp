#include<iostream>
using namespace std;

int grade(int x,int y,int z){
	if (x>70 && x < 100 )
	return "A";
	
	if (x>60 && x < 69 )
	return "B";
	
	if (x>50 && x < 59 )
	return "C";
	
	if (x>40 && x < 49 )
	return "Fail";
	
}

	int main(){
		int  course1, course2,course3;
		
		cout << "Enter total for first course";
		cin >> course1;
		
		cout << "Enter total for second course";
		cin >> course2;
		
		cout << "Enter total for third course";
		cin >> course3;
		
		cout << "Your score for course 1 is " << grade(course1,course2,course3) << endl;	
		
			cout << "Your score for course 2 is " << grade(course1,course2,course3) << endl;	
			
				cout << "Your score for course 3 is " << grade(course1,course2,course3) << endl;
					
			return 0;
	}
