#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph(): DenseGraph(3) {
    }

    DenseGraph(int n_in): n(n_in) {
        for(int i=0;i<n_in;++i) for(int j=0;j<n_in;++j) adj[i][j] = 0; 
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) adj[i][j] = G.adj[i][j]; 
    }

    void AddEdge(int a, int b) {
        // Your code here
        adj[a][b] = 1;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        adj[a][b] = 0;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return adj[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph a(n);
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(adj[i][j]) a.adj[j][i] = 1;
        return a;
    }

protected:
    int n;
    bool adj[1000][1000];
};
#endif // __DENSE_GRAPH_H__
