#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    float profit[n];
    float weight[n];
    float p_per_w[n];
    for(int i = 0; i < n; i ++){
        cout << "Enter profit and Weight : ";
        cin >> profit[i] >> weight[i];
        p_per_w[i] = profit[i] / weight[i];
    }
    for(int i = 0; i < n - 1; i ++){
        for(int j = 0; j < n - i - 1; j ++){
            if(p_per_w[j] < p_per_w[j + 1])
            {
                swap(p_per_w[j], p_per_w[j + 1]);
                swap(profit[j], profit[j + 1]);
                swap(weight[j], weight[j + 1]);
            }
        }
    }

    cout << "Enter the maximum weight : ";
    float max_weight;
    cin >> max_weight;
    int cur_ind = 0;
    float max_profit = 0;
    for(int i = 0; i < n; i ++){
        if(max_weight < weight[i])
        {
            max_profit += p_per_w[i] * max_weight;
            cout << "Profit added at last = " << p_per_w[i] * max_weight << endl;
            break;
        }
        else{
            cout << "Element weight = " << weight[i] << endl;
            cout << "Element profit = " << profit[i] << endl;
            max_profit += profit[i];
            max_weight -= weight[i];
        }
        cout << "Remaining weight = " << max_weight << endl;
    
    }
    cout << "Max Profit = " << max_profit << endl;
    return 0;
}