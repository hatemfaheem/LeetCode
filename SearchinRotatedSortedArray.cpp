class Solution {
public:
    int rotatedSearch(int A[], int start, int end, int target)
    {
        if (start > end)
            return -1;
        int mid = (start+end)/2;
        
        if (A[mid] == target) return mid;
        if (A[start] == target) return start;
        if (A[end] == target) return end;
        
        if ((A[mid] > A[start] && A[mid] > target && A[mid] < A[end]) ||
            (A[mid] > A[start] && A[mid] > target && A[end] < target) ||
            (A[mid] <= A[start] && (A[mid] >= target || A[end] <= target)))
            return rotatedSearch(A, start, mid-1, target);
        else
            return rotatedSearch(A, mid+1, end, target);
    }
    
    int search(int A[], int n, int target)
    {
        return rotatedSearch(A, 0, n-1, target);
    }
};
