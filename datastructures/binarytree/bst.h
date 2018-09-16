#include <string.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include<iostream>
using namespace std;
typedef struct Node
{
   int id;
   int fn;
   int ln;
   int age;
   int phone;
   struct Node* left;
   strust Node* right;
} node;
class bst  
{
   private:
      int size;
      node* root;
      bool addNode(node** current_node, node* new_node);
      bool getNode(METADATA* current_node, char* key, char* value);
      void removeAllNodes(METADATA* node);
      void processNodesInOrder(METADATA* node);
      int getTreeDepth(METADATA* node);
      bool containsNode(METADATA* node, char* key);
      bool removeNode(METADATA** node, char* key);
      void removeRootNode(METADATA** node);
      void moveLeftMostNode(METADATA** node, METADATA* root);
   public:
      bst();
      virtual ~bst();
      bool add(char* key, char* value);
      bool remove(char* key);
      void removeAll();
      bool get(char* key, char* value);
      bool contains(char* key);
      void displayInOrder();
      int getSize();
      int getDepth();
};
