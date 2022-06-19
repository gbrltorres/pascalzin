#include <iostream>
#include <string.h>
#include <stack>

#define MAX 301

using namespace std;

string infix_to_posfix( string infix);
bool oprnd(char ch);
int prcd(char ch);

bool oprnd(char ch){
    if( (ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z')){
        return true;
    }
    else{
        return  false;
    }
}

int prcd(char ch){
    int x=-1;
    if(ch == '^'){
        x = 3;
    }
    if(ch == '*' || ch == '/'){
        x = 2;
    }
    if(ch == '+' || ch == '-'){
        x = 1;
    }
    return x;
}

string infix_to_posfix(string infix){
    string posfix = "";
    stack<char> s;
    for( int i=0; i < (int)infix.length(); i++ ){
        if( oprnd( infix[i] ) ){
            posfix+=infix[i] + " ";
        }
        else{
            if( s.empty() ){
                s.push(infix[i]);
            }
            else{
                if( infix[i] == '(' ){
                    s.push(infix[i]);
                }
                else{
                    if( infix[i] == ')' ){
                        while ( !s.empty() && s.top() != '(' ) {
                            posfix += s.top() + " ";
                            s.pop();
                        }
                        if( !s.empty() ){
                            s.pop();
                        }
                    }
                    else{
                        if( prcd( infix[i] ) > prcd( s.top() ) ){
                            s.push( infix[i]);
                        }
                        else{
                            while ( ( !s.empty() )  && ( prcd(infix[i]) <= prcd(s.top()) ) ) {
                                posfix += s.top() + " ";
                                s.pop();
                            }
                            s.push( infix[i] );
                        }
                    }
                }
            }
        }
    }
    while ( !s.empty() ) {
        posfix += s.top();
        s.pop();
    }
    return posfix;
}

void reverseStr(string& str)
{
    int n = str.length();
 
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}