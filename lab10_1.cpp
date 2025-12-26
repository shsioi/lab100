#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int count[6] = {0,0,0,0,0,1};
 //Declare array count for counting A,B,C,D,F and initialize all element = 0
	
	char grade;
	
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	
	
	
	do{
		cout << "Student [" << count[5] << "]: ";
		
		cin >> grade; 
		
		if( grade == '0' ) {
		    
		    break;
		    
		    } //The loop must be terminated when grade = '0'
		
		
		
		if(grade == 'A'){ // if grade is A
			//Do something
			
			count[0]++;
			
			count[5]++;
		}
		
		else if(grade == 'B'){ // if grade is B
			//Do something
			
			count[1]++;
			
			count[5]++;
		}
		
		else if(grade == 'C'){ // if grade is C
			//Do something
			
			count[2]++;
			
			count[5]++;	
		    
		}
		
		else if(grade == 'D'){ // if grade is D
			//Do something
			
			count[3]++;
			
			count[5]++;	
		}
		
		else if(grade == 'F'){ // if grade is F
			//Do something
			
			count[4]++;
			
			count[5]++;	
			
		}else{ 
		    
		    
		    
		    cout << "Wrong input. Please input again.\n";
			//Do something
			
			
		}
		
	    }while(true);
	
	
	cout << "In total " << count[5]-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<" ";
	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}