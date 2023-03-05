class Solution {
public:
    int splitNum(int num) {
        int temp=num,sum1=0,sum2=0,i=0;
        priority_queue<int>pq;
        while(temp>0)
        {
            pq.push((temp%10)*-1);
            temp/=10;
        }
        while(!(pq.empty()))
        {
            if(i%2)
            {
                sum2=sum2*10;
                sum2+=pq.top()*-1;
                pq.pop();
            }
            else 
            {
                sum1=sum1*10;
                sum1+=pq.top()*-1;
                pq.pop();
            }
            i++;
        }
        return sum1+sum2;
    }
};