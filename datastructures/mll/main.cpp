#include "mll.cpp"
#define size 1000000
int main()
{
    mll *list=new mll();
    int i;
    
    
    for(i=0;i<size;i++)
     {   
        
       list->appendNode(i);
       
}
//list->displayNodes();    
list->search();
}
