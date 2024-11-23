// lab4_ppois.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Oriented_graph.h"

int main()
{
    int key = 1;
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
    cout << graph.getVertexDegree(8);

    /*for ( auto it =graph.end_reverse(); ;  --it)
    {
           
            if (it == graph.begin()) {
                cout << *it << "\n";
                break;
            }
            else
                cout << *it << "\n";

         }
    
    for (auto it = graph.begin(); it != graph.end(); ++it)
    {
        cout << *it << "\n";
    }*/

    /* for (auto it = graph.begin_inc_edges(1); it != graph.end_inc_edges(1); ++it)
     {
         auto edge = *it;
         cout << "<"<<edge.first<<", " << edge.second << ">" << "\n";
     }*/
 
     

   // cout << graph.getAmount_of_Verteces();
//     for (auto it = graph.begin_adj(1); it != graph.end_adj(1); ++it)
//        {
//           
//            cout << *it;
//        }
//}}}}
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
