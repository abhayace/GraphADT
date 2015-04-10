#include <limits.h>
#include "undirected_graph.h"

class MatrixUDGraph:public UDGraph,public MatrixDGraph{
    void addEdge(int source,int dest,int weight=1){
    if(source > nodeCount){
                cerr<<"Src vertex not present";
                return;
            }
            if(dest > nodeCount){
                cerr<<"Dest vertex not present";
                return;
            }
            adjacencyMatrix[source][dest]=weight;
    }
    bool deleteEdge(int source, int dest){
            if(source > nodeCount){
                cerr<<"Src vertex not present";
                return false;
            }
            if(dest > nodeCount){
                cerr<<"Dest vertex not present";
                return false;
            }
            adjacencyMatrix[source][dest] = INT_MAX;
            adjacencyMatrix[dest][source] = INT_MAX;
        }
    

};
