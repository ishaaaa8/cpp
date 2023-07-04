// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int stockBuy(vector<int>& prices,int& mini,int& index,int& max_profit){

    if(index>=prices.size()){
        return max_profit;
    }

    int dif=prices[index]-mini;
    if(dif>max_profit){
        max_profit=dif;
    }
    return stockBuy(prices,mini,++index,max_profit);
    
    


}

int min_price(vector<int>& prices,int mini,int index)
{

    for(int i=0;i<prices.size();i++){
        if(prices[i]<mini){
            mini=prices[i];
            index=i;
        }
        
    }
    int profit=INT_MIN;
    int ans=stockBuy(prices,mini,index,profit);
}

int main(){
    vector<int>prices{7,1,5,2,6,4};
    int mini=INT_MAX;
    int index=-1;
    int ans=min_price(prices,mini,index);
    cout<<ans; 
} 



