#include "graph.h"
#include "vertex.h"
#include <limits.h>
#include <stdbool.h>
#define INITIALGRAPHSIZE 10
using namespace std;
class MatrixDGraph:public DGraph{
    private:
        int maxSize;
        
        


    protected:
        bool makeGraphLargerByFactor(int curSize, float factor);
        int** adjacencyMatrix;
        int curNodes;
        int nodeCount;
    public:
        
            
        MatrixDGraph(){
            maxSize = INITIALGRAPHSIZE;
            try{
                      adjacencyMatrix = new int[maxSize][maxSize];
                      for(int i=0; i< maxSize; i++){
                          for(int j=0;j<maxSize;j++){
                              adjacencyMatrix[i][j]=INT_MAX;
                          }
                      }
                      curNodes = 0;
              }
              catch(std::bad_alloc& ba){
                      std::cerr << "Could not create graph.. Memory allocation issues \n\n" ;
                      throw ba;
              }
        }
        
        bool addNode(){
            if(curNodes==maxSize){
                cout<<"Size to be increased";
                makeGraphLargerByFactor(maxSize, 1.25f);
            }
            adjacencyMatrix[curNodes][curNodes] = 0;
            curNodes++;
        }

        bool deleteNode(int v){
            
            if (adjacencyMatrix[v][v] == 0)
            {
                for(int i=0;i<maxSize;i++ )
                {
                        adjacencyMatrix[v][i]=INT_MAX;
                        adjacencyMatrix[i][v]=INT_MAX;
                }
                nodeCount--;
                return true;
            }
            else
            {
              
              printf"Error... Node Doesn't Exist...";
                return false;
            }
        }
        
        bool isEmpty(){
            if(nodeCount==0)
                return true;
            return false;
        }
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
                return;
            }
            if(dest > nodeCount){
                cerr<<"Dest vertex not present";
                return;
            }
            adjacencyMatrix[source][dest] = INT_MAX;
        }

        int getSize(){
            return nodeCount;
        }        
        
    
};
bool MatrixDGraph::makeGraphLargerByFactor(int curSize, float factor){
    int newSize = factor*curSize;
    try{
        int** newadjacencymatrix = new int[newSize][newSize];
        int i,j;
        for(i=0;i<newSize;i++){
            for(j=0;j<newSize; j++){
                if(i>nodeCount || j>nodeCount)
                    newadjacencymatrix[i][j]= INT_MAX;
                else
                    newadjacencymatrix[i][j]= adjacencyMatrix[i][j];
            }
        }
            
        
    }catch(std::bad_alloc& ba){
        throw ba;
    }

    
}
