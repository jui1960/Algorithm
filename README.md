Graph Algorithms Learning Roadmap

This repository is designed to help learners understand **Graph Algorithms** step by step.


---

1️⃣ What is an Algorithm?
An Algorithm is a **step-by-step procedure** or set of instructions used to solve a problem.

2️⃣ Recommended Learning Path

  Step 1: Graph Basics
- Graph = **Nodes (vertices) + Edges**  
- Examples:  
  - Social networks (nodes = people, edges = friendships)  
  - Maps (nodes = cities, edges = roads)

---

  Step 2: Graph Traversal
- **BFS (Breadth-First Search)**  
  - Visits nodes **level by level**  
  - Uses a **queue**  
  - Helps find shortest path in unweighted graphs

- **DFS (Depth-First Search)**  
  - Visits nodes **deeply first**, then backtracks  
  - Uses a **stack or recursion**  
  - Useful for exploring all possible paths

> ✅ Master BFS & DFS first—they form the foundation for other graph algorithms.

---

 Step 3: Single Source Shortest Path
- **Dijkstra Algorithm**  
  - Finds shortest path in a **weighted graph**  
  - Cannot handle negative weights

- **Bellman-Ford Algorithm**  
  - Finds shortest path in a **weighted graph**  
  - Works even with **negative weights**  
  - Can also detect negative cycles

---

 Step 4: Maximum Flow
- **Ford-Fulkerson Algorithm**  
