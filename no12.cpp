#include<iostream>

using namespace std;

char* strcpy(const char *str){
	char str_cpy[100];
	char ch;
	int i = 0;
	while(ch!='\0'){
		str_cpy[i]=str[i];
		ch=str[i];
		i++;
	}
	return str_cpy;
}
int main()
{
    char str[100];

    cout << "Enter string s1: ";
    cin >> str;

/*    char* str_cpy;
	str_cpy= */
strcpy(str);
	cout<< "after copying: " <<strcpy;

    return 0;
}
