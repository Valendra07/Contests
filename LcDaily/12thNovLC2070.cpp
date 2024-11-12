class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& i, vector<int>& q) {
        sort(i.begin(), i.end());

        vector<pair<int, int>> res = {{0,0}}; //{minElement, beauty}

        for(const auto &it: i)
        {
            int price = it[0];
            int beauty = it[1];

            if(beauty>res.back().second)
            {
                res.push_back({price, beauty});
            }
        }

        vector<int> ans;

        for(const auto &x:q)
        {
            for(int i = res.size()-1;i>=0;i--)
            {
                if(res[i].first <= x)
                {
                    ans.push_back(res[i].second);
                    break;
                }
            }
        }

        return ans;
    }
};
