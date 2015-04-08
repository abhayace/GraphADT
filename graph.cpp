#include <vector>

#include"graph.h"
#include "vertex.h"
bool graph::isEmpty(){
    if(nodes.size() == 0)
        return true;
    return false;
}
