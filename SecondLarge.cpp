// Tajbid Tousif

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first = 0, second = -1, uncmn[105];

    int array[5] = {5, 5, 5, 5, 5};

    int n = sizeof(array) / sizeof(array[0]);
    sort(array, array+n);
    
    int k=0;

    for(int i=0; i<n; i++)
    {
        if(array[i] != array[i+1])
        {
            uncmn[k] = array[i];
            k++;        
        }
    }



    cout << "First largest number is : " << uncmn[k-1] << endl; 

    if(k==1)
    {
        cout << "No second largest value exist" << endl;
    }

else{

    cout << "Second largest number is : " << uncmn[k-2] << endl; 
}

    return 0;
}













