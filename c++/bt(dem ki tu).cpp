#include<iostream>
# include<string> 
using namespace std; 
void DemKT(char s[50], int n)
{
    char KT[50];
    
    
    int iCo[50], iDem[50], iKT[50];
    
    for(int i= 0; i < n; i++)
    {
        iCo[i] = 0;
        iDem[i] = 1;
    }
   
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        
        if(iCo[i] == 0 )
        {
            for(int j = i+1; j < n; j++)
            {
                if(s[i] == s[j])
                {
                   
                    iDem[i] ++;
                    
                    iCo[j]=1;
                }
            }
            
            KT[k] = s[i];
            
            iKT[k] = iDem[i];
         
            k++;
        }
    }
    for(int i=0; i<k; i++)
    cout<<"\n Kytu \" "<<KT[i]<<" \" xuat hien \" "<<iKT[i]<<" \" lan";
}

int main()
{
    char s[50];
    cout<<"\n Nhap vao chuoi: ";
    cin.getline(s, 50);
    int iLen = strlen(s);
    DemKT(s, iLen);
    cout<<"\n\n";
    return 0;
}
