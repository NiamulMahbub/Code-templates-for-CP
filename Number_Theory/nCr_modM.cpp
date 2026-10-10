// call C(n,r) to calculate (nCr)%M and run pre() in the beginning of main
const ll N = 2e5+7;

ll power(ll a, ll p) 
{
    if (p == 0) return 1;

    ll ans = power(a, p/2);
    ans = (ans * ans)%M;
    if (p%2) ans = (ans*a)%M;

    return ans;
}


ll fac[N], invfac[N];

void pre() 
{
    fac[0] = 1;
    for(ll i=1; i<N; i++)  fac[i] = (i*fac[i-1])%M;

    invfac[N-1] = power(fac[N-1], M-2);

    for (ll i=N-2; i>=0; i--)  invfac[i] = (invfac[i+1]*(i+1))%M;
}

ll C(ll n, ll r) 
{
    if (r<0 || r>n) return 0;

    ll denom = (invfac[r]*invfac[n-r])%M;

    return (fac[n]*denom)%M;
}

ll P(ll n, ll r) 
{
    if (r<0 || r>n) return 0;

    return (fac[n]*invfac[n-r])%M;
}
