#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        int num=i;
        for(int k=1; k<=i; k++){
            cout<<num;
            num++;
        }
        cout<<endl;

    }
    

}





