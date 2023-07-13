#include<iostream>
#include<vector>
                                                                                                //HAS PASSED ALL THE TEST CASES  (1121 / 1121)
using namespace std;

class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        
        for(int i = 0;i < n-1;i++){
            for(int j = i+1;j < n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};

int main() {
    int n = 3; // size of the matrix
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    Solution obj;
    obj.transpose(matrix, n);

    // Print the transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}