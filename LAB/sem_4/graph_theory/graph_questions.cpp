#include<bits/stdc++.h>
using namespace std;

vector<int> findRepeatedElements(vector<int>& nums, int* uniques) {
    unordered_map<int, int> countMap;
    vector<int> repeatedElements;
    
    *uniques = 0;
    for (int num : nums) {
        countMap[num]++;
    }

    for (const auto& pair : countMap) {
        if (pair.second > 1) repeatedElements.push_back(pair.first);
        else (*uniques) ++;        
    }
    (*uniques) += repeatedElements.size();
    return repeatedElements;
}
void print(vector<int> &nums){
    for(int i = 0; i < nums.size(); i ++)
            cout << nums[i] << " ";
    cout << endl;
}
vector<int> getDegrees(){
    int n;
    cout << "Enter the number of nodes : ";
    cin >> n;
    int n1 = n;
    vector<vector<int>> graph;
    vector<vector<int>> parallel;
    vector<int> degrees;
    vector<int> selfLoops;
    bool hasSelfLoop = false, hasParallel = false;
    int edges = 0;
    for(int i = 0; i < n1; i ++){
        cout << "Enter the number of edges for Node : " << i << " : " <<endl;
        cin >> n;
        vector<int> temp;
        cout << "Enter the nodes with which you want to connect " << i << " to : ";
        for(int j = 0; j < n; j ++){
            int node;
            cin >> node;
            if(node == i) {
                hasSelfLoop = true;
                cout << "DBG : " << i << endl;
                selfLoops.push_back(node);
            }
            else{
                if(node < 0 || node > n1)
                {
                    cout << "Invalid Node Detected. Terminating Program\n";
                    exit(0);
                }
                temp.push_back(node);
            }
        }
        int uni = 0;
        
        vector<int> par = findRepeatedElements(temp, &uni);
        parallel.push_back(par);
        edges += uni;
        if(par.size() != 0) hasParallel = true;
        set<int> uniqueElements(temp.begin(), temp.end());
        degrees.push_back(uniqueElements.size());
        graph.push_back(temp);
    }
    edges /= 2;
    cout << "Edges  : " << edges << endl;
    cout << "Vertices :  " << n1 << endl;
    if(hasSelfLoop)
    {
        cout << "Self Loop Found at Node(s)\n";
        print(selfLoops);
    }
    else{
        cout << "No self loop found\n";
    }
    if(hasParallel){
        cout << "Parallel Edges Found in between\n";
        for(int i = 0; i < parallel.size(); i ++){
            if(parallel[i].size() != 0)
            {
                cout << i << " and ";
                print(parallel[i]);
            }
        }
    }
    else{
        cout << "No parallel Edges found\n";
    }

    sort(degrees.begin(), degrees.end());
    return degrees;
}
bool checkEqual(vector<int> &v1, vector<int> &v2){
    if(v1.size() != v2.size()) return false;
    int n = v1.size();
    for(int i = 0; i < n; i ++){
        if(v1[i] != v2[i]) return false;
    }
    return true;
}
int main(){
    vector<int> g1;
    vector<int> g2;
    g1 = getDegrees();
    g2 = getDegrees();

    if(checkEqual(g1, g2)) cout << "\nBoth Graphs Are Isomorphic\n";
    else cout << "\nBoth Graphs Are NOT Isomorphic\n";
    return 0;
}
/*
OUTPUT
Enter the number of nodes : 3
Enter the number of edges for Node : 0 : 
4
Enter the nodes with which you want to connect 0 to : 0 1 1 2
DBG : 0
Enter the number of edges for Node : 1 : 
2
Enter the nodes with which you want to connect 1 to : 0 0
Enter the number of edges for Node : 2 : 
2
Enter the nodes with which you want to connect 2 to : 2 0
DBG : 2
Edges  : 2
Vertices :  3
Self Loop Found at Node(s)
0 2 
Parallel Edges Found in between
0 and 1 
1 and 0 
Enter the number of nodes : 3       
Enter the number of edges for Node : 0 : 
4
Enter the nodes with which you want to connect 0 to : 0 1 1 2
DBG : 0
Enter the number of edges for Node : 1 : 
2
Enter the nodes with which you want to connect 1 to : 0 0
Enter the number of edges for Node : 2 : 
2
Enter the nodes with which you want to connect 2 to : 2 0
DBG : 2
Edges  : 2
Vertices :  3
Self Loop Found at Node(s)
0 2 
Parallel Edges Found in between
0 and 1 
1 and 0 

Both Graphs Are Isomorphic

*/