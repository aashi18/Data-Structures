#include "bst.cpp"
int main()
{
   bst* tree = new bst();
   char key[SIZE_KEY];
   char value[SIZE_VALUE];
   int i;
   cout << "Adding three keys and values into the tree." << endl;
   char arr[]={'1','2','3'};
   for(i=0; i<3; i++)
   {
      if (i==0)
      {
          strcpy(key,"345");
          strcpy(value,"Bob");
      }
      if (i==1)
      {
          strcpy(key,"123");
          strcpy(value,"Mary");
      }
      if (i==2)
      {
         strcpy(key,"999");
         strcpy(value,"Sue");
      }
      if (!tree->contains(key))
      {
         cout << "Adding node - key: " << key << " value: " << value
         << endl;
         tree->add(key, value);
      }
      else
      {
         cout << "Generated duplicate key: " << key << endl;
      }
   }
   cout << "\nIn order traversal of tree:" << endl;
   tree->displayInOrder();
   cout << "\nDepth of tree before removing nodes: " << tree->getDepth()
        << endl;
   cout << "Size of tree before removing nodes: " << tree->getSize()
        << endl;
   cout << "\nRetrieving one value from the tree:" << endl;
   if(tree->get(arr, value))
   {
      cout << " Value: " << value << endl;
   }
   cout << "\nRemoving one node from the tree:" << endl;
   if(tree->contains(arr))
   {
      tree->remove(arr);
   }
   cout << "\nIn order traversal of tree:" << endl;
   tree->displayInOrder();
   cout << "\nDepth of tree after removing nodes: " << tree->getDepth()
        << endl;
   cout << "Size of tree after removing nodes: " << tree->getSize()
        << endl;
   cout << "\nDestroying the tree:" << endl;
   delete tree;
   return 0;
}
