// Tajbid Tousif

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first = 0, second = -1;
    int array[5] = {30, 2, 5, 50, 3};

    for(int i=0; i<5; i++)
    {
        if(array[i]>first)
        {
            second = first;
            first = array[i];
        }
        else if(array[i] != first)
        {
            if(array[i] > second)
            {
                second = array[i];
            }
        }
    }
    cout << "First largest is : " << first << endl;
    cout << "Second largest is : " << second << endl;

    return 0;
}













