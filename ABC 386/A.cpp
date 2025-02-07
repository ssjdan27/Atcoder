#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int, int> cardFreq;

    for (int i = 0; i < 4; i++)
    {
        int card;
        cin >> card;
        cardFreq[card]++;
    }

    if(cardFreq.size() == 1 || cardFreq.size() > 2){
        cout << "No";
            
    }
    else{
        vector<int> cards;
        for(auto x: cardFreq){
            int card = x.second;
            cards.push_back(card);
        }

        if(cards[0] == 2 && cards[1] == 2 || cards[0] == 3 && cards[1] == 1 || cards[0] == 1 && cards[1] == 3){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
        
    }

    return 0;
}