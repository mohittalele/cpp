#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std ;

void printer(vector<int> v){
    for(int i : v){
        cout << i << "   " << flush  ;
    }
    cout << endl ;
}
int GenerateNumeber(string str){
    
    ////////////////////////////////////////////
    // Put the digits of strings into the vector   
    vector<int> v ;
    for ( auto c : str){
        v.push_back(c- '0') ;
        cout << c << "  " << flush ;
    }
    cout << endl ;
    cout << v[2]+v[3] << endl ; 
    // last digit of int 
    cout << 567 % 10 << " "<< endl ;
    cout << "\n\n" << flush;
    ////////////////////////////////////////////
    // Put the digits of int into the vector
    
    int x = 45689; 
    vector<int> n ;
    while(x>0){
        n.push_back(x%10) ;
        x = x/10 ;
        cout << x << " " <<endl ;
    }
    reverse(n.begin(), n.end());
    printer(n) ; 

    cout << "test" << endl;
    ////////////////////////////////////////////
    // Get the number of unique digits in the int 
    vector<int> vec {10,10,24,568,45,1,23,32,32,32,32,410} ; 

    // Method 1 
    set<int> s( vec.begin(), vec.end() );
    vec.assign( s.begin(), s.end() );
    cout << "unique element " <<  vec.size() << endl; 
    printer(vec) ;

    // Method 2 
    vector<int> vec1 {123456,14,15,15,14,9999} ; 
    sort( vec1.begin(), vec1.end() );
    vec1.erase( unique( vec1.begin(), vec1.end() ), vec1.end() );
    printer(vec1) ;

    ////////////////////////////////////////////
    // Slice the string 
    std::string str2="We think in generalities, but we live in details.";     // (quoting Alfred N. Whitehead)

    std::string str3 = str2.substr (3,5);     // "think" substr(position, length )


    // Convert the char into the string 
    char cAlphabet[] = {'a','b','c','d','e','f',
		'g','h','i','j','k','l','m','n','o','p',
		'q','r','s','t','u','v','w','x','y','z'};
    string str1 = cAlphabet ;
    cout << str1 << endl ;

    ///////////////////////////////////////////
    // Convert a string into the char array 
    string temp = "catmat";
    char tab2[1024];
    strncpy(tab2, temp.c_str(), sizeof(tab2));
    tab2[sizeof(tab2) - 1] = 0;
    cout << tab2 << endl ;
    cout << tab2[5] << endl ;
    
    ///////////////////////////////////////////
    /// map 
    map<string,int> first;
    first["a"]=10;
    first["b"]=20;
    first["b"]=100;
    cout << first["b"] << endl ;

    return 5 ;


    

}

int main (){
    string v = "0123456790" ;
     

    return GenerateNumeber(v) ;
}