#include<bits/stdc++.h>
using namespace std;
bool all_nine(string s){
    long long int nines = 0 ;
    for(long long int i=0;i<s.length();i++)
        if(s[i]=='9')   nines++;
    return (nines == s.length())? 1 : 0 ; 
}
int main(){
    string num ;
    cin >> num ;
    if(all_nine(num))    cout << num.length()+1 << endl ;
    else cout << num.length() << endl ;
    return 0;
}