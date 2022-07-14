## Construct Binary Tree from Inorder and Postorder Traversal
```
Most of the thing are similar like in pre - ino but there are two catch
1. index should start at the last index of the post order array and change the base case accordingly
2. right subtree should be called first because as we know post order represent LRN . so before root there is right subtree thats why it should be call first
```