class Solution {
	public:
	bool isPalinArray(vector<int> &arr) {
		for (int i = 0; i<arr.size(); i++) {
			int original = arr[i] ;
			int temp = arr[i] ;
			int rev = 0 ;
			while (temp > 0) {
				int digit = temp % 10 ;
				rev = rev*10 + digit ;
				temp /= 10 ;
			}
			if (original != rev) {
				return false ;
			}
		}
		return true ;
	}
};
