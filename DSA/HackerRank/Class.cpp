#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int value1, value2;
    string str1, str2;

public:
    void set_age(int age)
    {
        value1 = age;
    }

    int get_age()
    {
        return value1;
    }

    void set_standard(int standard)
    {
        value2 = standard;
    }

    int get_standard()
    {
        return value2;
    }

    void set_first_name(string first_name)
    {
        str1 = first_name;
    }

    string get_first_name()
    {
        return str1;
    }

    void set_last_name(string last_name)
    {
        str2 = last_name;
    }

    string get_last_name()
    {
        return str2;
    }

    string to_string()
    {
        stringstream ss;

        ss << value1 << "," << str1 << "," << str2 << "," << value2;

        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}