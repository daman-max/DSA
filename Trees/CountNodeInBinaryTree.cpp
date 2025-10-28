#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

static int idx = -1;
Node* buildtree(vector<int>& preorder){
    idx++;

    if(preorder[idx]==-1) return NULL;

    Node* root = new Node(preorder[idx]);

    root->left = buildtree(preorder);
    root->right = buildtree(preorder);

    return root;
}

int count(Node* root){
    if(root == NULL) return 0;

    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return leftCount + rightCount + 1;

}


int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildtree(preorder);

    cout<<"number of nodes:"<<count(root)<<endl;
}