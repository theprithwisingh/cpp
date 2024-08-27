#include <iostream>
#include<climits>
#include<vector>
using namespace std;
int getProfit(vector<int>&prices){
        int minPrice = INT_MAX;
        int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++){
        if (prices[i]<minPrice){
            minPrice=prices[i];
        }
        int currentProfit = prices[i]-minPrice;

        if (currentProfit>maxProfit)
        {
            maxProfit = currentProfit;
        }
     }
        return maxProfit;
     
}
int main(){
    vector<int>prices ={8,9,11,5,2};
    int getprofit = getProfit(prices);
    cout << "Profit: " << getprofit << endl;
}