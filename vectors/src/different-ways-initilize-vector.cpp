#include <iostream>
#include <vector>

using namespace std ;

void printer( const vector<int> & vec){
    for(int i : vec){
        cout << i << "  " ;
    }
    cout << "\n" ;
}

void printer1(const vector<int> * vec){
    for(int i : (*vec)){
       cout << i << "  " ;
    }
    cout << "\n" ;
}

int main()
{   
    //  Method 1 : uniform initialization 
    vector <int> vec1 {1,2,3,4,5} ;
    printer(vec1) ;
    printer1(&vec1);

    // Method 2 : fill vector with same value 
    int n = 3 ;
    int value = 10 ;
    vector <int> vec2(n) ;
    printer1(&vec2) ;


    // Method 3 : from another vector  
    vector<int> vec3 (vec1.begin(),vec1.end());
    printer1(&vec3) ;

    // Method 4 : initialise with some slice of another vector 
    vector<int> vec4 (vec1.begin() + 1 , vec1.end() -1) ;
    printer1(&vec4);

    // Method 5 : fill the vector after its created 
    fill(vec1.begin(),vec1.end(), 33) ;
    printer1(&vec1) ;
    vec1.insert(vec1.begin()+2,25);
    vec1.insert(vec1.end(), 100) ;
    printer1(&vec1) ;
    return 0 ;
}













