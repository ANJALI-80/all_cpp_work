 #include<iostream>
 using namespace std;
 
 int main()
 {
   
 
 int a = 5; // simple or ordinary variable
    int & S = a;
    int & S0 = S;
    int & S1 = S0;
    cout << "a = " << a << "\t"
         << "S = " << S << "\t"
         << "S0 = " << S0 << "\t"
         << "S1 = " << S1 << '\n';
         
}
