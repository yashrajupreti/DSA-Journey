
// LeetCode 2114: Maximum Number of Words Found in Sentences
// Approach: Counting Spaces
// Time Complexity: O(n * m)
// Space Complexity: O(1)

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int count = 1;

            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }

            if (count > maximum) {
                maximum = count;
            }
        }

        return maximum;
    }
};
