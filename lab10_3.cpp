#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    
    int count = 0;
    double sum = 0;
    double mean;
    long double sdevia;
    long double mudeng = 0;
    
    string textline;
    
    
    ifstream source;
	source.open("score.txt");
	
	while (getline(source,textline)){
	    
	    sum += atof(textline.c_str());
	    count++;
	    
	    mudeng += pow(atof(textline.c_str()),2.0);
	    
	}
	
	mean = sum / count;
	sdevia = sqrt((mudeng / count) - pow(mean,2.0));
	
/*	if (stddevia < 0){
	    
	    stddevia = -stddevia;
	}
*/	

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean <<"\n";
    cout << "Standard deviation = " << sdevia ;
    
}