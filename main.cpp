#include <iostream>
#include <string>
using namespace std;

class Lankweislove{
    public:
        Lankweislove(string z){
            setName(z);
        }
        void setName(string x){
        name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;

};
int main()
{
        Lankweislove bo("C++ programming");

        cout << bo.getName();
    return 0;
}
