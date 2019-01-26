//시간초과
#include <vector>
using namespace std;

int solution(vector<vector<int>> board, vector<int> nums) {
    int answer = 0;
    
    bool bingo=true;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board.size(); j++){
            for(int k=0; k<nums.size(); k++){
                if(board[i][j]==nums[k]){
                    board[i][j]=0;
                    break;
                }  
            }
        }
    }
    
   
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[i][j]==0)
                bingo=true;
            else{
                bingo=false;
                break;
            }
        }
        if(bingo==true)
            answer++;
        
        for(int j=0; j<board.size(); j++){
            if(board[j][i]==0)
                bingo=true;
            else{
                bingo=false;
                break;
            }
        }
        if(bingo==true)
            answer++;
    }
    
    for(int i=0; i<board.size(); i++){
        if(board[board.size()-1-i][i]==0)
                bingo=true;
        else{
            bingo=false;
            break;            }
    }
    if(bingo==true)
        answer++;
    
    for(int i=0; i<board.size(); i++){
        if(board[i][i]==0)
            bingo=true;
        else{
            bingo=false;
            break;
        }
    }
    if(bingo==true)
        answer++;
    
    return answer;
}
