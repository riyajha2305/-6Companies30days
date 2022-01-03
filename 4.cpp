string encode(string src)
{
    string ans="";
    int ct=0,j=0,i=0;
    while(src.length()>j){
        while(src[i]==src[j])j++;
        ans+=src[i]+to_string(j-i);
        i=j;
    }
    return ans;
    
}   