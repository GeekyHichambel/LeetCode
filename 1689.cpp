class Solution {
public:
    int minPartitions(string n) {
        int len = n.size();
        char max = '0';
        for (int i=0;i<len;i++){
            if (int(n[i])>int(max)){
                max = n[i];
            }
        }
        stringstream a;
        a << max;
        int ans;
        a >> ans;
        return ans;
    }
};
