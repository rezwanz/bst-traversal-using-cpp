#include <bits/stdc++.h>
using namespace std;

char info[10] = {'A', 'B', 'C', 'D', 'E', 'F'};
int leftIndex[10] = {1, 3, 5, -1, -1, -1};
int rightIndex[10] = {2, 4, -1, -1, -1, -1};
int root=0;

void inOrderTraverse() {
    stack<int> btree;

    btree.push(-1);
    int ptr = root;

    while (ptr != -1){
      btree.push(ptr);
      ptr = leftIndex[ptr];
    }
    ptr = btree.top();
    btree.pop();

    while (ptr != -1){
        cout<<info[ptr]<<" ";
        if (rightIndex[ptr] != -1){
            ptr= rightIndex[ptr];
            while (ptr != -1){
                btree.push(ptr);
                ptr = leftIndex[ptr];
            }
        }
        ptr = btree.top();
        btree.pop();
    }
}

int main()
{
    cout<<"Inorder Traverse: "<<endl;
    inOrderTraverse();
    return 0;
}



