#include <set>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	int index=0;
	set<int> s;
	for(int i=0; i<n; i++){
		s.insert(arr[i]);
	}
	for(auto it:s){
		arr[index]=it;
		index++;
	}
	return s.size();
}