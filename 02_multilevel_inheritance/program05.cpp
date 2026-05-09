#include<iostream>
using namespace std;
class institute{
    private:
    string institute_name;
    int institute_code;
    public:
    institute(string i_n,int i_c)
    {
        institute_name=i_n;
        institute_code=i_c;
    }
    void set_insname(string n)
    {
        institute_name=n;
    }
    void set_inscode(int c)
    {
        institute_code=c;
    }
    string get_insname()
    {
        return institute_name;
    }
    int get_inscode()
    {
        return institute_code;
    }

};
class department:protected institute
{
    
};
int main()
{

}