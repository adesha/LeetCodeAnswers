/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        vector<int> temp;
        Node* curr;
        
        if ( root == NULL )
            return result;
        
        result.push_back( root -> val);
        
        for (auto c : root -> children){
            temp = preorder( c );
            result.insert( result.end(), temp.begin(), temp.end() );
        }
                
        return result;
    }
};