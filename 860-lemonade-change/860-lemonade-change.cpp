class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                five++;
                
            if(bills[i]==10)
            {
                if(five==0)
                    return false; 
                five--;
                ten++;
            }
            
            if(bills[i]==20)
            {
                if(ten==0)
                {
                    if(five>=3)
                        five-=3;
                    else 
                        return false;
                }
                else 
                {
                    ten--;
                    if(five==0)
                        return false;
                    five--;
                }
            }
            
        }
        
        return true;
    }
};