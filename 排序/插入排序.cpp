#include <vector>
using namespace std;

void insertion_sort(vector<int> &nums){    
    for(int i = 0 ; i < nums.size();i++){
        int current_num = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > current_num){
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = current_num;
    }
}