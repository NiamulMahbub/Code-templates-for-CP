/*
Only works when n<=31. 
63 porjonto nite chaile long long nibo. 
Oitao na hoile recursion
*/
for (int i=0; i<(1<<n); i++)
{
    for (int j=0; j<n; j++)
    {
        if((i>>j)%2) cout<<a[j]<<" ";
    }
    cout<<"\n";
}
