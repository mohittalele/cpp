#include <iostream>
#include <algorithm>
#include <vector>


using namespace std ;

int  main(){
    vector<int> v {1,7,10,10,10,8,7,4,2,14,2,4,5} ;
    v[3] = 100 ; 
    vector<int> sum1;
    int i = 0 ;

    for(vector<int>::iterator ptr = v.begin() ; ptr < v.end()-3 ; ptr ++){
        //sum1[i] = *ptr + * (ptr +1) + *(ptr + 2 )   ;
         sum1.push_back( *ptr + * (ptr +1) + *(ptr + 2 ) );
        i++ ;
    }

   
    for(int s : sum1 ){
        cout << s << " " ;  
    }
   
    // find the index of the maximum element 

    auto mi = find(sum1.begin(), sum1.end(), *max_element(sum1.begin(),sum1.end()))  - sum1.begin();
    int  m = *min_element(sum1.begin(), sum1.end()) ;   
    cout << mi << endl ;
    return 0 ;




}