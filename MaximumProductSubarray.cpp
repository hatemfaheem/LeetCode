// I wasn't able to solve this problem on my own
// source : http://changhaz.wordpress.com/2014/09/23/leetcode-maximum-product-subarray/

class Solution {
public:
    int maxProduct(int A[], int n)
    {
        int maxi=1, mini=1;
        int maxProduct=INT_MIN;
        for (int i=0; i<n; i++)
        {
            int oldMaxi = max(maxi, 1);
            if (A[i] < 0)
            {
                maxi = mini * A[i];
                mini = oldMaxi * A[i];
            }
            else
            {
                maxi = oldMaxi * A[i];
                mini *= A[i];
            }
            maxProduct = max(maxi, maxProduct);
        }
        return maxProduct;
    }
};
