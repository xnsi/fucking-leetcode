class Solution {
public:
    int hIndex(vector<int>& citations) {
        for(int i = 0; i < citations.size(); i++) {
            int h = citations.size() - i;
            if(h <= citations[i])
                return h;
        }

        return 0;
    }
};