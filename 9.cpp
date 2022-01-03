class Solution{
    public:
    string printMinNumberForPattern(string s){
        // code here
        deque<int>dq;
        int ct=1;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='D'){
                dq.push_back(ct);
                ct++;
            }else{
                dq.push_back(ct);
                ct++;
                while(!dq.empty()){
                    ans+=(char)('0'+dq.back());
                    dq.pop_back();
                }
            }
        }
        dq.push_back(ct);
        while(!dq.empty()){
            ans+=(char)('0'+dq.back());
            dq.pop_back();
        }
        return ans;
    }
}