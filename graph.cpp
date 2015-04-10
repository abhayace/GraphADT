#include <vector>

#include"graph.h"
#include "vertex.h"
bool graph::isEmpty(){
    if(nodes.size() == 0)
        return true;
    return false;
}

vertex graph::addNode(vertex node){
    nodes.push_back(node);
    
    
}