#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<"*";
        }
        int space=2*n - 2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
         for (int j = 1; j <=i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<"*";
        }
        int space=2*n - 2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
         for (int j = 1; j <=i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}
// ===================================================================================================

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i<=n/2){
//                 if(j<=i || j>n-i){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else (i>n/2){
//                 if(j>=i || j<=n-i+1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }