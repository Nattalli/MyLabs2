#include <iostream>
#include <cstdlib>
#include "STRING.H"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    char str[] = "FATAL ERROR" ;
    char str2[] = "but don't upset";

    cout<<"������� swap"<<endl;
    swap(str , str2);

    cout<<"������� length"<<endl;
    length(str);

    cout<<"������� resize"<<endl;
    resize( str , 5 ,3);

    cout<<"������� strlen"<<endl;
    strlen(str );

    cout<<"������� strcmp"<<endl;
    strcmp(str , str2);

    cout<<"������� strncmp"<<endl;
    strncmp(str , str2 , 10);

    cout<<"������� strchr"<<endl;
    strchr(str , 3);

    cout<<"������� strcpy"<<endl;
    strcpy(str );

    cout<<"������� strcat"<<endl;
    strcat(str , str2);

    cout<<"������� strncat"<<endl;
    strncat(str , str2 , 2);

    cout<<"������� strstr"<<endl;
    int q = strstr(str , str2);
    if(q == -1)cout<<"error"<<endl;
    else cout<<q<<endl;

    cout<<"������� strpbrk"<<endl;
    strpbrk(str , str2);

    cout<<"������� strspn"<<endl;
    strspn(str , str2);

    cout<<"������� strcspn"<<endl;
    strcspn(str , str2);

    cout<<"������� strcpy_s"<<endl;
    strcpy_s(str );

    cout<<"������� find_last_of"<<endl;
    int h = find_last_of(str , str2 , 5);
    if (h == -1) cout<<"error"<<endl;
    else cout<<h<<endl;


    cout<<"������� find_first_of"<<endl;
    int b = find_first_of(str , str2 , 5);
    if (b == -1) cout<<"error"<<endl;
    else cout<<b<<endl;


    cout<<"������� find_first_not_of"<<endl;
    int c=find_first_not_of(str, str2 , 5);
    if (c == -1) cout<<"error"<<endl;
    else cout<<c<<endl;


    cout<<"������� pop_back"<<endl;
    pop_back(str );

    cout<<"������� push_back"<<endl;
    push_back(str );

    return 0;
}
