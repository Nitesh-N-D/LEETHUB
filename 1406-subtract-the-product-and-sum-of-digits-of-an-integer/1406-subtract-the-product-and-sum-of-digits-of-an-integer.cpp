class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        int res;
        int t;
    while(n!=0)
    {
        t=n%10;
        n/=10;
        p*=t;
        s+=t;
    }
    res=p-s;
    return res;
        
    }
};