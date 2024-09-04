#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class SolutionTwentyTwo{
public:
	int getCommon(vector<int>& nums1, vector<int>& nums2){
		int i=0, j=0;
		while(i<nums1.size() && i<nums2.size()){
			if(nums1[i]==nums2[j]) return nums1[i];
			else if(nums1[i]<nums2[j]) i++;
			else j++;
		}
		return -1;
	}
};

#endif