class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;
        
        int i=0;
        int j=0;
        
        while(i<n && j<m)
        {
            // if(i<n)
            // {
         s.insert(a[i]);
            // }
            // if(j<m)
            // {
         s.insert(b[j]);
            // }
            i++;
            j++;
        } 
        if(i<n)
        {
            for(int j=i;j<n;j++)
            {
                s.insert(a[j]);
            }
        }
        
         if(j<m)
        {
            for(int i=j;i<m;i++)
            {
                s.insert(b[i]);
            }
        }
        return s.size();
    }
};
