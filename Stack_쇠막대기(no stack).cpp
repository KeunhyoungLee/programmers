#include <string>
#include <vector>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    
    int bar=0;//막대기
    int cnt_in=0;//여는괄호
    for(int i=0; i<arrangement.size()-1;i++){
        if(cnt_in==0&&arrangement[i]=='(' && arrangement[i+1]==')'){//레이저만
            continue;
        }
        if(arrangement[i]=='(' && arrangement[i+1]!=')'){
            bar++;
            cnt_in++;
        }
        else if(arrangement[i]=='('&& arrangement[i+1]==')' ){
            answer+=bar;
        }
        else if(arrangement[i]==')'&& arrangement[i+1]==')' ){
            bar--;
            answer+=1;
            cnt_in--;
        }
    }
    return answer;
}
