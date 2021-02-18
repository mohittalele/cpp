//============================================================================
// Name        : maps.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// In map the key value are stored as a "pair"
#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string,int> ages  ;
	ages["jack"] = 	23 ;
	ages["jill"] =  45 ;
	ages["Sam"]  = 45  ;
	ages.insert(pair<string,int>("mohit",28));
	cout << ages["jack"] << endl ;
	cout << ages["Sam"]  << endl ;

	for(map<string,int>::iterator itr = ages.begin(); itr != ages.end(); itr ++){
		cout << itr->first << " age is " << itr->second << endl ;
	}
	return 0;
}
