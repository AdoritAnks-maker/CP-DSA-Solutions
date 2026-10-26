#include<bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> size;

class dsu {
public:

    void make_set(int v) {
        parent[v] = v;
        size[v] = 1;
    }

    int find_set(int v) {
        if(v == parent[v]) {
            return v;
        }
        return parent[v] = find_set(parent[v]);
    }

    void unite(int a, int b) {
        a = find_set(a);
        b = find_set(b);

        if(a != b) {
            if(size[a] < size[b]) {
                swap(a, b);
            }

            parent[b] = a;
            size[a] += size[b];
        }
    }
};

int main(){
    int n, m;
    cin >> n >> m;

    parent.resize(n);
    size.resize(n);

    dsu d;

    for(int i = 0; i < n; i++){
        d.make_set(i);
    }

    vector<vector<int>> language(n);

    for(int i = 0; i < n; i++){
        int sz;
        cin >> sz;

        language[i].resize(sz);

        for(int j = 0; j < sz; j++){
            cin >> language[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){

            bool common = false;

            for(int x : language[i]){
                for(int y : language[j]){
                    if(x == y){
                        common = true;
                    }
                }
            }

            if(common){
                d.unite(i, j);
            }
        }
    }

    int components = 0;

    for(int i = 0; i < n; i++){
        if(d.find_set(i) == i){
            components++;
        }
    }
    bool anyone = false;

    for(int i = 0; i < n; i++){
        if(!language[i].empty()){
            anyone = true;
        }
    }

    if(!anyone){
        cout << n << endl;
    }
    else{
        cout << components - 1 << endl;
    }
}