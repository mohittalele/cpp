#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void printer(vector<int> * vec){
    for(int i : (*vec)){
        cout << i << "  "  ;
    }
    cout << "\n" ;
}

int main(){
    vector<int> vec1(10) ;
    for (int i = 0 ; i < 10 ; i++) {
        vec1[i] = i*13 ;
    }
    printer(&vec1) ;
    vector<int> vec2 {13,2,43,23,54} ;
    vector<int> vec3 {78,78,78,78} ;
    vec1.insert(vec1.begin(),vec2.begin(),vec2.end()) ; 

    printer(&vec1) ;


    // Sort the given vector 
    sort(vec1.begin(),vec1.end()) ;
    printer(&vec1) ;


    //reverse the vector 
    reverse(vec1.begin(),vec1.end()) ;
    printer(&vec1) ;

    // max element in the range 
    // max_element() returns the pointer to the element 
    cout << *max_element(vec1.begin(), vec1.end()) << endl ;
    
    // min element in the range 
    cout << *min_element(vec1.begin(), vec1.end())  << endl ;


    // Count the occurance of the number 
    vec1.insert(vec1.end(), vec3.begin(), vec3.end()  ) ; 
    cout << count(vec1.begin(),vec1.end(), 78)  << endl ;

    // find returns pointer to the  first occurance of the element in the vector
    find(vec1.begin(),vec1.end(),78) ;

    // how to get the index of the particluar element in the vector 
    int value = 91 ;
    int index = find(vec1.begin(), vec1.end(),91) - vec1.begin() ; 
    cout << "Index of value " << value << " is " << index << endl ;

    // get the index of the maximum value in the vctor 

    cout << " Index of the maximum value is " << find(vec1.begin(),vec1.end() , *max_element(vec1.begin(),vec1.end())) - vec1.begin() << endl ;

    // Check if the particular element exists in the vector or not 

    cout << "Element " << 20 << "exits in the element ? -> " << binary_search(vec1.begin(),vec1.end(),39) << endl ; 

    return 0; 
}