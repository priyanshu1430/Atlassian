class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0;// to keep count of bills
        for(auto bill:bills)
        {
            if(bill==5)// no need to give change
                fives++;
            else if(bill==10)
            {
                if(fives==0)//can't give change
                    return false;
                fives--;
                tens++;
            }
            else//20 bill
            {
                if(tens>0 && fives>0)//giving one 10 and one 5
                {
                    tens--;
                    fives--;
                }
                else if(fives>=3)//giving 3 fives
                    fives-=3;
                else 
                    return false;
            }
        }
        return true;
    }
};