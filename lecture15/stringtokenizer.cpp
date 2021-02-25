#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[100]="1234...$$2434''.435...498787''%";
   

    char *ptr=strtok(a,".'$%");
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=strtok(NULL,".'$%");

    }



    return 0;
}
