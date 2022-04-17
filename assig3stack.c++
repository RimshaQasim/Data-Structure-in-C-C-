#include <iostream>
using namespace std;
#define Max 100
class Stack
{
private:
    int size;
    int top;
    int *s;
    int stack[Max];
public:
void create()
{
    cout<<"Enter size"<<endl;
    cin>>size;
    top==-1;
    s=new int[size];
}
    void push(int x)
    {
        if (top >= size - 1)
        {
            cout << "Stack OVERFLOW" << endl;
        }
        else
        {
            cout << "\nInserting "<<x;
            top++;
            stack[top]=x;
            cout<<"\n";
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underFlow" << endl;
        }
        else
        {
            cout << "Deleteted value \n"
                 << stack[top] << endl;
            top--;
        }
    }
    void display()
    {
        int i;
        for (i = top; i >= -1; i--)
        {
            cout << s[i] << endl;
        }
    }
    int peek()
    {
        int x = -1, index;
        if (top - index + 1 < 0)
        {
            cout << "Invalid index\n";
        }
        x = top - index + 1;
        cout << "Peek Value:\n";
        return x;
    }
    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
    int isFull()
    {
        return top == size - 1; 
    }
    int stackTop()
    {
        if (!isEmpty())
        {
            return top;
        }
        return -1;
    }
};

int main()
{
    Stack st;
    st.create();
    st.push(32);
    st.push(16);
    st.push(14);
    st.display();
    st.pop();
    // st.display();
    return 0;
}