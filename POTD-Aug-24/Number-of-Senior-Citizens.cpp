class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorCount = 0;
        for (const string& info : details) {
            char tens = info[11] - '0';
            char ones = info[12] - '0';
            if (tens*10+ones>60) {
                seniorCount++;
            }
        }
        return seniorCount;
    }
};
