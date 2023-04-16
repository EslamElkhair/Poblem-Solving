#include <iostream>
#include <cstring>
using namespace std;

void swap_arrays(int* &a, int &n, int* &b, int &m) {
int* temp = a;
a = b;
b = temp;
int temp_size = n;
n = m;
m = temp_size;
}

int main() {
int a[] = {1, 2, 3};
int n = sizeof(a) / sizeof(a[0]);
int* ptr_a = a;

int b[] = {4, 5, 6, 7, 8};
int m = sizeof(b) / sizeof(b[0]);
int* ptr_b = b;



swap_arrays(ptr_a, n, ptr_b, m);

cout << "a: ";
for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
cout << endl;
cout << "b: ";
for (int i = 0; i < m; i++) {
    cout << b[i] << " ";
}
cout << endl;

return 0;
}
