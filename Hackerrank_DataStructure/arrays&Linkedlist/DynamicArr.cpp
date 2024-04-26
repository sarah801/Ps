#include <vector>

vector<int> dynamicArray(int n, vector<vector<int>> queries)
 {
     vector<vector<int>> arr(n,vector<int>());//2d array 
     int lastAnswer = 0 ; 
     vector<int> answers; 
     for (int i = 0 ; i < queries.size();i++)//for query number 
     {
        // declare the two types of queries 
        int type =  queries[i][0]; 
        int x = queries[i][1]; 
        int y = queries[i][2]; 
         int idx = (x ^ lastAnswer) % n; 
        if (type == 1 )
        {
        
           arr[idx].push_back(y);
         
        }
        else if (type==2 ) 
        
        
        {
            lastAnswer = arr[idx][y%size(arr[idx])]; 
                answers.push_back(lastAnswer);
        }
       
         
    
    
     }
return answers ; 
}