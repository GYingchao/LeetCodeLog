#include<algorithm>
class Solution {
public:
	/* Time Exceed Solution
	 int removeDuplicates(int A[], int n) {
	 	int length = n;
	 	for(int i=0; i<length-1; i++) {
	 		int offset = 0;
	 		for(int j=i+1; j<length; j++) {
				 if(A[i] == A[j]) offset ++;
				 else break;
			}
			for(int p=i+1; p<length-offset && offset; p++) A[p] = A[p+offset];
			
			length -= offset;
	 	}
	 	return length;
	 }
	*/
	/*  This solution is WA, dont know why
	 int removeDuplicates(int A[], int n) {	
	 	int length = n;
	 	int offset = 0;
	 	for(int i=0; i<length; i++) {
	 		A[i] = A[i+offset];
	 		while(A[i] == A[i+offset+1]) {
	 			offset ++;
	 		}
	 		length = n - offset;
	 	}
	 	return length;
	 }
	 */
	 
	 /* // Online Solution 1 : AC with O(n)
	 int removeDuplicates(int A[], int n) {
	 	// Check the extreme condition
	 	if(n == 0) return 0;
	 	
		int length = 0;
		for(int i=length+1; i<n; i++) {
			if(A[length] != A[i]) {
				length++;
				A[length] = A[i];
			}
		}	 	
		return ++length;
	 }
	 */
	 
	 /* // Online Solution 2 : AC with O(n)
	 	// Using STL from <algorithm>
	 	// Get to know unique(BeginIter, EndIter) and distance(BeginIter, EndIter)
	 	// Knowing that the above two functions are implemented in linear time.
	 int removeDuplicates(int A[], int n) {
	 	return std::distance(A, std::unique(A, A+n));
	 }
	 */
};

#include<iostream>
using namespace std;
 
int main() 
{
	Solution s;
	int A[] = {1, 1, 1, 7, 10};
	int n = 5;
	int le = s.removeDuplicates(A, n); 
	cout <<  "Length after removal: " << le << endl;
	for(int i=0; i<le; i++) 
	{
		cout << A[i] << " "; 
	} 
	getchar();
	return 0;
}
