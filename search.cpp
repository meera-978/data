# include <iostream.h>
# include <conio.h>
struct Node {
 int k;
 Node * l, *r;
};
Node * ins (Node * r, int v) {
 if (!r) {
 Node * n = new Node;
 n->k = v; n->l = NULL; n->r = NULL;
 return n; }
 if (v < r->k) r->l = ins(r->l, v);
 else if (v > r->k) r->r = ins(r->r, v);
 return r;
}
Node * minN (Node * n) {
 while (n && n->l) n = n->l;
 return n; }
Node * del (Node * r, int v) {
 if (!r) return NULL;
 if (v < r->k) r->l = del (r->l, v);
 else if (v > r->k) r->r = del (r->r, v);
 else {
 if (!r->l) {
 Node * t = r->r; delete r; return t;
 }
if (!r->r) {
 Node * t = r->l; delete r; return t;
}
Node * t = minN(r->r);
r->k = t->k;
r->r = del (r->r, t->k);
}
return r; }
int search (Node * r, int v) {
 if (!r) return 0;
 if (r->k == v) return 1;
 if (v < r->k) return search(r->l, v);
 return search(r->r, v); }
void disp (node * r) {
 if (!r) return;
 disp(r->l);
 cout << r->k << " ";
 disp(r->r);
}
void main () {
 clrscr();
 Node * root = NULL;
 int a[] = {50, 30, 70, 20, 40}
 for (int i=0; i<5; i++)
 root = ins(root, a[i]);
 cout << "BST: "; disp(root); cout << "\n";
cout << "Find 30: "
<< (search(root,30)? "Yes : "No")
<< "\n";
root = del (root, 30);
cout << "After Del : "; disp(root);
cout << "\n";
getch();
}
