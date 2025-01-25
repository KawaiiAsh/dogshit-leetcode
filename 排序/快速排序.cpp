#include <vector>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[high]; // 选择最后一个元素作为基准
    int i = low;  // i 指向比基准元素小的最后一个元素

    for(int j = low; j < high; j++){
        // 如果当前元素小于或等于基准元素，则交换
        if(arr[i] <= arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // 找到基准元素的位置
        int pi = partition(arr, low, high);

        // 递归地对基准元素左右的子数组进行快速排序
        quickSort(arr, low, pi - 1);  // 排序左边部分
        quickSort(arr, pi + 1, high); // 排序右边部分
    }
}