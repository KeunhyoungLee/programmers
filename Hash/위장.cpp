#include <string>
#include <vector>
//#include <hash_map>
#include <map>

using namespace std;
//using namespace stdext;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    
    //hash_map<string, int> clothes_map;
    map<string, int> clothes_map;
    vector<string> v;
    
    /*for(auto i : clothes){
        if(clothes[i][1] != )
        //int i=0; i<clothes.size(); i++){
        clothes_map.put
    }*/
    for(int i=0; i<clothes.size(); i++){
        if(clothes_map[clothes[i][1]] ==0){
            clothes_map[clothes[i][1]]=1;
            v.push_back(clothes[i][1]);
        }
        else
            clothes_map[clothes[i][1]]++;
    }
    answer=1;
    
     for(int i=0; i<v.size(); i++)
        answer*=(clothes_map[v[i]]+1);
    
    return answer-1;
}
