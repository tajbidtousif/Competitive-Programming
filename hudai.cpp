#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+10; 
vector<int>G[N];
int bool vis[N];

int bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source] = 1;

    while(!q.empty())
    {
        int c_vers = q.front();
        
    }
}

int main()
  {
    int n;
    cin >> n;

    for(int i=0; i<n-1; i++)
     {
        int x,y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
     }

     bfs(1);
        

}