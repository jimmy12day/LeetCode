/*class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> nums(n,vector<int>(n,0);      
        int k = 0;
        while(k < n*n)
        {
            while(j < n && nums[i][j++]==0){
                nums[i][j++]=k++;   
            } 
            while (i < n&& nums[i][j++]==0){
                nums[i++][j]=k++; 
            }
            while (j > 0 && nums[i][j++]==0){
                nums[i][j--]=k++; 
            }
            while (i > 0 && nums[i][j++]==0) {
                nums[i--][j]=k++; 
            }         
        }
    }    
};
*/

#include <vector>
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int i = 0, j = -1, cur = 1, last = n * n;
        while (cur <= last) {
            while (j < n-1 && matrix[i][j + 1] == 0) {
                ++j;
                matrix[i][j] = cur++;
            }
            while (i < n-1 && matrix[i + 1][j] == 0) {
                ++i;
                matrix[i][j] = cur++;
            } 
            while (j > 0 && matrix[i][j - 1] == 0) {
                --j;
                matrix[i][j] = cur++;
            } 
            while (i > 0 && matrix[i - 1][j] == 0) {
                --i;
                matrix[i][j] = cur++;
            }
        }
        return matrix;
    }
};
   