#include<iostream>
                                                                                                //HAS PASSED ALL THE TEST CASES  (1120 / 1120)
using namespace std;

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // Find the maximum positive element in the array
        int maxNum = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxNum)
                maxNum = arr[i];
        }
        
        if (maxNum <= 0)
            return 1; // All elements are negative, so the missing number is 1
        
        // Create a boolean array to mark presence of elements
        bool present[maxNum + 1] = {false};
        
        // Mark elements as present
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0)
                present[arr[i]] = true;
        }
        
        // Find the smallest missing positive number
        for (int i = 1; i <= maxNum; i++) {
            if (!present[i])
                return i;
        }
        
        // If all positive numbers are present, the missing number is maxNum + 1
        return maxNum + 1;

    } 
};


int main(){
    int arr[] = {-15,-5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    int missing = obj.missingNumber(arr, n);

    cout << "The smallest positive missing number is: " << missing << endl;

    return 0;
}