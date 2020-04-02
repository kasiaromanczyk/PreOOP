#pragma once
#include<iostream>


class MyString{
    char * string;
    int len;    

public:
    MyString(const char * text);
    MyString(MyString&);

    int operator==(const MyString&)const;       // operator ==, returns 1 if statements are identical, otherwise returns 0
    MyString operator*(int x);                  //operator * 'multipies' statement by x
    void Print();                               //prints statement
    char& operator[](int);                      /*returns letter at the given position in the statement,
                                                    & enables using as l-value*/
    MyString & operator =(const MyString&);     //copying assignment operator
    MyString substr(int,int)const;              //'cuts out' given part of the statement

    
};
