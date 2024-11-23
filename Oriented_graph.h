#pragma once
#include <iostream>
#include <vector>
using namespace std;

//реализация структуры Никлауса Вирта

template <typename T>
class OrientedGraph {
public:
    typedef class Vertex;
    typedef class Edge;


private:

    Vertex* Head; //Указатель на список вершин.
    Vertex* Tail; //Указатель на фиктивный элемент в конце списка вершин.
    int amount_of_edges;
    vector <Vertex*> vertices;
    vector <Edge*> edges;
   


public:

    class Vertex {
    public:

        T Key;    
        int Count;  //Количество предшественников (количество вершин, из которых в данную имеются ребра)
        Edge* Trail; //Указатель на список смежности (список ребер из данной вершины)
        Vertex* Next;//Указатель на следующую вершину в графе 
        Vertex() { Trail = NULL; Count = 0; Next = NULL; };
        vector <Edge*> incedges;
        vector <Vertex*> adj_verteces;


    };
    class Edge {
    public:
        Vertex* Id; //указатель на вершину, в котрую идет ребро
        Edge* Next;//указатель на следующее ребро в списке смежности (выходящее из той же вершины)
       
        Edge() 
       {
           Next = NULL;
       };
    };
    class VertexIterator
    {

        typename vector<Vertex*>::iterator current;
        typename vector<Vertex*>::iterator end;
    public:
        VertexIterator(typename vector<Vertex*>::iterator start, typename vector<Vertex*>::iterator end)
            : current(start), end(end) {}
        bool operator!=(const VertexIterator& other) const {
            return current != other.current;
        }
        bool operator ==(const VertexIterator& other) const {
            return current == other.current;
        }
        T& operator * () {
            return (*current)->Key;
        }

        VertexIterator& operator ++ () {
            if (current != end)
                current++;
            return *this;
        }
        VertexIterator& operator -- () {
           
                current--;
            return *this;
        }
    };
    class EdgeIterator
    {

        typename vector<Edge*>::iterator current_edge;
        typename vector<Edge*>::iterator end_edge;

    public:
        EdgeIterator(typename vector<Edge*>::iterator start, typename vector<Edge*>::iterator end)
            : current_edge(start), end_edge(end) {}

        bool operator!=(const EdgeIterator& other) const {
            return current_edge != other.current_edge;
        }

        bool operator==(const EdgeIterator& other) const {
            return current_edge == other.current_edge;
        }

        T& operator * () {
            return ((*current_edge)->Id)->Key;
        }

        EdgeIterator& operator ++ () {
            current_edge++;
            return *this;
        }

        EdgeIterator& operator --() {
            current_edge--;
            return *this;
        }
    };
    class IncidentEdgeIterator
    {

        typename vector<Edge*>::iterator current_edge;
        typename vector<Edge*>::iterator end_edge;
        T vertex;

    public:
        IncidentEdgeIterator(typename vector<Edge*>::iterator start, typename vector<Edge*>::iterator end, T& v)
            : current_edge(start), end_edge(end), vertex(v) {}


        bool operator!=(const IncidentEdgeIterator& other) const {
            return current_edge != other.current_edge;
        }

        pair <T, T> operator * () {
            return make_pair(vertex, ((*current_edge)->Id)->Key);

        }

        IncidentEdgeIterator& operator ++ () {
            ++current_edge;
            return *this;
        }
    };
    class AdjacentVertexIterator
    {

        typename vector<Vertex*>::iterator current;
        typename vector<Vertex*>::iterator end;
    public:
        AdjacentVertexIterator(typename vector<Vertex*>::iterator start, typename vector<Vertex*>::iterator end)
            : current(start), end(end) {}
        bool operator!=(const AdjacentVertexIterator& other) const {
            return current != other.current;
        }

        T& operator * () {
            return (*current)->Key;
        }

        AdjacentVertexIterator& operator ++ () {
            current++;
            return *this;
        }
    };

    OrientedGraph() {//Инициализация графа.
        Vertex* ref = new Vertex;
        Head = Tail = ref;
    }
    OrientedGraph(const OrientedGraph& graph) {
        Head = graph.Head;
        Tail = graph.Tail;
    }

