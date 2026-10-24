# include <iostream.h>
# include <conio.h>
void swap (int &x, int &y) {
 int t = x; x = y ; y = t; }

void heapify (int a[], int n, int i) {
 int mx = i, l = 2 * i + 1, r = 2 * i + 2;
 if (l < n && a[l] > a[mx]) mx = l;
 if (r < n && a[r] > a[mx]) mx = r;
 if (mx != i) {
 swap (a[i], a[mx]);
 heapify (a, n, mx); } }

void heapsort (int a[], int n) {
 for (int i = n / 2 - 1; i >= 0; i--)
  heapify (a, n, i);
 for (int j = n - 1; j > 0; j--) {
  swap (a[0], a[j]);
  heapify (a, j, 0); } }

void main () {
 clrscr ();
 int a [] = {12, 11, 13, 5, 6, 7}, n = 6;
 heapsort (a, n);
 cout << "sorted : ";
 for (int i = 0; i < n; i++)
 cout << a[i] << " ";
 getch (); }
