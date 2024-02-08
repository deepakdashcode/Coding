#include<bits/stdc++.h>
using namespace std;
void print(int arr[3][3]){
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    cout << "\n\n";
}
int main(){
    int g1[3][3] = {
        {0, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };

    int g2[3][3] = {
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 0}
    };

    int un[3][3] = {0};
    int in[3][3] = {0};

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            if(g1[i][j] or g2[i][j]) un[i][j] = 1;
            if(g1[i][j] and g2[i][j]) in[i][j] = 1;
        }
    }
    print(un);print(in);
    return 0;
}