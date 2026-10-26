#include<bits/stdc++.h>
using namespace std;
vector<int>graph[200005];
int d1[200005] , int d2[200005]
void dfs(int node, int parent , int dist , int d)
{
    d[node] = dist;
    for(int neigh : graph[node]){
        if(neigh==parent)continue;
        dfs(neigh, node, dist+1 , d)
    }
}
int main(){
    int n , x;
    cin >> n >> x;
    vector<vector<int>>graph;
    for(int i =  1 ; i<n;i++){
        int a , b ;
        cin >> a >> b ;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1,0,0,d1);
    dfs(x, 0, 0,d2);
    int ans  = 0;
    for(int i  = 1;i<=n;i++){
        if(d2[i] < d1[i]){
            ans  = max(ans , d1[i]);
        }
    }
    cout << 2*ans << endl ;
    return 0;
}