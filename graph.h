/* 
 * File:   graph.h
 * Author: ab-admin
 *
 * Created on 7 April, 2015, 9:32 AM
 */

#ifndef GRAPH_H
#define	GRAPH_H
class DGraph{
    public:
        virtual bool createGraph()=0;
        virtual bool addNode(vertex)=0;
        virtual void addEdge(vertex v1,vertex v2)=0;
        virtual bool isEmpty()=0;
        virtual bool hasEdge(vertex source, vertex dest)=0;
        virtual bool deleteNode(vertex v)=0;
        virtual bool deleteEdge(vertex src, vertex dst)=0;
        virtual int getSize()=0;
            
};


#endif	/* GRAPH_H */

