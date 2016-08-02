/*	An variation of "remove element"	*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	
    void moveZeroes(vector<int>& nums) {
        
        std::vector<int>:: iterator it = remove(nums.begin(), nums.end(), 0);
        int newLen = distance(nums.begin(), it);
        
        for(int i=newLen; i<nums.size(); i++) {
        	nums.at(i) = 0;
        }
    }
};

int main() {
	
	int arr[] = {0, 3, 4, -1, 0 , 0, 9};
	
	vector<int> a(arr, arr + sizeof(arr)/sizeof(int));
	
	Solution s;
	s.moveZeroes(a);
	for(int i=0; i<a.size(); i++) {
		cout << " " << a.at(i);
	}
	
}
