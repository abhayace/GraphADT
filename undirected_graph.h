/* 
 * File:   undirected_graph.h
 * Author: ab-admin
 *
 * Created on 8 April, 2015, 3:36 PM
 */

#ifndef UNDIRECTED_GRAPH_H
#define	UNDIRECTED_GRAPH_H

class UDGraph:public DGraph{
     virtual void addEdge(vertex v1,vertex v2)=0;
     virtual bool deleteEdge(vertex src, vertex dst)=0;
};

#endif	/* UNDIRECTED_GRAPH_H */

