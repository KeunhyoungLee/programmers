/*
두번째인덱스 기준으로 정렬이 자꾸 안돼서
첫번째인덱스 기준으로 정렬하고
거꾸로 탐색함

- 카메라 위치가 제일 오른쪽(큰 좌표)에 있다고 가정
진입 시점으로 정렬하고
진출 시점부터 역탐색하면서

진출 시점이 현재 카메라 위치보다 작으면
카메라가 해당 차량 이동 경로에 카메라가 필요함

고속도로 진입 시점 기준으로 정렬하였기 때문에
진입 시점에 카메라를 설치

다음 차량 진출시점과 비교
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
bool cmp(vector<int> a, vector<int> b){
    return a[1]<b[1];
}
    */

int solution(vector<vector<int>> routes) {
    int answer = 0;
    sort(routes.begin(), routes.end());
    int cnt=0;
    
    //answer=routes[2][1];
    int camera=30001;
    for(int i=routes.size()-1; i>=0; i--){
        if(routes[i][1]<camera){
            cnt++;
            camera=routes[i][0];
        }
    }
    return cnt;
}
