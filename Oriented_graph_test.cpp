#include <gtest/gtest.h>
#include <iostream>
#include <string>

#include <vector>
#include "C:\Users\user\Desktop\lab4_ppois\Oriented_graph.h"
using namespace std;
TEST(Test_Vertex, Vertex){
	OrientedGraph<int> graph;
    graph.AddVertex(8);
    graph.AddVertex(2);
    graph.AddVertex(5);
    graph.AddVertex(4);
    graph.AddVertex(1);
    graph.AddEdge(1, 2);
    graph.AddEdge(1, 4);
    graph.AddEdge(2, 8);
    graph.AddEdge(4, 8);
    graph.AddEdge(5, 8);

    EXPECT_EQ(graph.getVertexDegree(8),3);

    EXPECT_EQ(graph.getAmount_of_Verteces(), 5);


      graph.DeleteVertex(5);
      string expectedOutput = "(1, 4, 2)\n(4)\n(5)\n(2)\n";
      testing::internal::CaptureStdout();
      graph.printGraph();
      string output = testing::internal::GetCapturedStdout();

  
}

TEST(Test_Edge, Edges) {
    OrientedGraph<int> graph;
    graph.AddVertex(8);
    graph.AddVertex(2);
    graph.AddVertex(5);
    graph.AddVertex(4);
    graph.AddVertex(1);
    graph.AddEdge(1,2);
    graph.AddEdge(1,4);
    graph.AddEdge(2,8);
    graph.AddEdge(4,8);
    graph.AddEdge(5,8);

    EXPECT_EQ(graph.getAmmount_of_Edges(), 5);

    graph.DeleteEdge(1,2);

    string expectedOutput = "(1, 4)\n(4, 8)\n(5, 8)\n(2, 8)\n(8)";
    testing::internal::CaptureStdout();
    graph.printGraph();
    string output = testing::internal::GetCapturedStdout();



}

TEST(Test_Vertex_Iterator, Vertex_Iterator) {
    OrientedGraph<int> graph;
    graph.AddVertex(8);
    graph.AddVertex(2);
    graph.AddVertex(5);
    graph.AddVertex(4);
    graph.AddVertex(1);
    graph.AddEdge(1, 2);
    graph.AddEdge(1, 4);
    graph.AddEdge(2, 8);
    graph.AddEdge(4, 8);
    graph.AddEdge(5, 8);
    auto iter_vertex = graph.begin();
    auto iter_vertex2 = graph.begin();
    EXPECT_EQ(*iter_vertex, 8);
    EXPECT_EQ(iter_vertex==iter_vertex2,true);
    ++iter_vertex;
    EXPECT_EQ(iter_vertex != iter_vertex2, true);
    EXPECT_EQ(*iter_vertex, 2);
    iter_vertex = graph.end();
    --iter_vertex;
    EXPECT_EQ(*iter_vertex, 1);
    iter_vertex2 = graph.end_reverse();
    EXPECT_EQ(iter_vertex==iter_vertex2, true);


}
TEST(Test_Edge_Iterator, Edge_Iterator) {
    OrientedGraph<int> graph;
    graph.AddVertex(8);
    graph.AddVertex(2);
    graph.AddVertex(5);
    graph.AddVertex(4);
    graph.AddVertex(1);
    graph.AddEdge(1, 2);
    graph.AddEdge(1, 4);
    graph.AddEdge(2, 8);
    graph.AddEdge(4, 8);
    graph.AddEdge(5, 8);
    auto iter_edg = graph.begin_edges();
    auto iter_edg2 = graph.begin_edges();
    
    EXPECT_EQ(*iter_edg2,2);

    EXPECT_EQ(iter_edg == iter_edg2, true);
    ++iter_edg;
    EXPECT_EQ(iter_edg != iter_edg2, true);
    
    iter_edg= graph.end_edges();
    --iter_edg;
   


}
    
TEST(Test_IncidentEdge_Iterator, IncidentEdge_Iterator) {
    OrientedGraph<int> graph;
    graph.AddVertex(8);
    graph.AddVertex(2);
    graph.AddVertex(5);
    graph.AddVertex(4);
    graph.AddVertex(1);
    graph.AddEdge(1, 2);
    graph.AddEdge(1, 4);
    graph.AddEdge(2, 8);
    graph.AddEdge(4, 8);
    graph.AddEdge(5, 8);
    auto iter_edg = graph.begin_inc_edges(1);
    auto iter_edg2 = graph.begin_inc_edges(1);
    auto n = *iter_edg2;
    EXPECT_EQ(n.first, 1);
    ++iter_edg;
    EXPECT_EQ(iter_edg != iter_edg2, true);
    iter_edg = graph.end_inc_edges(1);
  
}

TEST(Test_AdjacentVertex_Iterator, AdjacentVertex_Iterator) {
    OrientedGraph<int> graph;
    graph.AddVertex(8);
    graph.AddVertex(2);
    graph.AddVertex(5);
    graph.AddVertex(4);
    graph.AddVertex(1);
    graph.AddEdge(1, 2);
    graph.AddEdge(1, 4);
    graph.AddEdge(2, 8);
    graph.AddEdge(4, 8);
    graph.AddEdge(5, 8);
    auto iter_vertex = graph.begin_adj(1);
    auto iter_vertex2 = graph.end_adj(1);
    
    EXPECT_EQ(*iter_vertex, 2);
    ++iter_vertex;
    EXPECT_EQ(*iter_vertex, 4);

}


    

