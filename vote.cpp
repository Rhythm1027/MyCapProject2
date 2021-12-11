#include<iostream>
using namespace std;
int main(){
int age;
int voterID;
cout<<"Do you have voter ID card : if yes type 1 else type 2"<<endl;
cin>>voterID;
if(voterID==1){
    cout<<"type your age"<<endl;
    cin>>age;
if(age>=18){
    cout<<"you are eligible to vote"<<endl;
}
else{
    cout<<"you are not eligible to vote"<<endl;
}
}
else{
    cout<<"you are not eligible to vote"<<endl;
}

return 0;
}