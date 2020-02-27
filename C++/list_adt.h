/*#ifndef LIST_H
It is a Conditional Compilation Preprocessor directives.
We know that the in #ifdef directive if the macroname is defined, 
then the block of statements following the #ifdef directive will execute normally,
 but if it is not defined, the compiler will simply skip this block of statements. 
 The #ifndef directive is simply opposite to that of the #ifdef directive. In case of #ifndef , 
 the block of statements between #ifndef and #endif will be executed only if the macro 
 or the identifier with #ifndef is not defined.

 Ref:-https://www.geeksforgeeks.org/cpp-preprocessor-directives-set-2/

*/
#ifndef LIST_H
#define LIST_H

#include<iostream>
class List
{
    private:
        int list_count;
        int * list_items;
    
    public:
        List(); //constructor
        ~List(); //destructor
        int Get(int index);
        int Insert(int index, int val);
        int Search(int val);
        int Remove(int index);
        int Count();
};
#endif //LIST_H
