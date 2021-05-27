#include <iostream>
using namespace std ;


int CheckPalindrom( string  s1){
    
    //string s1 = "mohittalele" ;
    // get the two halves of the string
    string ss1 = s1.substr(s1.length()/2,s1.length()) ;
    string ss2 = s1.substr(0,s1.length()/2);
    // reverse the one half
    reverse(ss1.begin(),ss1.end()) ;
    if((ss1.compare(ss2)) == 0){
        cout << "palindrom detected :: " << s1 << endl ; 
        return 1 ;
    }else{
        return 0 ;
    }

}
int main(){

    string s = "mohittihomtalelepalindromabccbablabla4aa4" ;
    cout << s.length() << endl ;
    int size = 0 ;
    string ans  ;

    for(int l = 2 ; l < s.length()/2; l= l+2) // palindorm loop. 
    {
        for(int i = 0; i + l < s.length()+1 ; i++) // iterate over the string from start to end 
        {
            //cout << s.substr(i,l) << endl ;
            if (CheckPalindrom(s.substr(i,l))){
                if (size < l ){
                size = s.substr(i,l).length() ;
                ans = s.substr(i,l) ;
                }
            }
        }
    }

   if (size == 0 ){
       cout << "No palindrom detected" << endl ;
   }
   else{
        cout << "ans is ::" << ans << endl ; 
   }

    return 0 ;

}


