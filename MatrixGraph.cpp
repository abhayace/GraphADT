#include "graph.h"
#include "vertex.h"
#define INITIALGRAPHSIZE 10
using namespace std;
class MatrixDGraph:public DGraph{
    private:
        int maxSize;
        int curNodes;
        int** adjacencyMatrix;
        std::map <string, int> vertex_list;

        bool makeGraphLargerByFactor(int curSize, float factor);
    public:
        
            
        MatrixDGraph(){
            maxSize = INITIALGRAPHSIZE;
            try{
                      adjacencyMatrix = new int[maxSize][maxSize];
                      curNodes = 0;
              }
              catch(std::bad_alloc& ba){
                      std::cerr << "Could not create graph.. Memory allocation issues \n\n" ;
                      throw ba;
              }
        }
        
        bool addNode(vertex v){
            if(curNodes==maxSize){
                cout<<"Size to be increased";
                makeGraphLargerByFactor(maxSize, 1.25f);
            }
            
            
            curNodes++;
        }

        

        
        
    
};
