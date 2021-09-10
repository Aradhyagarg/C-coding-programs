void binSort(int A[], int N)
{
   //Your code here
   
   /**************
    * No need to print the array
    * ************/
    int zeros = 0; 
   int ones = 0;
   for(int i =0; i < N; i++)
   {
       if(A[i] == 1)
         ones++;
       else
         zeros++;
   }
   
   int i=0;
   while(zeros != 0)
   {
       A[i] = 0;
       i++;
       zeros--;
   }
   
   while(ones != 0)
   {
       A[i]=1;
       i++;
       ones--;
   }
}
