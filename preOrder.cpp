#include <bits/stdc++.h>
using namespace std;

char info[10] = {'A', 'B', 'C', 'D', 'E', 'F'};
int leftIndex[10] = {1, 3, 5, -1, -1, -1};
int rightIndex[10] = {2, 4, -1, -1, -1, -1};
int root=0;

void preOrderTraverse()
{
    stack<int> stackTree;
    stackTree.push(-1);
    int ptr = root;

    while (ptr != -1){
        cout<<info[ptr]<<" ";
        if (rightIndex[ptr] != -1){
          stackTree.push(rightIndex[ptr]);
        }
        if (leftIndex[ptr] != -1){
          ptr = leftIndex[ptr];
        }
        else{
            ptr = stackTree.top();
            stackTree.pop();
        }
    }
}

int main()
{
    cout<<endl<<"Preorder Traverse: "<<endl;
    preOrderTraverse();
    return 0;
}



