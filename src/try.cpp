#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<string> split(const string &str);
string rtrim(const string &str);
string ltrim(const string &str);

int main(int argc, char const *argv[])
{

    string line;
    int i = 0;

    vector<string> strings;
    string bus_station = string("L_485"); 
    string bus_trips = string("BusTrips"); 
    string inter_trips = string("InterTrips"); 

    while (cin)
    {
        if (getline(cin, line))
        {
            // check if the line starts with BusStations 
            if(line.rfind(bus_station, 0) == 0)
            {
                cout << "we are here " << endl; 
                cout << line << endl; 
            }
            // cout << line << endl; 
        }


    }
    cout << "size: " << strings.size() << endl;
    for (auto v : strings)
    {
        cout << v << endl;
    }

    return 0;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}
vector<string> split(const string &str)
{

    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        if (str.substr(start, end - start).find_first_not_of(' ') != std::string::npos)
            tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}