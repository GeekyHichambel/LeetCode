class Solution {
public:
    int minimumSum(int num) {
        int dig = 0;
        int arr[4];

        for (int i=0;i<4;i++){
            dig = num%10;
            arr[i]=dig;
            num/=10;
        }
        sort(arr,arr+4);
        int a = (arr[0]*10) + arr[3];
        int b = (arr[1]*10) + arr[2];
        return a+b;
    }
};
