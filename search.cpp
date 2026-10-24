# include <iostream.h>
# include <conio.h>
struct Node {
 int d;
 Node * l, * r;
};

Node * Create (int v) {
 Node * n = new Node;
 n->d = v ; n->l = NULL ; n->r = NULL;
 return n; }

void inorder (Node *r) {
 if (!r) return;
 inorder (r->l);
 cout << r->d << " ";
 inorder (r->r); }

void preorder (Node *r) {
 if (!r) return;
 cout << r->d << " ";
 preorder (r->l);
 preorder (r->r); }

void postorder (Node *r) {
 if (!r) return;
 postorder (r->l);
 postorder (r->r);
 cout << r->d << " "; }
void main () {
 clrscr();
 Node * root = create (1) ;
 root->l = create (2) ;
 root->r = create (3) ;
 root->l->l = create (4) ;
 cout << "preorder : " ; preorder (root);
 cout << "\n Inorder : " ; inorder (root);
 cout << "\n postorder : " ; postorder (root);
 cout << "\n" ;
 getch () ;
}
