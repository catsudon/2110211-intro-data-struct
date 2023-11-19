#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include<bits/stdc++.h>
using namespace std;

class SparseGraph{
public:
    SparseGraph(): n(3), e(3) {}

    SparseGraph(int n_in) : n(n_in), e(n_in) {}

    SparseGraph(const SparseGraph& G) : n(G.n), e(G.e) {}

    void AddEdge(int a, int b) {
        e[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        e[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        return e[a].find(b) != e[a].end();
    }

    SparseGraph Transpose() const {
        SparseGraph temp(n);

        for(int i=0;i<n;++i) 
            for(auto it:e[i]) 
                temp.AddEdge(it, i);
        return temp;
           
    }

protected:
    int n;
    vector<set<int> > e;

};
#endif // __SPARSE_GRAPH_H__

