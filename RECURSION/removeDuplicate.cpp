#include <iostream>
#include <string>
using namespace std;

// void removeDuplicate(string name){
//     string ans = "";

//     for(int i=0;i<name.length();i++){
//         bool isDuplicate = false;
//         for(int j=0;j<i;j++){
//             if(name[i]==name[j]){
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if(!isDuplicate){
//             ans += name[i];
//         }
//     }
//     cout<<ans;
// }

void removeDupicates(string str, string ans, int i, bool map[26])
{
    if (i == str.length())
    {
        cout << "ans : " << ans << endl;
        return;
    }
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');
    if (map[mapIdx] == true)
    { // duplicate
        removeDupicates(str, ans, i + 1, map);
    }
    else
    { // not duplicate
        map[mapIdx] = true;
        removeDupicates(str, ans + ch, i + 1, map);
    }
}

int main()
{ 
    string name = "sheshkaran";
    string ans = "";
    bool map[26] = {false};

    // removeDuplicate(name);
    removeDupicates(name, ans, 0, map);
}