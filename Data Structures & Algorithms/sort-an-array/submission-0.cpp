class Solution {
public:
    vector<int> merge(vector<int>& nums,vector<int>&a,vector<int>&b){
        int i=0;
        int j=0;
        int k=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j]){
                nums[k++]=a[i++];
            }
            else{
                nums[k++]=b[j++];
            }
        }
        if(i==a.size()){
            while(j<b.size()){
              nums[k++]=b[j++];  
            }
        }
        else{
            while(i<a.size()){
                nums[k++]=a[i++];
            }
        }
        return nums;
    }
    void mergesort(vector<int>& nums){
        if(nums.size()==1) return;
        int n1=nums.size()/2;
        int n2=nums.size()-n1;
        // divide into vector
        vector<int>a(n1);
        vector<int>b(n2);
        //filling the elements into array
        for(int i=0;i<n1;i++){
            a[i]=nums[i];
        }
        for(int i=0;i<n2;i++){
            b[i]=nums[i+n1];
        }
        mergesort(a);
        mergesort(b);

        merge(nums,a,b);
    }
    vector<int> sortArray(vector<int>& nums) {
       mergesort(nums);
       return nums;
    }
};