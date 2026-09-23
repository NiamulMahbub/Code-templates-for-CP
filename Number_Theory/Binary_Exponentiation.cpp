ll M=1e9+7;

ll binexp(ll base, ll exp)
{
    if(exp==1) return base%M;
    if(exp==0) return 1;
    if(exp%2)
    {
        return ((binexp(base, 1)%M)*(binexp(base, exp-1)%M))%M;
    }
    else
    {
        return ((binexp(base, exp/2)%M)*(binexp(base, exp/2)%M))%M;
    }
}
