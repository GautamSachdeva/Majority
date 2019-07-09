#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;
using namespace std;
int get_majority_element(vector<int> &a, int left, int right) {
  //if (left == right) return -1;
  //if (left + 1 == right) return a[left];
  //write your code here
  sort(a.begin() , a.end());
  int count = 0;
  int temp = -1;
  for(int i = 0 ; i < a.size() ; i++){
  	if(i == 0){
  		temp = a[i];
  		count ++;
	  }
	  else{
	  	if(temp == a[i]){
	  		count ++;
	  		if(count > a.size()/2){
	  			return count;
			  }
		  }
		  else{
		  	temp = a[i];
		  	count = 1;
		  }
	  }
  }

  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
