# include <iostream.h>
# include <conio.h>
const int V = 4;
struct EdgeNode {
 int v;
 EdgeNode * next;
};
EdgeNode * adj[V];
int vis[V];

void addEdge (int u, int v) {
 EdgeNode * n = new EdgeNode;
 n->v = v;
 n->next = adj[u];
 adj[u] = n;
}

void dfsUtil (int u) {
 vis[u] = 1;
 cout << u << " ";
 for (EdgeNode * p = adj[u]; p; p = p->next) {
  if (!vis[p->v]) dfsUtil (p->v);
 }}

void dfs() {
 for (int i=0; i<V; i++) vis[i]=0;
 cout << "DFS: ";
 for (int j=0; j<V; j++) {
  if (!vis[j]) dfsUtil (j);
 }
 cout << "\n";
}

void main() {
 clrscr();
 for (int i=0; i<V; i++) adj[i] = NULL;
 addEdge (0,1); addEdge (0,2);
 addEdge (1,3); addEdge (2,3);
 dfs();
 getch();
}

Result:-
 Thus the program to perform depth-first Search (DFS) graph traversal using adjacency list is successfully created
