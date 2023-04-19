// Problem link: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size) {
        int count = 0, res = -1;
        for(int i = 0; i < size; i++) {
            if(count == 0) {
                res = i;
                count = 1;
            } else if(a[res] == a[i]) {
                count++;
            } else {
                count--;
            }
        }
        count = 0;
        for(int i = 0; i < size; i++) {
            if(a[res] == a[i]) {
                count++;
            }
        }
        if(count > (size / 2)) {
            return a[res];
        }
        return -1;
    }
};
