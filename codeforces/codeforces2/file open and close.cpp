
#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *p;
    char filen[]="my_name.txt";
    p=fopen(filen,"w");
    fprintf(p,"this is my first program in c about file");
    fprintf(p,"this is my second program in c about file");

    fclose(p);
    return 0;
}
