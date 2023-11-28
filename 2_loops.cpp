#include<iostream>

using namespace std;

int main()
{
    int i =0;
    for(i =0 ; i< 10 ; i++)
    {
        cout << i << " ";
    }
    printf("\n");

    while (i >=0)
    {
        cout << i-- << " ";
    }
    printf("\n");
    do
    {
        cout << i++ << " ";
    } while (i<=10);
    
    

}
