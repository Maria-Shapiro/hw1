#include <iostream>
using namespace std;

int main (){
    
    int f0=0;
    int f1=1;
    int f2;
    int N;
    
    cout << "Please! enter N" << endl;
    cin >> N;
    cout<< " the input is  "<< N <<endl;
    for (int i=1; i < N; i++) {
        f2=f0 + f1;
        cout << " the "<<i<<"-th finubanachi is: "<<f2 << endl;
        
        f1 = f2;
        f0 = f1;
    }
    
    //cout << f2 << endl;
    return 0;
}
