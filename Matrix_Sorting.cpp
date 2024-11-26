#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
    }
    }
    vector<int>flat;
    for(const auto&row:matrix){
        flat.insert(flat.end(),row.begin(),row.end());
    }
    sort(flat.begin(),flat.end(),greater<int>());
    int indx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=flat[indx++];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}