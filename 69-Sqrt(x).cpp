class Solution {
public:
    int mySqrt(int n) {
    if (n == 0){ return 0;}
    long left = 1, right = n, res = -1;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        if (mid == n / mid) {
            return mid;
        } else if (mid * mid > n) {
            right = mid - 1;
            res = mid;
        } else {
            left = mid + 1;
        }
    }
    return res - 1;
    }
};

/*
Because we truncate the decimals, the problem is equivalent to finding the largest element in the sorted array whose square is equal to or less than n.

As we go from the left to the right of the sorted array, the square of the value increases monotonically. We can apply a feasible function of i^2 >=n and yet again reduce this problem to Find the First True in a Sorted Boolean Array.

There is a small caveat: if there is no element in the array whose square equals n, then we want to return the largest element that is smaller than the square root of n. In this case, we are actually looking for the last false. We can subtract 1 from the index after we find the first true from binary search.


*/
