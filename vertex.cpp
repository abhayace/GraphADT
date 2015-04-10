
#include "vertex.h"

vertex::vertex(char* name){
    this->name = name;
        indegree = 0;
        outdegree = 0;
}

char* vertex::getName(){
    return this->name;
}
