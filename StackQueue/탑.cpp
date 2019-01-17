#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    //거꾸로 탐색
    for(int i=heights.size()-1; i>0; i--){
        int flag=0;//자신보다 높은 수신탑이 없는 경우에 0
        for(int j=i-1; j>=0; j--){
            if(heights[i] < heights[j]){
                answer.push_back(j+1);
                flag=1;
                break;
            }
        }
        if( flag==0 )//자신보다 높은 수신탑이 없는 경우에 0
            answer.push_back(0);
    }
    answer.push_back(0);// 첫 원소 항상 0
    reverse(answer.begin(), answer.end());
    //역순으로
    return answer;
}
