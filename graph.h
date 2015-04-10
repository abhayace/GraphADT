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
        virtual bool addNode()=0;
        virtual void addEdge(int,int,int)=0;
        virtual bool isEmpty()=0;
        virtual bool hasEdge(int, int)=0;
        virtual bool deleteNode(int)=0;
        virtual bool deleteEdge(int, int)=0;
        virtual int getSize()=0;
    
            
};


#endif	/* GRAPH_H */

