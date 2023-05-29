// Problem link: https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        vector<int> res;
        int id1 = 0, id2 = 0;
        while(id1 < n && id2 < m) {
            if(id1 > 0 && arr1[id1] == arr1[id1 - 1]) {
                ++id1;
                continue;
            }
            if(id2 > 0 && arr2[id2] == arr2[id2 - 1]) {
                ++id2;
                continue;
            }
            if(arr1[id1] < arr2[id2]) {
                res.push_back(arr1[id1]);
                ++id1;
            } else if(arr1[id1] > arr2[id2]) {
                res.push_back(arr2[id2]);
                ++id2;
            } else {
                res.push_back(arr1[id1]);
                ++id1;
                ++id2;
            }
        }
        while(id1 < n) {
            if(id1 > 0 && arr1[id1] == arr1[id1 - 1]) {
                ++id1;
                continue;
            }
            res.push_back(arr1[id1]);
            ++id1;
        }
        while(id2 < m) {
            if(id2 > 0 && arr2[id2] == arr2[id2 - 1]) {
                ++id2;
                continue;
            }
            res.push_back(arr2[id2]);
            ++id2;
        }
        return res;
    }
};

// Time complexity: O(m + n)
