#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

void Re(vector<int> &prices, int i, int &mini, int &maxProfit) {
    // base case
    if (i == prices.size()) {
        return;
    }

    // Update minimum price and calculate profit
    if (prices[i] < mini) {
        mini = prices[i];
    } else {
        int todayProfit = prices[i] - mini;
        if (todayProfit > maxProfit) {
            maxProfit = todayProfit;
        }
    }

    // Recursive call with incremented index
    Re(prices, i + 1, mini, maxProfit);
}


int maximumProfit(vector<int> &prices) {


int mini=INT_MAX;
int maxProfit=0;
int i=0;

Re(prices,i,mini,maxProfit);
return maxProfit;


}


  //This is iterative approach
    // int mini = INT_MAX;
    // int maxProfit = 0; // Start with 0 profit

    

    // for(int i = 0; i < prices.size(); i++) {
    //     if(prices[i] < mini) {
    //         mini = prices[i];
    //     } else {
    //         int todayProfit = prices[i] - mini;
    //         if(todayProfit > maxProfit) {
    //             maxProfit = todayProfit;
    //         }
    //     }
    // }

    // return maxProfit;