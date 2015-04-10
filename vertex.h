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
    
    string name;
    int indegree;
    int outdegree;
public:
    vertex(char* name);
    string getName();
};

#endif	/* VERTEX_H */

