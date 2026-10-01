#include <iostream>
using namespace std;

int main()
{
    int n, start;
    int graph[10][10];
    int visited[10] = {0};
    int queue[10];
    int front = 0, rear = 0;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    queue[rear++] = start;
    visited[start] = 1;

    cout << "BFS Traversal: ";

    while (front < rear)
    {
        int current = queue[front++];

        cout << current << " ";

        for (int i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}
