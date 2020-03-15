#include <iostream>
#include <cstdlib>
#include "STRING.H"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    char str[] = "FATAL ERROR" ;
    char str2[] = "but don't upset";

    cout<<"Ôóíêö³ÿ swap"<<endl;
    swap(str , str2);

    cout<<"Ôóíêö³ÿ length"<<endl;
    length(str);

    cout<<"Ôóíêö³ÿ resize"<<endl;
    resize( str , 5 ,3);

    cout<<"Ôóíêö³ÿ strlen"<<endl;
    strlen(str );

    cout<<"Ôóíêö³ÿ strcmp"<<endl;
    strcmp(str , str2);

    cout<<"Ôóíêö³ÿ strncmp"<<endl;
    strncmp(str , str2 , 10);

    cout<<"Ôóíêö³ÿ strchr"<<endl;
    strchr(str , 3);

    cout<<"Ôóíêö³ÿ strcpy"<<endl;
    strcpy(str );

    cout<<"Ôóíêö³ÿ strcat"<<endl;
    strcat(str , str2);

    cout<<"Ôóíêö³ÿ strncat"<<endl;
    strncat(str , str2 , 2);

    cout<<"Ôóíêö³ÿ strstr"<<endl;
    int q = strstr(str , str2);
    if(q == -1)cout<<"error"<<endl;
    else cout<<q<<endl;

    cout<<"Ôóíêö³ÿ strpbrk"<<endl;
    strpbrk(str , str2);

    cout<<"Ôóíêö³ÿ strspn"<<endl;
    strspn(str , str2);

    cout<<"Ôóíêö³ÿ strcspn"<<endl;
    strcspn(str , str2);

    cout<<"Ôóíêö³ÿ strcpy_s"<<endl;
    strcpy_s(str );

    cout<<"Ôóíêö³ÿ find_last_of"<<endl;
    int h = find_last_of(str , str2 , 5);
    if (h == -1) cout<<"error"<<endl;
    else cout<<h<<endl;


    cout<<"Ôóíêö³ÿ find_first_of"<<endl;
    int b = find_first_of(str , str2 , 5);
    if (b == -1) cout<<"error"<<endl;
    else cout<<b<<endl;


    cout<<"Ôóíêö³ÿ find_first_not_of"<<endl;
    int c=find_first_not_of(str, str2 , 5);
    if (c == -1) cout<<"error"<<endl;
    else cout<<c<<endl;


    cout<<"Ôóíêö³ÿ pop_back"<<endl;
    pop_back(str );

    cout<<"Ôóíêö³ÿ push_back"<<endl;
    push_back(str );

    return 0;
}
