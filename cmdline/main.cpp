#include "std_lib_facilities.h"
#include "complex"
#include "vector"
int main() {
    string unit;
    double max=-999999999999999;
    double min=9999999999999999;
    double temp;
    double sum=0;
    int num=0;
    while(cin>>temp>>unit) {
        
        if(unit=="cm")
            sum+=.1*temp;
        else if(unit=="m")
            sum+=1*temp;
        else if(unit=="in")
            sum+=.0254*temp;
        else if(unit=="ft")
            sum+=(12*2.54)/100;
        else {
            cout << "Wromg unit" << endl;
            break;
        }
        num++;
        if(temp<min) {
            min=temp;
            cout << "Smallest so far" << endl;
        }
        if(temp>max) {
            max=temp;
            cout << "Largest so far" << endl;
        }
        cout << temp << endl;
        cout << "value no: " << num << endl;
        cout << sum << " sum in meters so far" << endl;
        cout << "Smallest so far: " << min << endl;
        cout << "Largest so far: " << max << endl;
    }
    
    
}



