//Read and write a first name
#include "PPP.h"
using namespace std;

import std;

int main(){
    // std::cout << "Please enter your fisrt name and age: \n";
    // std::string first_name = "???";
    // double age = -1.0;
    // std::cin >> first_name >> age;
    // std::cout << "Hello, " << first_name << "(age " << (age * 12) << " months)\n";

    // return 0;
    // cout << "Please enter a floating-point value:";
    // double n = 0;
    // cin >> n;
    // cout << "n==" << n
    //     << "\nn+1 ==" << n+1
    //     << "\nthree times n ==" << n*3
    //     << "\ntwice n ==" << n+n
    //     << "\nn squared ==" << n*n
    //     << "\nhalf of n ==" << n/2
    //     << "\nsquare root of n ==" << sqrt(n)
    //     << "\n";

    //She she laughed "he he he!" because what he did did not look very very good good.
    // int number_of_words = 0;
    // string previous;
    // string current;
    // while (cin>>current)
    // {
    //     ++number_of_words;
    //     if (previous==current)
    //     {
    //         cout << "word number " << number_of_words << " repeated word: " << current << "\n";
    //     }
    //     previous = current;
        
    // }

    // double d = 0;
    // while (cin>>d)
    // {
    //     int i = d;
    //     char c = i;
    //     cout << "d==" << d
    //     << " i==" << i
    //     << " c==" << c
    //     << " char("<<c<<")\n";
    // }

    cout << "Enter the name of the person you want to write to \n";
    string first_name = "???";
    cin >> first_name;
    cout << "Enter your age \n";
    int age;
    cin >> age;
    if (age < 0 || age > 110){
        simple_error("you're kidding!");
    }
    cout << "Enter the name of a friendo \n";
    string friend_name = "???";
    cin >> friend_name;
   
    cout << "Dear, " << first_name
        << ".\n How are you man? I am fine, like you should know really.\n"
        << "Being employed is kind of a chore but hey, the money helps a little, maybe soon we will finally be free."
        << "\nLets hope that it comes to be soonish."
        << "Have you seen " << friend_name << " lately?\n"
        << "I hear you just had a birthday and you are " << age << " years old.";
    
    
}
