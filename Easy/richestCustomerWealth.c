int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max_wealth = 0;
    int sum = 0;
    
    for (int i = 0; i < accountsSize; i++) {
        for (int j = 0; j < *accountsColSize; j++) {
            sum += accounts[i][j];
        }
        if (sum > max_wealth)
            max_wealth = sum;
        sum = 0;
    }
    return max_wealth;
}