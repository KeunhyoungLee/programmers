#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    //정렬해야하고 중복(동명이인)되어야하기 때문에
    //키와 데이터 저장 필요 없음 오로지 키(이름)만 저장
    multiset<string> p, c; //참가자, 완주자
    //for(auto i: participant)
    for( int i=0; i<participant.size(); i++)
        p.insert(participant[i]);
    for (int i = 0; i<completion.size(); i++)
		c.insert(completion[i]);
    
    multiset<string>::iterator iter_p;
    multiset<string>::iterator iter_c;
    //이터레이터 사용법
    for(iter_c=c.begin(), iter_p=p.begin(); iter_c!=c.end();iter_c++, iter_p++){
        if(*iter_p != *iter_c)
            return *iter_p;
    }
    //스트링값 비교
    // 없으면 참가자쪽꺼 답으로 호출
    
    return *iter_p;
    //다 같으면 마지막에 있는 참가자가 답
}
