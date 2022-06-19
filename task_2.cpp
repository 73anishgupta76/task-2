#include <iostream>
using namespace std;
int main()
{
/*ANSWER no 1*/
    int n;
    cout<<"enter number"<<endl;
    cin >> n;
    if (n % 3 == 0 && n % 2 == 0)
        cout << "divisible by both 2 & 3" << endl;
    else if (n % 3 == 0 || n % 2 == 0)
        cout << "divisible by either 2 or 3" << endl;
    else
    cout<<"not divisible by 2 or 3"<<endl;
/*ANSWER no 2*/
    int n1,n2;
    cout<<"enter 2 number"<<endl;
    cin>>n1>>n2;
    char opt;
    cout<<"enter operation"<<endl;
    cin>>opt;
     switch (opt)
     {
     case '+':cout<<n1+n2<<endl;
         break;
    case '-':cout<<n1-n2<<endl;
         break;
    case '*':cout<<n1*n2<<endl;
         break;
    case '/':cout<<n1/n2<<endl;
         break;     
    case '%':cout<<n1%n2<<endl;
         break;     
     default:cout<<"invalid opration";
         break;
     }
/*ANSWER no 3*/
cout<<"1 ";
for(int i=0;i<=100;i++){
    if(i%2==0||i%3==0||i%5==0||i%7==0){
    if(i==2||i==3||i==5||i==7)
    continue;
    cout<<i<<" ";}
}
/*ANSWER no 4*/
/*The break statement terminates a while or for loop completely. 
The continue statement terminates execution of the statements within a while or
 for loop and continues the loop in the next iteration.*/
/*ANSWER no 5*/
int i=10;
do{
    cout<<9<<"x"<<i<<"="<<9*i<<endl;
    i--;
}while(i);
/*ANSWER no 6*/
/*While loop checks the condition first and then executes the statement.
whereas do while loop will execute the statement(s) at least once,
 then the condition is checked.*/
}
