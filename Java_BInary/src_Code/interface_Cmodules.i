/*  interface_Cmodules */
%module interface_Cmodules

%{
extern int factorial(int number);
extern void bubble_Sort(int array_List[] , int length);
%}


extern int factorial(int number);
extern void bubble_Sort(int array_List[] , int length);