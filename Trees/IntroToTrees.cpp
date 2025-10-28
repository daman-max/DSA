#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* Right;

    Node(int val){
        data = val;
        left = NULL;
        Right = NULL;
    }
};

static int idx = -1;

Node* buildtree(vector<int> preorder){
    idx++;

    if(preorder[idx]==-1) return NULL;
    Node* root = new Node(preorder[idx]);

    root->left = buildtree(preorder);
    root->Right = buildtree(preorder);
    return root;

}

//Preorder traversal

void preOrder(Node* root){
    //first root - left - right

    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->Right);
}

//Inorder traversal

void inOrder(Node* root){
    //firt left - root - right

    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->Right);
}

//Postorder traversal

void postOrder(Node* root){
    //first left - right - root
    if (root==NULL) return ;
    postOrder(root->left);
    postOrder(root->Right);
    cout<<root->data<<" ";
}

// Level Order Traversal -> {DFS(Depth First Search)->like post order, inorder, preorder}, BFS(Breadth First Search)

void LevelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }

        if(curr->Right!=NULL){
            q.push(curr->Right);
        }
    }

    cout<<endl;
}


int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildtree(preorder);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    LevelOrder(root);

    return 0;

    
}