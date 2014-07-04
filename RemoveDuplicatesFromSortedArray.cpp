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
};

#include<iostream>
using namespace std;
 
int main() 
{
	Solution s;
	int A[] = {-3,-1,0,0};
	int n = 4;
	int le = s.removeDuplicates(A, n); 
	cout <<  "Length after removal: " << le << endl;
	for(int i=0; i<le; i++) 
	{
		cout << A[i] << " "; 
	} 
	getchar();
	return 0;
}
