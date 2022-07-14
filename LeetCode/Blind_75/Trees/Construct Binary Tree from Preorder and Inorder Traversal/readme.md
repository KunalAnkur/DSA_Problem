## Construct Binary Tree from Preorder and Inorder Traversal
```
1. base case: index must be less than size of preorder arr and startindex should be always less than endindex if not return NULL
2. create node and assign the index value in preorder
3. find the index value in the inorder array and increment the index
4. call for the left subtree start at 0 to pos - 1 and for right substree start at pos  + 1  to end;
5. return node
```