
long arrayManipulation(int n, vector<vector<int>> queries) 
{
    vector<long> newarr(n+1 , 0);
    long  max = 0  ; 
    long sum = 0 ; 
    for(int i =0 ; i < queries.size();i++)
    {
           int a = queries[i][0]  ;  // to be zero based  ; 
           int b = queries[i][1] ; 
           int k = queries[i][2]; 
            
            newarr[a] += k ; 
            if (b+1 <= n )
            {
                newarr[b+1 ]-= k; 
            }
    }    
            
    for(int j = 1 ; j <= n  ; j++) 
    {
 sum+= newarr[j]; 
       if( sum>max)
       {
           max=  sum ; 
       }
        }
    

return max ; 
} 
// Time Complexity: O(n)