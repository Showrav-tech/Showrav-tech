#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {

        vector<int> vis(V, 0);
        vector<int> bfs;
        queue<int> q;

        vis[0] = 1;
        q.push(0);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            bfs.push_back(node);

            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        return bfs;
    }
};
int main()
{
    int V = 5;
    vector<int> adj[V];

    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    Solution obj;
    vector<int> bfs = obj.bfsOfGraph(V, adj);

    for (auto x : bfs)
        cout << x << " ";

    return 0;
}
