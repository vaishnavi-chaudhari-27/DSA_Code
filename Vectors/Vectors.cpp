#include<iostream>
#include<vector>

using namespace std;

// int main(){
    // vector
    // vector<int>vec;
       
        // vec.push_back(25);
    //     vec.push_back(35);

    //     cout << "after push back size =" << vec.size() << endl;
    //     vec.pop_back();

    
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    
    // return 0;


    //   Kadane's Algorithm problem
        // Que1 Subarrays  //
    //     int n = 5;
    //     int arr[5] = {1, 2, 3, 4, 5};

    //     for(int start=0; start<n; start++) {
    //         for(int end=start; end<n; end++) {
    //             for(int i=start; i<=end; i++) {
    //                 cout << arr[i];
    //             }
    //             cout << " ";
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }


         // Que2 Maximum subrrays sum// 

        //  int n = 5;
        //  int arr[5] = {1, 2, 3, 4, 5};
        //  int maxSum = INT_MIN;
        //  for(int st =0; st<n; st++){
        //     int currSum = 0;
        //     for(int end=st; end<n; end++){
        //         currSum += arr[end];
        //         maxSum = max(currSum, maxSum);
        //     }
        //  }
        //   cout << "max subarray sum =" << maxSum << endl;
        //   return 0;
        // }

        // Que3  //
    //     vector<int> pairSum(vector<int> nums, int target){
    //         vector<int>ans;
    //         int n = nums.size();
        
    //       for(int i=0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //             if(nums[i] + nums[j] == target) {
    //                 ans.push_back(i);
    //                 ans.push_back(j);
    //                 return ans;
    //             }
    //         }
    //     }
    //     return ans;
    // }
    // int main(){
    //     vector<int> nums = {2, 7, 11, 15};
    //     int target = 9;

    //     vector<int> ans = pairSum(nums, target);
    //     cout << ans[0] << ", " << ans[1] << endl;
    //     return 0;
    // }

           // Que4 sort 
           int majorityElement(vector<int>& nums) {
            int n = nums.size();

            sort(nums.begin(), nums.end());

            int freq = 1, ans = nums[0];
            for(int i=1; i<n; i++){
                if(nums[i] ==  nums[i-1]) {
                    freq++;
                } else {
                    freq=1;
                    ans= nums[i];
                }
                if(freq > n/2) {
                    return ans;
                }
            }
            return ans;
           }    






