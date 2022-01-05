// Find max 10 numbers in a list having 10M entries
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> s;
    while(n--){
        int a;
        cin>>a;
        s.insert(a);
        if(s.size()>100){
            s.erase(s.begin());
        }
    }
    for(auto x:s){
        cout<<x<<" ";
    }
}
