class Solution {
public:
    int totalMoney(int n) {
      // simple maths 
      int start = 1,incr = 0,total_money = 0;
      while(n--)
      {
          total_money = total_money+start+incr;
          start++;
          if(start%8 == 0)
          {
              start=1;
              incr++;
          }
      }
      return total_money;
    }
};x