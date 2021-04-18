int main()
{
 int t;
cin>>t;
while(t--)
{
   int n,m;
   cin>>n>>m;
   int a[n], b[n];
   unordered <int,int> map;
   for(int i=0 ; i<n ; i++)
   {
          cin>>a[i];
map[a[i]]++;
}

for(int j=0 ; j<m ; j++)
   {
          cin>>b[i];
map[b[i]]++;
}

cout<<map.size()<<endl;
}

