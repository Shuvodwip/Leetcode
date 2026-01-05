class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp = strs;
        vector<vector<string>> rslt;

        for (string &s : temp) {
            sort(s.begin(), s.end());
        }

        vector<bool> used(temp.size(), false);

        for (int i = 0; i < temp.size(); i++) {
            if (used[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            used[i] = true;

            for (int j = i + 1; j < temp.size(); j++) {
                if (!used[j] && temp[j] == temp[i]) {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }

            rslt.push_back(group);
        }

        return rslt;
    }
};
