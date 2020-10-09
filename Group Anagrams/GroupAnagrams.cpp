class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > my_map;
        vector<vector<string> > solution_set;
     for (int i = 0; i < strs.size(); i++) {
		string key = strs[i];
		sort(key.begin(), key.end());
		my_map[key].push_back(strs[i]);
	 }
	 for (auto n : my_map) { 
        // add all the values in the map to the final set
		solution_set.push_back(n.second);
	 }

	return solution_set;
        
    }
};