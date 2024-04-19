#include <vector>

int hourglassSum(std::vector<std::vector<int>> arr) 
{
    int res = INT_MIN ; 
    for (int r = 0 ; r<4 ; r++)
    {
        for(int c= 0 ; c<4 ;c++)
        {
            int sum = arr[r][c] +arr[r][c+1]+arr[r][c+2]+
            arr[r+1][c+1] + arr[r+2][c] + arr[r+2][c+1]+arr[r+2][c+2]; 
            res = std::max(res,sum);
        }
    }
    return res ; 
}