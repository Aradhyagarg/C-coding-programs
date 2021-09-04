#include<bits/stdc++.h>
using namespace std;

int countOccurrences(int arr[], int n, int x)
{
    int numberOcc = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          numberOcc++;
    return numberOcc;
}
