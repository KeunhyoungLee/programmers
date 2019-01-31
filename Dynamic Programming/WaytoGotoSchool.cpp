#include <string>
#include <vector>

using namespace std;

int dp[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;

    //1,1에서 i,j까지의 최단경로 갯수
    //dp  초기값 -1
    for(int i=1; i<101; i++)
        for(int j=1; j<101; j++)
            dp[i][j]= -1;
    //물웅덩이 있는 곳 체크 :0 
    for(int i=0; i<puddles.size(); i++)
        dp[puddles[i][0]][puddles[i][1]]=0;
    
    dp[1][1]=1;
    
    for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            if(i==1&&j==1)
                continue;
            if((dp[i][j] == 0))//물웅덩이
                continue;
            
            dp[i][j]=(dp[i-1][j] + dp[i][j-1]) % 1000000007;
        }
    }
    
    return dp[m][n];
    //memset(dist,0,size(dp));
    /*int sum=0;
    //(m-1) + (n-1)
    for(int i=0; i<(m-1) + (n-1); i++ ){
        sum*=i;
    }
    
    for(int i=0; i<m-1; i++)
        sum/=i;
    for(int i=0; i<n-1; i++)
        sum/=i;
    
    sort(puddles.begin(), puddles.end());
    
    puddles[0][0]
        puddles[0][1]
        
    return answer;
    &*/
}
