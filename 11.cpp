class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        int *ans = new int[2];
        unordered_map<int,int>mp;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[a[i]]>1)ans[0]=a[i];
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0)ans[1]=i;
        }
        return ans;
    }
};