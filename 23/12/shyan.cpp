#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;

string addSpaces(string& input) {  
    string result = "";  
    for(int i=0;i<input.length();i++)
    {
        result+=input[i];
        if((input[i]=='-' && input[i+1]=='>') || i==input.length()-1 || input[i]==' ')
            continue;
        result+=' ';
    }
    return result;  
}  

int main()
{
    // string a="asjdboiasd   alkn";
    // stringstream ss(a);
    // string b="aaaaa";

    // cout<<b<<"111"<<endl;
    // ss>>b;
    // cout<<b<<"111"<<endl;
    // ss>>b;
    // cout<<b<<"111"<<endl;
    // ss>>b;
    // cout<<b<<"111"<<endl;
    // string a= "E->E+w";
    // string c="E-> E+a";
    // string b = addSpaces(c);
    // cout<<b<<endl;


    std::ostringstream oss;
    std::string line;
    while (std::getline(std::cin, line)) {
        // 检查是否包含结束符'@'
        if (line.find('@') != std::string::npos) {
            // 如果包含结束符，截取字符串并追加到oss中
            oss << line.substr(0, line.find('@'));
            break;
        }
        else {
            // 否则，追加整行到oss中
            oss << line << '\n';
        }
    }
    //获取
    std::string inputString = oss.str();

    cout<<inputString;

    vector<string> v;
    int from = 0;
    int len = 0;
    int i;
    for (i = 0; i < inputString.length(); ++i) {
        if (inputString[i] == '\n') {
            len = i - from;
            v.push_back(inputString.substr(from, len));
            from = i + 1;
        }
    }
    v.push_back(inputString.substr(from));

    cout<<"v:"<<endl;
    for (auto& x : v)
    cout<<x<<endl;
    cout<<endl;

    for (int i=0;i<v.size();i++)
    {
        v[i]=addSpaces(v[i]);
    }

    cout<<"v2:"<<endl;
    for (auto& x : v)
    cout<<x<<"111"<<endl;

/*
    string a="E->E+   T";
    string b=addSpaces(a);
    cout<<b<<"aaaa"<<endl;
    return 0;
*/

}



