#include<iostream>
int main(void)
{
    int currVal=0,val=0;
    if(std::cin>>currVal)//输出最好要用ctrl+Z来作为文件结束符
    {
        int cnt=1;
        while(std::cin>>val)
        {
            if(val==currVal)
               ++cnt;
            else{
                std::cout<<currVal<<"occurs"
                <<cnt<<"times"<<std::endl;
                currVal=val;
                cnt=1;
            }
        }
        std::cout<<currVal<<"occurs"
        <<cnt<<"times"<<std::endl;
    }
    return 0;
}
