#include<iostream>
#include"MyString.h"

MyString::MyString(const char * text){
    len=0;
    for(;text[len]!=NULL;len++);
    string = new char [len];
    for(int i=0;i<len;i++)string[i]=text[i];

}

MyString::MyString(MyString& origin){
    len=origin.len;
    string = new char [len];
    for(int i=0;i<len;i++)string[i]=origin.string[i];
}

int MyString::operator==(const MyString& drugi)const{
    int i=0;
    for(i;string[i]==drugi.string[i];i++);
    if(string[i-1]==NULL)return 1;  //reaches NULL and increment by one, so string[i-1] must equal null 
    return 0;
}

MyString MyString::operator*(int x){
    int length = 2*len;

    char *napis = new char [length];
    for(int i=0;i<len-1;i++)napis[i]=string[i];
    napis[len-1]=' ';
    for(int i=0;i<len;i++)napis[i+len]=string[i];
    
    MyString result(napis);

    return result;
}

void MyString::Print(){
    std::cout<<string<<std::endl;
}

char& MyString::operator[](const int x){

return string[x];
}

MyString & MyString::operator =(const MyString& origin){
    delete string;                          //deleteing 'old' contents
    len=origin.len;                         //creating new contents
    string = new char [len];
    for(int i=0;i<len;i++)string[i]=origin.string[i];

}
MyString MyString::substr(int x ,int y)const{
    int length = y-x+2;
    char * text = new char [length];
    for(int i=0;i<length-1;i++)text[i]=string[i+x];
    text[length-1]=NULL;
    MyString result(text);
    return result;
}
