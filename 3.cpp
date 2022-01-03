class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int s=0,ans=0,len=0;
        long long p=1;
        for(int e=0;e<n;e++){
            p*=a[e];
            while(p>=k && s<e){
                p/=a[s];
                s++;
            }
            if(p<k){
               len=e-s+1;
               ans+=len;
            }
        }
        
        return ans;
    }
};