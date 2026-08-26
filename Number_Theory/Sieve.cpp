/*
Main function e ekta vector vector<int>primes e eta shob 
prime store korbe until n
*/
void sieve(vector<ll>&primes, int n)
{
    vector<bool>is_prime(n+1, true); is_prime[0]=false; is_prime[1]=false;
    for (int i=2; i<=n; i++)
    {
        if(is_prime[i])
        {
            primes.push_back((ll)i);
            for (int j=2*i; j<=n; j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
}
