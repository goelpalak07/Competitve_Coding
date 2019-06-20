#include<bits/stdc++.h>
using namespace std;
struct stack {
int top=0;
double item[80];
}s;
void push(double);
double pop();
bool empty();
bool isdigit(char);
double opt(char,double,double);
void eval(char[]);
int main()
{
    char exp[80];
    int pos=0;
    do{
        exp[pos]=getchar();
    }while(exp[pos++]!='\n');
    exp[--pos]='\0';
    for(int i=0;i<pos;i++)
        cout<<exp[i];
    eval(exp);
    cout<<endl;
    cout<<pop();
    return 0;
}
void push(double x)
{
    if(s.top<80)
        s.item[s.top++]=x;
}
double pop()
{
    if(!empty())
    {
        s.top--;
        return s.item[s.top];
    }
}
bool empty()
{
    if(s.top<=0)
        return true;
    return false;
}
bool isdigit(char ch)
{
    return (ch>='0' && ch<='9');
}
double opt(char ch,double op1,double op2)
{
    switch(ch)
    {
        case '+': return (op1+op2);
        case '-': return (op1-op2);
        case '*': return (op1*op2);
        case '/': return (op1/op2);
        case '$': return (pow(op1,op2));
        default:
            cout<<"Illegal operation";
            exit(1);
    }
}
void eval(char ex[])
{
    int pos=0;
    char c;
    double val,op1,op2;
    while(ex[pos]!='\0')
    {
        c=ex[pos];
        if(isdigit(c))
            push((double)(c-'0'));
        else
        {
            op2=pop();
            op1=pop();
            val=opt(c,op1,op2);
            push(val);
        }
        pos++;
    }
}
