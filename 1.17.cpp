#include<iostream>
int main(void)
{
    int currVal=0,val=0;
    if(std::cin>>currVal)//������Ҫ��ctrl+Z����Ϊ�ļ�������
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
