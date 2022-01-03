class Solution {
    int mod=1000000007;
    int *mem;
    void init(int n){
        mem = new int [n+1];
        for(int i=0; i<n+1; i++){
            mem[i]=-1;
        }
        mem[0]=1;
    }
    int count(string s, int n){
        //cout<<n<<"\n";
        if(mem[n]!=-1)return mem[n];
        if(n==1){
            if(s[0]=='0')mem[n]=0;
            else mem[n]=1;
        }
        if(s[0]=='0')mem[n]=0;
        else if(s[0]>='3' || (s[0]=='2' && s[1]>'6')){
            if(mem[n-1]==-1)mem[n-1]=count(s.substr(1,n-1),n-1)%mod;
            mem[n]=mem[n-1];
        }
        else {
            if(mem[n-1]==-1)mem[n-1]=count(s.substr(1,n-1),n-1)%mod;
            if(mem[n-2]==-1)mem[n-2]=count(s.substr(2,n-2),n-2)%mod;
            mem[n]=(mem[n-1]+mem[n-2])%mod;
        }
        return mem[n];
    }
	public:
		int CountWays(string str){
		    // Code here
		    int n=str.size();
		    init(n);
		    return count(str,n);
		}

};