class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) return findMedianSortedArrays(B, A);

    int n = A.size();
    int m = B.size();

    int low = 0, high = n;

    while (low <= high) {
        int cutA = (low + high) / 2;
        int cutB = (n + m + 1) / 2 - cutA;

        int leftA  = (cutA == 0) ? INT_MIN : A[cutA - 1];
        int rightA = (cutA == n) ? INT_MAX : A[cutA];

        int leftB  = (cutB == 0) ? INT_MIN : B[cutB - 1];
        int rightB = (cutB == m) ? INT_MAX : B[cutB];

        if (leftA <= rightB && leftB <= rightA) {
            if ((n + m) % 2 == 0)
                return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
            else
                return max(leftA, leftB);
        }
        else if (leftA > rightB) {
            high = cutA - 1;
        }
        else {
            low = cutA + 1;
        }
    }
    return 0.0;
}

};