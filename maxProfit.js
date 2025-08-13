// Leetcode 121 , niveau easy 
// sarotra lay izy, zezika za fa manao copie coller, tsy dia azoko loatra lay problem , ifonana
var maxProfit = function(prices) {
    let buyPrice = prices[0];
    let profit = 0;

    for (let i = 1; i < prices.length; i++) {
        if (buyPrice > prices[i]) {
            buyPrice = prices[i];
        }

        profit = Math.max(profit, prices[i] - buyPrice);
    }

    return profit;    
};

