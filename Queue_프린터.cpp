#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<pair<int,int>> print;
    for(int i=0; i<priorities.size(); i++)
        print.push(pair<int,int>(priorities[i],location));
    
    while(!print.empty()){
        queue<pair<int,int>> tmp;
        tmp.push(print.front());//비교하기 위한 큐 front
        print.pop();
        int q_size=print.size();
        queue<pair<int,int>> print_2= print;//임시큐
        for(int i=0; i<q_size; i++){
            if( tmp.front().first< print_2.front().first){//중요도가 높은 문서가 있으면
                print.push(tmp.front());
                tmp.pop();
                break;
            }
            else{
                print_2.pop();
                if(i==print.size()-1 && location == tmp.front().second ){
                    answer++;
                    return answer;    
                }
                else if( i== print.size()-1 && location != tmp.front().second)
                    answer++;
            }
        }
    }
    return answer;
}
