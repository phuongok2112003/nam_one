#include <iostream>
using namespace std;
struct songuyen{
    int thuc,ao;
};
struct So{
  
    struct songuyen data;
     So *next;
};
typedef  So *so;
so khoitao(int x,int y){
    so node=new So();
    node->data.ao=y;
    node->data.thuc=x;
    node->next=NULL;
    return node;
}

void themvaodau(so &dau,int x,int y){
    so tam=khoitao(x,y);
    if(dau==NULL)
    dau=tam;
    else {
        tam->next=dau;
        dau=tam;
    }
}
void themvaocuoi(so &dau,int x,int y){
    so tam=khoitao(x,y);
    so p=dau;
    if(dau==NULL)
    dau=tam;
    else{
    while(p->next!=NULL){
        p=p->next;
    }
   p->next=tam;
}
}
void in (so dau){ 
    so tam=dau;
    while( tam!=NULL){
        cout<<"so thuc "<<tam->data.thuc<<" so ao "<<tam->data.ao<<endl;
        tam=tam->next;
    }

}
void sapxep(so &dau){
    for(so p=dau; p->next!=NULL;p=p->next ){
        so min=p;
        for(so q=p->next;q!=NULL;q=q->next){
                if(min->data.thuc>q->data.thuc)
                min=q;
        }
        songuyen tmp=min->data;
        min->data=p->data;
        p->data=tmp;
    }

}
int main() {
      freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
    so dau=NULL;
 while(1){
    int lc;
   
    cin>>lc;
    if(lc==1){ 

        int x,y; cin>>x>>y;
        themvaocuoi(dau,x,y);}

 if(lc==2){
    sapxep(dau);
    in(dau);
 break;}
  }
    return 0;
}