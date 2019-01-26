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
    //갯수 다를때 바로 out
    queue<int> A;
    queue<int> B;
    //두 배열 큐에 담기
    for(int i=0; i<arrA.size(); i++){
        A.push(arrA[i]);
        B.push(arrB[i]);
    }
    //옆으로 한 칸씩 옮기면서 같으면 바로 true하고 out
    for(int i=0; i<arrA.size(); i++){
        if(A==B){
            answer=true;
            return answer;    
        }
        //다르면 앞에꺼 제거하고 뒤로 
        int tmp=A.front();
        A.pop();
        A.push(tmp);
    }
    return answer;
}
