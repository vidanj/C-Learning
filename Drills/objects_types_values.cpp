//Read and write a first name
import std;

using namespace std;

int main(){
    // std::cout << "Please enter your fisrt name and age: \n";
    // std::string first_name = "???";
    // double age = -1.0;
    // std::cin >> first_name >> age;
    // std::cout << "Hello, " << first_name << "(age " << (age * 12) << " months)\n";

    // return 0;
    cout << "Please enter a floating-point value:";
    double n = 0;
    cin >> n;
    cout << "n==" << n
        << "\nn+1 ==" << n+1
        << "\nthree times n ==" << n*3
        << "\ntwice n ==" << n+n
        << "\nn squared ==" << n*n
        << "\nhalf of n ==" << n/2
        << "\nsquare root of n ==" << sqrt(n)
        << "\n";

}
