#include <iostream>
#include <cstring>

using namespace std;

class dnode{
    public:
      char name[30];
      char number[50];
      char gmail[40];
      dnode *prev, *next;
      dnode(char n[], char r[], char g[]){
           strcpy(name, n);
           strcpy(number, r);
           strcpy(gmail, g);
           prev = NULL;
           next = NULL;
      }

      friend class dlist;
};

class dlist{
    dnode *head,*temp,*ptr;
    dnode *ptr1, *ptr2, *dup;

    public:
        dnode *prevn;

    void insert();
    void sort();
    void deletecontact(char n[20]);
    void deletesamenumber();
    void deletesamename();
    void deletesamegmail();
    void searchbyname(char p[20]);
    void searchbynumber(char no[30]);
    void searchbygmail(char g[20]);

        // dnode *head,*temp,*ptr;
        // friend class apply;
        void accept();
        void display();
        void update(char ch[10]);
        dlist()
                {
                    head=NULL;
                    temp=NULL;
                    ptr=NULL;
                    ptr1=NULL;
                    ptr2=NULL;
                    dup=NULL;
                }    
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}