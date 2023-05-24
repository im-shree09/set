// #include <iostream>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     int count = 10;
//     char str[10];
//     FILE *fp;
    
//     fp = fopen("file.txt","w+");
//     fputs("An example file\n", fp);
//     fputs("Filename is file.txt\n", fp);
    
//     rewind(fp);
    
//     while(feof(fp) == 0)
//     {
//         fgets(str,count,fp);
//         cout << str << endl;
//     }
    
    
//     fclose(fp);
//     return 0;

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int count = 10;
    string str;
    ifstream file("file.txt");

    if (file.is_open())
    {
        while (getline(file, str))
        {
            cout << str << endl;
        }

        file.close();
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}
