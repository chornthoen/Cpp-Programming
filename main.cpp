#include <iostream>
using namespace std;
void input2(){
    string a,answer;
    string b("hello");
    string c="my string";
    a="string in c++"; // assign "string in c++"to a
    cout <<"a="<<a <<endl;
    cout <<"b="<<b<<endl;
    cout <<"c="<<c <<endl;
    cout <<"input new data " <<endl;
    cout <<"input string a ? ";
    getline(cin,a);
    cout <<"input string b ? ";
    getline(cin,b);
    cout <<"input string c ?";
    getline(cin,c);
    //...
    cout <<endl;
    do {
        cout <<"Do you want to print all string (yes/no) ? ";
        getline(cin,answer);
    } while (answer!="yes" && answer!="no") ;

    if(answer=="yes") {
        cout <<"string a="<< a <<",size ="<< a.size() <<" chars"<<endl;
        cout <<"string b="<< b <<",size ="<< b.size() <<" chars"<<endl;
        cout <<"string c="<< c <<",size ="<< c.size() <<" chars"<<endl;
    }
}
void input1(){
    int id;
    char subj1[20], subj2[20];
    cout << "enter student ID ? ";
    cin >> id;
    cin.ignore();
    cout << "enter name of subject1 ? ";
    cin.getline(subj1, 20, '\n');
    cout << "enter name of subject2 ? ";
    cin.getline(subj2, 20, '\n');
    cout << "press key: ";
    cin.get();
    cout << "ID\tSubj1\tSubj2" << endl;
    cout << id << '\t' << subj1 << '\t' << subj2 << endl;
}
void input3(){
    string s="sample string in c++";
    cout <<"s="<<s <<endl;
    for(int i=0;i<s.size(); ++i){
        if(s[i]==' ') cout <<endl;
        else cout <<s[i];  // s.at(i)
    }
    cout <<endl;
    s="1a25x46";
    cout <<"sum number of string s="<<s <<endl;
    int sum=0;
    for(int i=0;i<s.size(); ++i)
        if(isdigit(s[i])) {
            (i<s.size()-1) ? cout <<s[i]<<"+": cout <<s[i];
            sum+=(int)(s[i]-'0');
        }
    cout <<"="<<sum <<endl;
}

int main() {
    input1();
    //input2();
    //input3();
    return 0;

}