    Vertex* FindVertex(T key) {
        Vertex* current_vertex = Head;

        while (current_vertex->Key != key) current_vertex = current_vertex->Next;
        if (current_vertex == Tail) 
            current_vertex = NULL;
        return current_vertex;
    }
    void AddVertex(T key) {
        Vertex* ref = new Vertex;
        ref->Next = Head;
        Head = ref;
        Head->Key = key;
        vertices.push_back(Head);


    }
    void AddEdge(T info_x, T info_y)
        //Добавление ориентированного ребра (дуги) (x,y) 
    {
        Vertex* vertex1, * vertex2;
        Edge* edge1;
        
        vertex1 = FindVertex(info_x);
        vertex2 = FindVertex(info_y);
        edge1 = new Edge;
        edge1->Id = vertex2;
        edge1->Next = vertex1->Trail;
        vertex1->Trail = edge1;
        vertex2->Count++;
        edges.push_back(edge1);
        vertex1->incedges.push_back(edge1);
        vertex1->adj_verteces.push_back(vertex2);
        vertex2->adj_verteces.push_back(vertex1);
      
    }
    int getAmount_of_Verteces() {
        return vertices.size();
    }
    int getAmmount_of_Edges() {
        return edges.size();
    }
    int getVertexDegree(T key)
    {
        Vertex* vertex = FindVertex(key);
        return vertex->Count;
    }
    void DeleteEdge(T key1, T key2)
    {
        Vertex* vertex1, *vertex2;
        Edge* edge1,* edge2;
        int Res; //Флаг наличия в графе данного ребра

        //Проверка существования ребра
        vertex1 = FindVertex(key1);
        vertex2 = FindVertex(key2);
        if ((vertex1 != NULL) && (vertex2 != NULL))
        {
            edge2 = vertex1->Trail;
            Res = 0;
            while ((edge2 != NULL) && (!Res))
                if (edge2->Id == vertex2)
                    Res = 1;
                else edge2 = edge2->Next;
            
                if (Res) {
                    if (edge2 == vertex1->Trail)
                    {
                        vertex1->Trail = (vertex1->Trail)->Next;
                        delete edge2;
                        vertex2->Count--;
                    }
                    else
                    {
                        edge1 = vertex1->Trail;
                        while (edge1->Next != edge2)
                            edge1 = edge1->Next;
                        edge1->Next = (edge1->Next)->Next;
                        delete edge2;
                        vertex2->Count--;
                    }
                }
                
        }
    }
    void DeleteVertex(T key)
    {
        Vertex* vertex1, * vertex2;
        Edge* edge1, * edge2;
        int other_vertex_key = 0;
        //Удаление всех дуг (x,y), оканчивающихся  в вершине с данными key.
        vertex1 = Head;
        while (vertex1 != Tail)
        {
            other_vertex_key = vertex1->Key;
            DeleteEdge(other_vertex_key, key);
            vertex1 = vertex1->Next;
        }

        //Удаление списка смежности вершины  key.
        vertex1 = FindVertex(key);
        
       
        edge1 = vertex1->Trail;
        while (edge1 != NULL)
        {
            edge2 = edge1;
            edge1 = edge1->Next;
            
            (edge2->Id)->Count--;
            delete edge2;
        }

        //Удаление вершины key из графа.
        vertex2 = Head;
        if (vertex2 == vertex1)
        {
            Head = Head->Next;
            delete vertex2;
        }
        else {
            while (vertex2->Next != vertex1)
                vertex2 = vertex2->Next;
            vertex2->Next = vertex1->Next;
            delete vertex1;
        }
    }
    void printGraph()
    {
        Vertex* current_vertex; 
        Edge* current_edge; 
        current_vertex = Head;
        while (current_vertex != Tail)
        {
           
                cout << "(" << current_vertex->Key;
                if (current_vertex->Trail != NULL)
                {
                    cout << ", ";
                }
                current_edge = current_vertex->Trail;
                while (current_edge != NULL)
                {
                    cout << (current_edge->Id)->Key;
                    if (current_edge->Next != NULL)
                        cout << ", ";
                    current_edge = current_edge->Next;
                }
                cout << ")";
                
                cout << "\n";
            current_vertex = current_vertex->Next;
        }
    }
    void FreeVerteces(Vertex* head, Vertex* tail)
    {
        if (head != tail)
        {
            FreeVerteces(head->Next, tail);
            delete head;
            head = NULL;
        }
    }
    void FreeEdges(Edge* edge)
    {
        if (edge != NULL)
        {
            FreeEdges(edge->Next);
            delete edge;
            edge = NULL;
        }
    }

   

    VertexIterator begin(){
        return VertexIterator(vertices.begin(), vertices.end());
    }
    VertexIterator end(){
        return VertexIterator(vertices.end(), vertices.begin());
    }
    VertexIterator end_reverse() {
        return VertexIterator(vertices.end()-1, vertices.begin());
    }

    EdgeIterator begin_edges() {
        return EdgeIterator(edges.begin(), edges.end());
    }
    EdgeIterator end_edges() {
        return EdgeIterator(edges.end(), edges.end());
    }

    IncidentEdgeIterator begin_inc_edges(T key) {
        Vertex* vertex;
            vertex = FindVertex(key);
       
         IncidentEdgeIterator iterator(vertex->incedges.begin(), vertex->incedges.end(), key);
        return iterator;

    }
    IncidentEdgeIterator end_inc_edges(T key) {
        Vertex* vertex = FindVertex(key);
       
        return IncidentEdgeIterator(vertex->incedges.end(), vertex->incedges.end(), key);
    }

    AdjacentVertexIterator begin_adj(T key) {
        Vertex* vertex = FindVertex(key);
        return AdjacentVertexIterator(vertex->adj_verteces.begin(), vertex->adj_verteces.end());
    }
    AdjacentVertexIterator end_adj(T key) {
        Vertex* vertex = FindVertex(key);
        return AdjacentVertexIterator(vertex->adj_verteces.end(), vertex->adj_verteces.end());
    }

    ~OrientedGraph() 
    { 
        Vertex* current_vertex= Head;
        while (current_vertex!= Tail)
        {
            FreeEdges(current_vertex->Trail); 
            current_vertex = current_vertex->Next;
        }
        FreeVerteces(Head, Tail);
        delete Tail;
    };

};