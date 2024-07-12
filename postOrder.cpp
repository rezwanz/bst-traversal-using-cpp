#include <bits/stdc++.h>
using namespace std;

char info[10] = {'A', 'B', 'C', 'D', 'E', 'F'};
int leftIndex[10] = {1, 3, 5, -1, -1, -1};
int rightIndex[10] = {2, 4, -1, -1, -1, -1};
int root=0;

void postOrderTraverse()
{
    stack<int> stackTree1;
    stack<int> stackTree2;

    stackTree1.push(root);
    int ptr = root;

    while (!stackTree1.empty()) {
        ptr = stackTree1.top();
        stackTree1.pop();
        stackTree2.push(ptr);

        if (leftIndex[ptr] != -1){
            stackTree1.push(leftIndex[ptr]);
        }
        if (rightIndex[ptr] != -1){
            stackTree1.push(rightIndex[ptr]);
        }
    }
    while (!stackTree2.empty()) {
        ptr = stackTree2.top();
        stackTree2.pop();
        cout << info[ptr]<<" ";
    }
}
int main()
{
    cout<<endl<<"Postorder Traverse: "<<endl;
    postOrderTraverse();
    return 0;
}



