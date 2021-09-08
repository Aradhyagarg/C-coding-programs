long long find_multiplication(int a[], int b[], int n, int m)
    {
       
        int biggest = INT_MIN;
        int smallest = INT_MAX;
        
        for(int i =0; i < n; i++)
        {
            if(a[i] > biggest)
                biggest = a[i];
        }
        
        for(int i =0; i < m; i++)
        {
            if(b[i] < smallest)
                smallest = b[i];
        }
        return biggest*smallest; 
    }
};
