#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> vec){
    for(vector<int>::iterator it=vec.begin();it!=vec.end();++it)
        cout << *(it) << " " ;
}
int main(){
    int size ;
    cin >> size ;
    int arr[size] ;
    cin >> arr[0] ;
    int max = arr[0] ;
    for(int i=1;i<size;i++){
        cin >> arr[i] ;
        max = (max > arr[i])?max:arr[i];
    }
    int count = 0;
    for(int i=0;i<size;i++)
        if(max==arr[i]) count++;
    vector<int> vec ;
    if(count==1){
        for(int i=0;i<size;i++)
            if(max!=arr[i]) vec.push_back(arr[i]) ;
    }
    else{
        int third = 0;
        for(int i=0;i<size;i++){
            if(arr[i]==max){
                third++;
                if(third==3)    continue ;
                vec.push_back(arr[i]);
            }
            else{
                vec.push_back(arr[i]);
            }
        }
    }
    print_vec(vec);
    cout << endl ;
    return 0;
}