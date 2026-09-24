#include<iostream>
#include<vector>
using namespace std;
class sp1{
    protected:
    float sothuc,soao;
    public:
    void nhap(sp1 *p);
    void xuat(ap1 *p);
    double module(sp1*p,sp1*x);
};
class sp2: public sp1{
    friend bool operator>(sp2*x,sp2*p);
    friend bool operator=(sp2*x,sp2 *p);
};
void sp1::nhap(sp1*p){
 cout<<"moi nhap vao so thuc:";
 cin>>p->sothuc;
 cout<<"moi nhap vao so ao :";
 cin>>p->soao;
}
void sp1::xuat(sp1*p){
    cout<<"so phuc la :"<<sothuc;
    if(soao>0){
        cout<<"+";
    }
    else {
        cout<<"-";
    }
    cout<<soao<<endl;
}
double module(sp1*p,sp1*x){
    return  (p->sothuc*x->sothuc+p->soao*x->soao);
}
bool operator>( sp2*x,sp2*p){
    return x->module()>p->module();
}
bool operator=(sp2*p,sp*x){
    p->sothuc=x->sothuc;
    p->soao=x->soao;
}
