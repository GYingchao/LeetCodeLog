#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	/*
    int removeDuplicates(vector<int>& nums) {
    	
    	if(nums.empty()) {
    		cout << "Ilegal input : the array is empty!";
    		return 0;
    	}
    	
    	int p = 0;
    	for(int i=p+1; i<nums.size(); i++) {
    		if(nums.at(i) == nums.at(p)) continue;
    		else {
    			p++;
    			nums.at(p) = nums.at(i);
    		}
    	}
    	return p+1;
    }
    */
    int removeDuplicates(vector<int>& nums) {
    	std::vector<int>::iterator it = unique(nums.begin(), nums.end());
    	return distance(nums.begin(), it);
    }
};

/*
int main() {

	int arr[] = {1, 3, 3, 4, 5, 5, 5, 9};
	vector<int> a(arr, arr + sizeof(arr)/sizeof(int));
	
	Solution so;
	int ns = so.removeDuplicates(a);
	cout << ns << endl;
	
	for(int i=0; i<ns; i++) {
		cout << a.at(i) << " " << endl;
	}
	return 0;
}
*/
