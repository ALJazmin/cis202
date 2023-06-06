/* 
    File: main.cpp
    Description: printing out the tree size and recursively printing out the nodes in a tree
    Author: Jazmin Avila Lambaren
    Email: jazmina0397@student.vvc.edu
    Date: 6-7-2023
*/
#include <iostream>
#include <string>
#include "tree.h"


int main()
{
   Tree t1("Anne");
   Tree t2("Peter");
   t1.add_subtree(t2);
   Tree t3("Zara");
   t1.add_subtree(t3);
   Tree t4("Savannah");
   t2.add_subtree(t4);
   std::cout << "Size: " << t1.size() << std::endl;

   t1.print();   // this will recursively print the tree.



   /*
   Anne Zara Peter Savannah
   */

   return 0;
}