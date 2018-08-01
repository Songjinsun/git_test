#include <stdio.h>
#include <math.h>
#include <vector>

void main()
{
    void printpicked(std::vector<int>& picked)
    {
        for(int n : picked){
            cout<<n<<"";
        }
        cout<<endl;
    }

    void pick(int n, std::vector<int>& picked, int topick){
        if(topick ==0){
            printpicked(picked);
            return;
        }
        int smallest = picked.empty()? 0:picked.back() +1;
        for(int next = smallest; next <n; ++next){
            picked.push_back(next);
            pick(n,picked,topick-1);
            picked.pop_back();
        }
        printf("끼요오오옷");
    }
}
