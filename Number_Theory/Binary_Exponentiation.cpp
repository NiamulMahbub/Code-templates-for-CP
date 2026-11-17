ll binexp(ll a, ll b) 
{
    ll r = 1;
    while (b) 
    {
        if (b & 1) 
        {
            r *= a;
            r %= M;
        }
        a *= a;
        a %= M;
        b /= 2;
    }
    return r;
}
