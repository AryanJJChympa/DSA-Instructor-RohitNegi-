#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>nums1={1,12,15,26,38};
    vector<int>nums2={2,13,17,30,45};

    int start1=0, start2=0;
    int end1=nums1.size();
    int end2=nums2.size();

    int mid1=start1+(end1-start1)/2;
    int mid2=start2+(end2-start2)/2;

    cout<< (nums1[mid1]+nums2[mid2])/2;
    
}