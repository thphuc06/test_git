#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

// void readFile()
// {
//     ifstream file_in("input.txt");
//     if (!file_in)
//     {
//         cout << "nah";
//         return;
//     }
//     string line = "";
//     getline(file_in, line);
//     while (getline(file_in, line, ';'))
//     {
//         cout << line << " ";
//         getline(file_in, line, ';');
//         cout << line << " ";
//         getline(file_in, line);
//         cout << line << " ";
//         cout << endl;
//     }
//     file_in.close();
// }

// #include <iostream>
// #include <cstring>
// #include <fstream>
// using namespace std;

void readFile()
{
    ifstream file_in("input.txt");
    if (!file_in)
    {
        cout << "nah";
        return;
    }

    char line[1000];

    // Bỏ dòng đầu tiên (tiêu đề)
    file_in.getline(line, 1000);

    // Đọc các dòng tiếp theo
    while (file_in.getline(line, 1000))
    {
        char *token = strtok(line, ";");
        cout << token << " ";
        token = strtok(NULL, ",");
        int Int = atoi(token);
        cout << Int + 1 << " ";
        token = strtok(NULL, "\0");
        float Float = atof(token);
        cout << Float + 0.1 << " ";
        cout << endl;
    }

    file_in.close();
}

int main()
{
    readFile();
    try
    {
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}