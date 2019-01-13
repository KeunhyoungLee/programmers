#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    stack<int> bar;   
    
    for(int i=0; i<arrangement.size(); i++){
        if(arrangement[i]=='('){
            bar.push(0);
        }
        else{
            if(arrangement[i-1]=='('){
                bar.pop();
                answer+=bar.size();
            }
            else{
                bar.pop();
                answer++;
            }
        }
    }
    return answer;
}
