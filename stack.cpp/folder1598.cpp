#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> folderStack;

        for (const string& log : logs) {
            if (log == "../") {
                if (!folderStack.empty()) {
                    folderStack.pop();
                }
            } else if (log == "./") {
                
            } else {
                folderStack.push(log); // Move to a child folder
            }
        }

        return folderStack.size(); // Steps needed to return to main folder
    }
};

int main() {
    Solution solution;

    vector<string> logs = {"d1/", "d2/", "../", "d21/", "./"};
    
    int result = solution.minOperations(logs);

    cout << "Minimum operations to go back to the main folder: " << result << endl;

    return 0;
}
