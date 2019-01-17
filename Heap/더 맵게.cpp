#include <string>
#include <vector>
//#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int count=0;
    priority_queue<int, vector<int>, greater<int>> scov;
    for(int i=0; i<scoville.size(); i++){
        if(scoville[i]>=K)
            continue;
        scov.push(scoville[i]);
    }
    
    while(scov.top()<K){
        if(scov.size() < 2)
            return -1;
        int a=scov.top();
        scov.pop();
        int b=scov.top();
        scov.pop();
        
        int sum=a+b*2;
        
        scov.push(sum);
        count ++;
    }
    return count;
}
/*sort(scoville.begin(), scoville.end());//정렬 - 제일 작은 스코빌 두 개만 사용하면 됨
    for(int i=scoville.size()-1; i>=0; i--) // 스코빌 기준보다 높은 음식 스코빌 제외
        if(scoville[i]>=K)
            scoville.pop_back();
        else
            break;
    
    int count=0;
    int i=0;
    while(i <scoville.size()-1){      
        if(scoville[i+1]<K && scoville[i]<K){
            count++;
            scoville[i+1]=scoville[i]+(scoville[i+1]*2);
            if(scoville[i+1]>=K){
                scoville[i]=scoville[i+1];
                i+=2;
                continue;
            }
            i++;
            sort(scoville.begin()+i, scoville.end());
            continue;
        }
    }
    
    if(i==scoville.size()-2)
        return -1;
    else if(scoville[i+1]<K)
        return -1;
    else 
        return count;
    */

/*
    deque<int> scov;
    
    for(int i=0; i<scoville.size(); i++){
        scov[i]=scoville[i];
    }
    */
