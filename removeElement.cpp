#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	/*
    int removeElement(vector<int>& nums, int val) {
        
        int p = 0;
        int v = 0;
        for(int i=0; i<nums.size(); i++) {
        	if(nums.at(i) == val) {
        		v++;
        	} else {
        		p ++;
        		nums.at(i-v) = nums.at(i);
        	}
        }
        return p;
    }
    */
     int removeElement(vector<int>& nums, int val) {
     	
     	std::vector<int>::iterator it = remove(nums.begin(), nums.end(), val);
     	return distance(nums.begin(), it);
     }
};

int main() {
	
	int arr[] = {1, 2, 2, 3, 5, 2, 4, 8, 2};
	vector<int> a(arr, arr + sizeof(arr)/sizeof(int));
	
	Solution s;
	int r = s.removeElement(a, 2);
	
	cout << r << endl;
	for(int i=0; i<r; i++) {
		cout << " " << a.at(i);
	}
}
