#include<iostream>
#include<string.h>

using namespace std;

void swap(char (&str1)[30],char (&str2)[30]){
    char temp[30];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}

int main(){
    char str1[30],str2[30];
    cout<<"Enter String String 1 : "; cin>>str1;
    cout<<"Enter String String 2 : "; cin>>str2;

    swap(str1,str2);
    cout<<"After swapping "<<endl;
    cout<<"String 1 : "<<str1;
    cout<<endl<<"String 2 : "<<str2<<endl;
    
    return 0;
} 
