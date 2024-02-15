import heapq

def dijkstra(graph, source, destination):
    # Initialize distances to all nodes as infinite, except the source node
    distances = {node: float('inf') for node in graph}
    distances[source] = 0
    
    # Priority queue to store nodes to visit next
    pq = [(0, source)]
    
    # Dictionary to keep track of the shortest path
    previous = {}
    
    while pq:
        # Pop the node with the smallest distance from the priority queue
        current_distance, current_node = heapq.heappop(pq)
        
        # If we have already found a shorter path to the current node, skip it
        if current_distance > distances[current_node]:
            continue
        
        # Explore neighbors of the current node
        for neighbor, weight in graph[current_node]:
            distance = current_distance + weight
            # If this path is shorter than the previously known shortest path to the neighbor
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                previous[neighbor] = current_node
                # Add this neighbor to the priority queue
                heapq.heappush(pq, (distance, neighbor))
    
    # Reconstruct the shortest path
    path = []
    current = destination
    while current in previous:
        path.insert(0, current)
        current = previous[current]
    path.insert(0, source)
    
    return path, distances[destination]

def print_graph(graph):
    for node, neighbors in graph.items():
        print(f"Node {node}:")
        for neighbor, weight in neighbors:
            print(f"  -> {neighbor} (weight: {weight})")

if __name__ == "__main__":
    # Example adjacency list representation of the graph
    adjacency_list = {
        'A': [('B', 5), ('C', 3)],
        'B': [('C', 1), ('D', 3)],
        'C': [('D', 1)],
        'D': [('E', 2)],
        'E': []
    }

    print("Complete Graph:")
    print_graph(adjacency_list)

    source_node = 'A'
    destination_node = 'E'

    shortest_path, shortest_distance = dijkstra(adjacency_list, source_node, destination_node)
    print(f"\nShortest path from {source_node} to {destination_node}: {shortest_path}")
    print(f"Shortest distance: {shortest_distance}")
