void BFS(int startVertex) {
        // Mark all vertices as not visited
        vector<bool> visited(V, false);

        // Create a queue for BFS
        queue<int> q;

        // Mark the current vertex as visited and enqueue it
        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            // Dequeue a vertex from the queue and print it
            int currentVertex = q.front();
            cout << currentVertex << " ";
            q.pop();

            // Get all adjacent vertices of the dequeued vertex
            // If an adjacent vertex has not been visited, mark it as visited
            // and enqueue it
            for (int neighbor : adj[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
