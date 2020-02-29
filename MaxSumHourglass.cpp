#include<bits/stdc++.h>
#include <climits>
using namespace std;
const int R = 6;
const int C = 6;
//func declaration
int findMaxSum(int mat[R][C]);
//main function
int main()
{
  int mat[R][C];
  for(int i =0; i < R; i++)
  {
      for(int j = 0; j < C; j++)
      {
          cin>>mat[i][j];
      }
  }
  int res = findMaxSum(mat);
  if(res == -1)
    cout<<"Invalid no of element:"<<endl;
  else
    cout<<res;
  return 0;
}
//function definition
int findMaxSum(int mat[R][C])
{
  if(R<3 || C < 3)
  {
      return -1;
  } 
  int max_sum = INT_MIN;
  for(int i =0; i<(R-2); i++)
  {
      for(int j =0; j<(C-2); j++)
      {
          int sum = (mat[i][j] + mat[i][j+1] + mat[i][j+2] + mat[i+1][j+1] + mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2]);
        max_sum = max(max_sum, sum);
      }
  }
  return max_sum;
}
