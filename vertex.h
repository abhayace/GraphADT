/* 
 * File:   vertex.h
 * Author: ab-admin
 *
 * Created on 7 April, 2015, 9:39 AM
 */

#ifndef VERTEX_H
#define	VERTEX_H
#include<string>
class vertex{
    
    char name[20];
    int indegree;
    int outdegree;
public:
    vertex(char* name){
        this->name = name;
        indegree = 0;
        outdegree = 0;
    }
};

#endif	/* VERTEX_H */

