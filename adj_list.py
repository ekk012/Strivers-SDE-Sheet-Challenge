class GraphNode:
    def __init__(self, val) -> None:
        self.val = val

        self.adj_list = []  # List to store adjacent nodes
        self.visited = False  # For graph traversal algorithms
        
    def add_edge(self, node):
        """Add an edge to another node"""
        if node not in self.adj_list:
            self.adj_list.append(node)
            
    def remove_edge(self, node):
        """Remove an edge to another node"""
        if node in self.adj_list:
            self.adj_list.remove(node)
            
    def get_neighbors(self):
        """Return list of all adjacent nodes"""
        return self.adj_list

        
    def degree(self):
        """Return number of adjacent nodes"""
        return len(self.adj_list)
        
    def bfs(self):
        """Breadth-first search traversal starting from this node"""
        visited = set()
        queue = [self]
        result = []
        
        while queue:
            node = queue.pop(0)
            if node not in visited:
                visited.add(node)
                result.append(node.val)
                queue.extend(neighbor for neighbor in node.adj_list if neighbor not in visited)
                
        return result
        
    def dfs(self):
        """Depth-first search traversal starting from this node"""
        visited = set()
        result = []
        
        def dfs_helper(node):
            visited.add(node)
            result.append(node.val)
            for neighbor in node.adj_list:
                if neighbor not in visited:
                    dfs_helper(neighbor)
                    
        dfs_helper(self)
        return result
        
    def has_edge(self, node):
        """Check if there is an edge to the given node"""
        return node in self.adj_list

# Example usage:
node1 = GraphNode(1)
node2 = GraphNode(2) 
node3 = GraphNode(3)
node4 = GraphNode(4)

# Create edges
node1.add_edge(node2)
node1.add_edge(node3) 
node2.add_edge(node4)

# Test traversals
print(node1.bfs())  # Will print nodes reachable from node1
print(node1.dfs())  # Will print nodes reachable from node1