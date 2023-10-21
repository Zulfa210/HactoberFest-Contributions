class Solution {
public:
    int maxProfit(vector<int>& prices) {

int minn=INT_MAX;
int maxpro=0;

for(int i=0; i<prices.size(); i++){
    int cost=prices[i]-minn;
    maxpro=max(maxpro,cost);
    minn=min(minn,prices[i]);
}
return maxpro;
}};

