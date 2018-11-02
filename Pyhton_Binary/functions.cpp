#include <iostream>
using namespace std;

//void bubble_Sort(int array_List[] , int length);
//int factorial(int number);
/*
int main()
{
    int list[50];
    int counter=50;
    int index=0;
    for(int i=counter;i>0;i--)
    {
        list[index]=i;
        index++;
    }
    for(int i=0;i<counter;i++)
    {
        cout<<list[i];
        cout<<"\n";
    }


    //bubble_Sort(list,counter);
    //cout<< factorial(10);
}
*/
void bubble_Sort(int array_List[] , int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-1;j++)
        {
            if(array_List[j]>array_List[j+1])
            {
                int temp=array_List[j];
                array_List[j]=array_List[j+1];
                array_List[j+1]=temp;
            }
        }
    }
}
int factorial(int number)
{
    if(number<=1)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1);
    }
}
