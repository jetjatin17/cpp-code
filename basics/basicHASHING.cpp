#include<bits/stdc++.h>

using namespace std;

/*
int main(){
    int arr[] = {1,2,2,3,1,1};
    int n = 6;
    unordered_map<int,int> m;
    
    for (int i=0;i<n;i++){
        m[arr[i]]++;
    }
    cout<<m[0]<<endl<<m[1]<<endl<<m[2]<<endl<<m[3]<<endl<<m[4]<<endl<<m[10]<<endl;
    return 0;
}
*/
/* second most frequent element
int secondMostFrequentElement(vector<int>& nums) {
    unordered_map<int,int> m;
    if (nums.empty()) return -1;
    for (int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    int max = 0;
    int count = 0;                            // don't write for the optimized code.
    int secmax = 0;
    for (auto it:m){
        if (it.second > max){                  //
            count++;                            
            if (count>1){                      
                secmax = max;                     
                max = it.second;               
                continue;                      
            }
            max = it.second;
            continue;
        }                                      //
        
        // if (it.second > max){
        //     secmax = max;
        //     max = it.second;
        //     continue;
        // }
        
        if (it.second < max && it.second > secmax){
            secmax = it.second;
        }
    }
    // cout<<max<<" : "<<secmax<<endl;
    if (secmax == 0)
        return -1;
    int key = 0;                                                      // int key = INT_MAX;
    for (auto it:m){
        if (key == 0 && it.second == secmax){                    //
            key = it.first;
            continue;
        }
        if (it.second == secmax){
            if (it.first < key)
                key = it.first;
        }                                                        //
        
        // if (it.second == secmax){
        //     key = min(key,it.first);
        // }
        
    }

    return key;                // return (key == INT_MAX):-1?key;
    


    // for optimized : 
    // T = O(n);
    // S = O(U);
    // for my code : 
    // T = O(n) on average and O(n^2) on worst case;
    // S = O(U) on average and O(n) on worst case;

    
}
*/

int sumHighestAndLowestFrequency(vector<int>& nums) {
    
    unordered_map<int,int> m;
    for (int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }  

    int ma = 0;
    int mi = INT_MAX;
    for (auto it:m){
        if (it.second > ma){
            ma = it.second;
            continue;
        }
        if (it.second < ma && it.second<mi){
            mi = it.second;
        }
    }
    if (mi == INT_MAX) return ma;
    return ma+mi;
}

int main(){
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    int n = nums.size();
    unordered_map<int,int> m;
    for (int i=0;i<n;i++){
        m[nums[i]]++;
    }
    // for (auto it:m){
    //     cout<<it.first<<" : "<<it.second<<endl;
    // }
    // cout<<secondMostFrequentElement(nums)<<endl;
    cout<<endl<<sumHighestAndLowestFrequency(nums);
    
    return 0;
}