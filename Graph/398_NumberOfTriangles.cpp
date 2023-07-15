/*https://www.youtube.com/watch?v=2Fb0kPngzMw&list=PLDdcY4olLQk066ysRibhoGd3UzGr0XSQG&index=26&ab_channel=Yogesh%26Shailesh%28CodeLibrary%29

https://www.geeksforgeeks.org/number-of-triangles-in-directed-and-undirected-graphs/
*/
#include <iostream>

using namespace std;

int main()
{
    int V = 4;
    int graph[][V] = { {0, 1, 1, 0},
                        {1, 0, 1, 1},
                        {1, 1, 0, 1},
                        {0, 1, 1, 0} };
    bool isDirected = false;
    int count_Triangle = 0;
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            for(int k = 0; k < V; k++){
                if(graph[i][j] and graph[j][k] and graph[k][i])
                    count_Triangle++;
            }
        }
    }
    if(isDirected)  count_Triangle /= 3;
    else count_Triangle /= 6;
    
    cout<<count_Triangle<<endl;

    return 0;
}
