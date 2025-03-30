class Solution {
public:
    
vector<int> partitionLabels(string s) {
    vector<int> last(26, -1); // Store last occurrence index of each character
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        last[s[i] - 'a'] = i; //Store the last index of each character in the string
    }

    vector<int> result;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; ++i) {
        end = max(end, last[s[i] - 'a']);
        if (i == end) {
            result.push_back(end - start + 1);
            start = end + 1;
        }
    }
    return result;

}
};