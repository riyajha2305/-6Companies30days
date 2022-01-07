class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int count,j,mx=0,n=arr.size();
        bool flag;
        for(int i=1;i<n;i++){
            j=i;
            count=1;
            flag=false;
            
            //increasing sequence
            while(j<n && arr[j]>arr[j-1]){
                count++;
                j++;
            }
            
            //decreasing sequence
            while(i!=j && j<n && arr[j]<arr[j-1]){
                count++;
                j++;
                flag=true;
            }
            
            //length is max or not
            if(i!=j && flag && count>=3){
                mx=max(mx,count);
                j--;
            }
            
            i=j;
        }
        return mx;
    }
};
