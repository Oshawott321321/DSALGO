#include <iostream>
#include <vector>

class stack {
    std::vector<int> data;
    int size;

    public:
        stack(){
            this->size = 0;
        }
        stack(int ele){
            this->data.emplace_back(ele);
            this->size=1;
        }

    public:
        void print_stack(){
            std::cout<<std::endl<<this->size<<" : ";
            for(int i =0;i<this->data.size();i++){
                std::cout<<data[i]<<" , ";
            }
        }
        void push(int element){
            this->data.emplace_back(element);
            this->size++;
        }
        void pop(){
            if(this->size==0)
                return;
            this->data.erase(this->data.end()-1);
            this->size--;
        }
        bool isEmpty(){
            return this->size>0;
        }
};
void temp(stack &st){
    st.push(23);
    st.push(23);
    st.push(23);
    st.push(23);
    st.push(23);  
    st.print_stack();
    st.pop();
    st.pop();
    st.print_stack();
}
void temp(stack *st1){
    st1->push(12);
    st1->push(12);
    st1->push(12);
    st1->push(12);
    st1->push(12);
    st1->print_stack();
    st1->pop();
    st1->pop();
    st1->print_stack();
}
int main(){
    std::cout<<"stack Test\n";
    stack st;
    temp(st);
    stack *st1 = new stack();
    temp(st1);
    stack st2(45);
    temp(st2);
    return 0;
}