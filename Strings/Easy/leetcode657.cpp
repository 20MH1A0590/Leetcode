class Solution {
public:
    bool judgeCircle(string moves) {
       int x = 0, y = 0;
       for(int ind = 0; ind < moves.size(); ind++)
       {
           if(moves[ind] == 'U') x++;
           else if(moves[ind] == 'D') x--;
           else if(moves[ind] == 'L') y--;
           else y++;
       }
       return x == 0 && y == 0; 
    }
};