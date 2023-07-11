#include<iostream>
                                                                                                //HAS PASSED ALL THE TEST CASES  (1120 / 1120)
using namespace std;

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
	    while (N > 0) {
		    if(N % 2 == 1)
                count++;
		    N /= 2;
	    }
	    return count;
    }
};

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    Solution obj;
    int result = obj.setBits(N);
    
    cout << "Number of set bits: " << result << endl;
    
    return 0;
}
