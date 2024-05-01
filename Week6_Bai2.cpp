#include<bits/stdc++.h>
using namespace std;


class Student
{
private:
    int age, standard;
    string first_name, last_name;
public:
    int get_age()
    {
        return age;
    }
    void set_age(int std_age)
    {
        age= std_age;
    }
    int get_standard()
    {
        return standard;
    }
    void set_standard(int std_standard)
    {
        standard = std_standard;
    }
    string get_firstname()
    {
        return first_name;
    }
    void set_firstname(string std_first_name)
    {
        first_name = std_first_name;
    }
    string get_lastname()
    {
        return last_name;
    }
    void set_lastname(string std_last_name)
    {
        last_name = std_last_name;
    }
    string to_string()
    {
        stringstream total;
        total << age << "," << first_name << "," << last_name << "," << standard;
        return total.str();
    }
};

int main()
{

    Student data;
    int tuoi, daoduc;
    string Ho, ten;
    cin >> tuoi >> Ho >> ten >> daoduc;
    data.set_age(tuoi);
    data.set_firstname(Ho);
    data.set_lastname(ten);
    data.set_standard(daoduc);
    cout << data.get_age() << "\n";
    cout << data.get_lastname() << ",";
    cout << data.get_firstname() << "\n";
    cout << data.get_standard() << "\n" << "\n";
    cout << data.to_string();
}
