class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        queue<vector<int>> q;
		q.push({0});
		vector<vector<int>> res;
		while (!q.empty()) {
			if (q.front()[q.front().size()-1] == graph.size()-1) {
				res.push_back(q.front());
			}
			else {
				for (int j : graph[q.front()[q.front().size()-1]]) {
					vector<int> temp = q.front();
					temp.push_back(j);
					q.push(temp);
				}
			}
			q.pop();
		}
		return res;
    }
};
