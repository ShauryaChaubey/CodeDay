#include <bits/stdc++.h>

using namespace std;

int tsp(int n, int graph[][5], int s)
{
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if(i != s) v.push_back(i);
    }
    int minPath=INT_MAX;
    do{
        int temp=0;
        int k=s;
        for(int i=0; i<v.size(); i++)
        {
            temp += graph[k][v[i]];
            k = v[i];
        }
        temp += graph[s][k];
        minPath = min(minPath, temp);
        
    } while(next_permutation(v.begin(), v.end()));
    
    return minPath;
}
int main()
{
    int n;
    cin >> n;
    int graph[5][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> graph[i][j];
        }
    }
    cout << tsp(n, graph, 0);
}
