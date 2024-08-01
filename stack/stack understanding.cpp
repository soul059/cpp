#include<iostream>
#include<string>

using namespace std;
template<typename T>

class stack
{
private:
    T arr[100];
    int top;
public:
    stack(){
        top = -1;
        printf("stack created\n");
    };
    void push(T data){
        if(top == 99){
            printf("stack is full\n");
            return;
        }
        arr[++top] = data;
    };
    T peek(){
        if(top == -1){
            printf("stack is empty\n");
            return -1;
        }
        return arr[top];
    };
    void pop(){
        if(top == -1){
            printf("stack is empty\n");
            return;
        }
        top--;
    };
    string strrev(string str){
        string rev = "";
        for(int i=0;i<int(str.length());i++){
            push(str[i]);
        }
        for(int i=0;i<int(str.length());i++){
            rev = rev + peek();
            pop();
        }
        return rev;
    }

    string wordrev(string str){
        string rev = "";
        string word = "";
        for(int i=0;i<int(str.length());i++){
            if(str[i] == ' '){
                for(int j=0;j<int(word.length());j++){
                    push(word[j]);
                }
                for(int j=0;j<int(word.length());j++){
                    rev = rev + peek();
                    pop();
                }
                rev = rev + ' ';
                word = "";
            }else{
                word = word + str[i];
            }
        }
        for(int j=0;j<int(word.length());j++){
            push(word[j]);
        }
        for(int j=0;j<int(word.length());j++){
            rev = rev + peek();
            pop();
        }
        return rev;
    }

    ~stack(){
        printf("\nstack destroyed\n");
    };
};




int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

    cout<<"new stack\n";
    stack<char> s1;
   
   string str;

   cin >> str;
   string rev = s1.strrev(str);
    cout<<rev<<endl;


    return 0;
}