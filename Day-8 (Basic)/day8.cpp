#include<iostream>
                                                                                                //HAS PASSED ALL THE TEST CASES  (1120 / 1120)
using namespace std;

void bubbleSort(int arr[], int n) {
	int count = 1;
	while (count < n) {
		for (int i = 0; i < n - count; i++) {
			if (arr[i] > arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
		count++;
	}
}

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        //code here    
    bubbleSort(arr,n);
    int j,k;
    int triplet;
    for (int i = 0; i < n - 1; i++) {
            j = i + 1;
            k = n - 1;
            while (j < k) {
                triplet = arr[i] + arr[j] + arr[k];
                if (triplet == 0)
                    return true;
                else if (triplet > 0)
                    k--;
                else if (triplet < 0)
                    j++;
            }
    }
    return false;
      
        
    }
};

int main (){
    int n = 5;
    int arr[n] = {0,-1,2,-3,-1};
    Solution sol;
    bool found = sol.findTriplets(arr, n);
    
    if (found)
        cout << "Triplets with zero sum found." << endl;
    else
        cout << "Triplets with zero sum not found." << endl;


    return 0;
}
