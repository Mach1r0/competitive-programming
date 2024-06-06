    #include<iostream>
    #include<iomanip>
    using namespace std; 

    int main(void){
        int t; cin >> t;
        double A, B, C;  
        for (int i = 0; i < t; i++){
            cin >> A >> B >> C; 
            cout << "0x" << nouppercase << left << hex << static_cast<long long>(A) << "\n"; 
            cout << right << setw(14) << setfill('_') << fixed << setprecision(2) << B << showpos << "\n"; 
            cout.unsetf(ios_base::showpos);
            cout << uppercase << scientific << setprecision(9) << C << "\n";
        }
        return 0;
    }