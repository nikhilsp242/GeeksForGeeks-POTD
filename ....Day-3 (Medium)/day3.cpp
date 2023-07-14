#include<iostream>
                                                                                                //HAS PASSED ALL THE TEST CASES  (1125 / 1125)
using namespace std;

class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int lmin[n], rmax[n];
    
        lmin[0] = arr[0];
        for (int i = 1; i < n; i++) {
        lmin[i] = min(arr[i], lmin[i-1]);
        }
    
        rmax[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            rmax[i] = max(arr[i], rmax[i+1]);
        }
    
        int maxDiff = -1;
        int i = 0, j = 0;
        while (i < n && j < n) {
        if (lmin[i] <= rmax[j]) {
            maxDiff = max(maxDiff, j - i);
            j++;
        }
        else 
            i++;
    }
    
    return maxDiff;
    }

};

#include <iostream>

int main() {
    int arr[] = {34,8,10,3,2,80,30,33,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution s;
    int maxDiff = s.maxIndexDiff(arr, n);

    std::cout << "Maximum difference: " << maxDiff << std::endl;

    return 0;
}
