vector<int> rotateLeft(int d, vector<int> arr) {
  
  int n = arr.size(); 

d = d % n; 
 vector<int> rotatedarr(n) ; 
 for(int j =0 ; j<n ; j++)
 
{ 
    rotatedarr[(j-d+n)%n]=arr[j]; 
}
    for(int i=0;i<n;i++)
    {
     
    arr[i]=rotatedarr[i]; 

    }
 

  


 
return arr ; 
}