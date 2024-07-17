// polynomiyal eddition 
#include <iostream>
#include <string>
using namespace std;
class polynomial
{
private:
    int co;
    int ex;
public:
    polynomial(){
        co = 0;
        ex = 0;
    }
    polynomial(int c, int e){
        co = c;
        ex = e;
    }
    int getCo(){
        return co;
    }
    int getEx(){
        return ex;
    }
    void setCo(int c){
        co = c;
    }
    void setEx(int e){
        ex = e;
    }
    polynomial add(polynomial p){
        polynomial temp(0,0);
        if(ex == p.getEx()){
            temp.setCo(co + p.getCo());
            temp.setEx(ex);
        }
        else{
            temp.setCo(co);
            temp.setEx(ex);
        }
        return temp;
    }
    void display(){
        
        cout << co << "x^" << ex;
        
    }

};

void addition(polynomial *p1, polynomial *p2, polynomial *p3, int n1, int n2) {
    int t1 = 0, t2 = 0, t3 = 0;
    while (t1 != n1 || t2 != n2)
    {
        if (t1 == n1) {
            p3[t3] = p2[t2];
            t2++;
            t3++;
        }
        else if (t2 == n2) {
            p3[t3] = p1[t1];
            t1++;
            t3++;
        }
        else if (p1[t1].getEx() == p2[t2].getEx()) {
            p3[t3] = p1[t1].add(p2[t2]);
            t1++;
            t2++;
            t3++;
        }
        else {
            if (p1[t1].getEx() > p2[t2].getEx()) {
                p3[t3] = p1[t1];
                t1++;
                t3++;
            }
            else if (p1[t1].getEx() < p2[t2].getEx()) {
                p3[t3] = p2[t2];
                t2++;
                t3++;
            }
        }
    }
}


void sortpolynomiyal(polynomial *p){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(p[i].getEx() > p[j].getEx()){
                polynomial temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int maxExpo(polynomial *p1, polynomial *p2){
    return p1[0].getEx() > p2[0].getEx() ? p1[0].getEx() : p2[0].getEx();
}


int main(){
    int n1,n2;
    cout<< "enter the number of terms in polynomial 1\n";
    cin >> n1;
    cout<< "enter the number of terms in polynomial 2\n";
    cin >> n2;
    polynomial *p1 = new polynomial[n1];
    polynomial *p2 = new polynomial[n2];

    cout<< "enter polynomiyal by exponatial order\n";
    for(int i=0;i<n1;i++){
        int c,e;
        cout << "enter ax^b" << " : ";
        cin >> c >> e;
        p1[i] = polynomial(c,e);
    }
    sortpolynomiyal(p1);
    cout<< "enter polynomiyal by exponatial order\n";
    for(int i=0;i<n2;i++){
        int c,e;
        cout << "enter ax^b" << " : ";
        cin >> c >> e;
        p2[i] = polynomial(c,e);
    }
    sortpolynomiyal(p2);
    polynomial* p3 = new polynomial[maxExpo(p1,p2)];
    addition(p1, p2,p3, n1, n2);

    for(int i=0;i<maxExpo(p1,p2);i++){
        p3[i].display();
        cout << " ";
    }

    return 0;
}
