#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i=0; i<prices.size(); i++){
        answer.push_back(0);//초기값 0
        for(int j=i+1; j<prices.size();j++){
            if(prices[i]>prices[j]){
                answer[i]++;//비교하는 값보다 크면 초를 증가시키고 break;
                break;
            }
            else{
                answer[i]++;//작으면 초 증가시키고 계속
            }
        }
    }
    return answer;
}
