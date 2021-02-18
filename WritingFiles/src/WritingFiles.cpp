//============================================================================
// Name        : WritingFiles.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream outputfile ;
	string filename = "file.dat";
	outputfile.open(filename, ios::out);

	if(outputfile.is_open()){
		outputfile << "Hello World " << endl;
		outputfile << 123 << endl ;
		for(int i = 0 ; i < 50 ; i++){
			outputfile << " " << i << " " << endl ;
		}
		outputfile.close();
	}
	return 0;
}
