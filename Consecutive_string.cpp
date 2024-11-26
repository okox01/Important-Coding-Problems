#include <bits/stdc++.h>
using namespace std;
bool isSingleSegment(const string&s){
    int firstone=s.find('1');
    int lastone=s.rfind('1');// searching from end of the string '1'
    if(firstone == string::npos){ //is there ix no '1' in the string [npos : no position or index]
        return false;
    }
    for(int i=firstone;i<=lastone;i++){
        if(s[i]!='1'){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(isSingleSegment(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}