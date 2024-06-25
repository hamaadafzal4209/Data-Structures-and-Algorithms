class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            string op = operations[i];
            if (op == "X++" || op == "++X") {
                x++;
            } else if (op == "X--" || op == "--X") {
                x--;
            }
        }
        return x;
    }
};