/* 
 * File:   graph.h
 * Author: ab-admin
 *
 * Created on 7 April, 2015, 9:32 AM
 */

#ifndef GRAPH_H
#define	GRAPH_H
class graph{
    private:
        std::vector<vertex> nodes;
        bool weighted;
    
    public:
        bool createGraph();
        bool addNode();
        virtual void addEdge(vertex v1,vertex v2)=0;
        bool isEmpty();
        virtual bool hasEdge(vertex source, vertex dest,int cost=1)=0;
        virtual bool deleteNode(vertex v)=0;
        virtual bool deleteEdge(vertex src, vertex dst)=0;
            
};


#endif	/* GRAPH_H */

