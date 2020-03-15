#include <iostream>
#include <cstdlib>

using namespace std;
//������ ������ �������
void swap(char *arr , char *arr2)
{
    char *add;
    cout<<"Firstly:"<<endl<<"Array 1 : "<<arr<<endl<<"Array 2 : "<<endl<<arr2<<endl;
    add = arr2;
    arr2=arr;
    arr=add;
    cout<<arr<<endl<<arr2<<endl;
}

//������� ������ �������
int length(char *arr)
{
    int length = 0;
    for(int i = 0;  ;++i)
    {
        if (arr[i] != '\0') length++;
        else break;
    }
 return length;
}


//��� �� ������, �� ������� �������
char *resize(char *arr, int size, int new_size)
{
    char *new_Array = new char[new_size];
        for(int i = 0; i < size && i < new_size; ++i)
            new_Array[i] = arr[i];
        delete[]arr;

    return new_Array;
}

//������ �������
int strlen(char *arr)
{
    int length = 0;
    for(int i = 0;  ;++i)
    {
        if (arr[i]!= '\0') length++;
        else break;
    }

 return length;
}

//���������� ������ ��������
int strcmp( char *arr, char *arr2)
{
    for( ; *arr == *arr2 ; ++arr, ++arr2)
            if (*arr2 == '\0')
             return 0;
            if((unsigned char )*arr > (unsigned char )*arr2)
                return 1;
            else
                return -1;
}

//���-�� ���������� �� ������, �� �� �����
int strncmp (char *arr , char *arr2 , int Max_num)
{
    for( ; *arr == *arr2 ; ++arr, ++arr2)
        if (*arr2 == '\0')
             return 0;
        if((unsigned char )*arr > (unsigned char )*arr2)
             return 1;
        else
              return -1;
}


//������ ����������� ������� �����, ���� �� ����
char *strchr( char *arr, int a)
{
    int i = 0;
    while(arr[i] && arr[i] != a) ++i;
    return a == arr[i]?(char*) arr + i : NULL;
}

//�������� ���� ����� �� ������
char *strcpy(char *arr)
{
    int size = length ( arr);
    char *new_Arr = new char[size];
    for( int i = 0; i < size; ++i)
    new_Arr[i] = arr[i];

new_Arr[size] = '\0';
delete [] arr;

return new_Arr;
}

//���������� 2 ����� � ����
char *strcat(char *arr, char *arr2)
{
    int j = 0;
    int size = length ( arr);
    int size2 = length ( arr2);
    char *new_Array = new char[size+size2];
        for(int i = 0; i < size; ++i)
            new_Array[i]=arr[i];
        for(int i = size ; i < (size+size2); ++i)
            {
                new_Array[i]=arr2[j];
                ++j;
            }
        delete [] arr;
        delete [] arr2;
        new_Array[size+size2]='\0';

    return new_Array;
}

//��������� � ���� ������ ���������� ���-�� ��������� ������ ������
char *strncat( char *arr , char *arr2 , int n)
{
    int i = 0;
    int size = length(arr);
    for( i; i < n && arr2[i] != '\0'; i++)
        arr[size + i] = arr2[i];
        arr[size + i] = '\0';
    return arr;
}

//���� ���������� ����� ����� ��������
int strstr(char *arr, char *world)
{
    int size = length(arr);
    int size2 = length(world);
    int k;
    for(int i = 0 , k = 0; i < size; i++)
        if(arr[i]==world[0])
    {
        for(int j = 0; j < size2; j++)
            if(arr[i+j] == world[j])k++;
        if(k==size2) return i;
    }
    k=0;
return -1;
}


//����� � ������
char *strpbrk(char *arr, char *arr2)
{
    int  j , pos , f = 0;
    for(int i = 0; arr[i] != '\0' ; i++)
    {
    pos = i;
        for (int i = 0; arr2[i] != '\0' ; i++)
        {
            for ( int j = 0; arr[j] != '\0' ; j++)
                {
                    if(arr2[i] == arr[i])
                    {
                        if(j<=pos)
                        {
                            pos = j;
                            f = 1;
                        }
                    }
                }
        }
        if (f == 1)
        {
            return &arr[pos];
        }
        else
        {
            return NULL;
        }
        }
}

//����� ��������� ������ ������ � ������
char *strspn(char *arr , char *arr2)
{
    int size = length(arr);
    int size2 = length(arr2);
    int s = 0;
    char *new_Array = new char[size + size2];
        for(int i = 0; i  < size2; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                if(arr[j] == arr2[i])
                {
                   new_Array[s]=arr2[j];
                   s++;
                }

            }

        }
   delete[]arr;
   delete[]arr2;
return new_Array;
}

//������� ���-�� ���������� ��������� � ���� �������
int strcspn(char *arr, char *arr2)
{
    int size = length(arr);
    int size2 = length(arr2);
    int s = 0;
        for(int i = 0; i  < size2; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                if(arr[j] == arr2[i])
                s++;
            }

        }
   delete[]arr;
   delete[]arr2;
return s;
}


//����� ��������� ��� ����, �� ���� �� ��.
char *strcpy_s( char *arr)
{
    int size = length (arr);
    char *new_Arr = new char[size];
    for( int i = 0; i < size; ++i)
    new_Arr[i] = arr[i];

 new_Arr[size] = '\0';
 delete [] arr;

return new_Arr;
}

//���� � ������ ������� � ��������� ������� ������� ������� �������
int find_last_of( char *arr, char *arr2, int p)
{
     int  size = length(arr2);
     for(int i = 0 ; i  < size; ++i)
        {
            for(int j = p; j > 0; --j)
            {
                if(arr[j] == arr2[i])
                {
                   return i;
                   break;
                }
            }
        }
return -1;
}

//���� �������� ������� ������� � ������ � ������� �������
int find_first_of(char *arr, char *arr2, int p)
{
     int size = length(arr2);
     for(int i = 0 ; i  < size; ++i)
        {
            for(int j = p; j > 0; --j)
            {
                if(arr[j] == arr2[i])
                {
                   return i;
                   break;
                }
            }
        }
return -1;
}

//������� ������� ������� ��������, ������ ����������
int find_first_not_of(char *arr, char *arr2, int p)
{
     int size = length(arr2);
     for(int i = 0 ; i  < size; ++i)
        {
            for(int j = p; j > 0; --j)
            {
                if(arr[j] != arr2[i])
                {
                   return i;
                   break;
                }
            }
        }
return -1;
}

//������� ��������� �������
char *pop_back(char *arr)
{
    int size = length (arr);
    char *new_Array = new char[size-1];
    for(int i = 0; i < (size - 1); ++i)
      new_Array[i]=arr[i];

delete [] arr;
return new_Array;
}

char *push_back( char *arr)
{
    int size = length (arr);
    char *new_Array = new char[size+1];
    for(int i = 0; i < size ; ++i)
      new_Array[i]=arr[i];
  new_Array[size] = 'b';
 delete [] arr;
return new_Array;
}


