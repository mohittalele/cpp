//============================================================================
// Name        : ReadingFiles.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : reading fies C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;


//	 fstream object is overloaded for the boolean case.
//	 therfore the below if conditions check if the parsor
//	 is at the end of the file
//	while(inputfile ) is indenticle to while(inputfile.eof())

int main() {

	fstream inputfile ;

	string filename = "text.dat";

	inputfile.open(filename,ios::in);

	// Using operator overloading for the inputfile
	if(inputfile.is_open()){
		while(inputfile){
			string line ;
			getline(inputfile,line);
			cout << line << endl ;
		}
		inputfile.close();
	}
	else{
		cout << "Cannot open the file " << filename << endl ;
	}

	return 0;
}
