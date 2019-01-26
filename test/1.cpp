#include <string>
#include <vector>
#include <queue>

using namespace std;

bool solution(vector<int> arrA, vector<int> arrB) {
    bool answer = false;
    
    if(arrA.size()!=arrB.size()){
        answer=false;
        return answer;
    }
    queue<int> A;
    queue<int> B;
    
    for(int i=0; i<arrA.size(); i++){
        A.push(arrA[i]);
        B.push(arrB[i]);
    }
    for(int i=0; i<arrA.size(); i++){
        if(A==B){
            answer=true;
            return answer;    
        }
        int tmp=A.front();
        A.pop();
        A.push(tmp);
    }
    return answer;
}
