#include<iostream>
using namespace std;

class node{
    private:
        int a , b , c; 
        class node* next;
    public:        
        
        node(int a = 0, int b =0 ,int c =0 ){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void display(){
            cout<<"Our variabla: \n1."<<this->a<<"\n2."<<this->b<<"\n3."<<this->c<<endl;
        }
}; 
int main() {
    
    node head(5,6,7);
    head.display();
    /* code */
    return 0;
}
