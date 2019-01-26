/*
전구 위치 정렬하고

인접한 전구 위치 빼서 밝혀야 하는 그 거리 구함

홀수에서 짝수 빼거나
짝수에서 홀수 빼면
홀수 거리가 나온다

그거 2로 나누면 소수점이기때문에
float 벡터 만들어서
뺀 값을 벡터에 넣고

거리값 나누기 2한다음에 
0.5 더하면
거리 나옴

근데 또 여기서
하나 고려해야될게
전구 첫번째랑 마지막꺼랑
두개가 
길 처음과 끝에 없을경우는
또 다
그거 계산 따로 해서 비교해줘야함
*/
//맞춘건데 코드 날린거라
//생각나는대로 다시 짜봄
//확인 안해봤음

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int solution(int l, vector<int> v) {
	if (v.size() == 1) {
		int first, end;
		first = v[0];
		end = l - v[0];
		if (first < end)
			return end;
		else
			return first;
	}

	sort(v.begin(), v.end());

	vector<float> distance;

	vector<int> first_end;
	first_end.push_back(v[0]);
	first_end.push_back(l - v[v.size() - 1]);
	sort(first_end.begin(), first_end.end());

	for (int i = 0; i < v.size() - 1; i++) {
		distance.push_back(v[i + 1] - v[i]);
	}
	sort(distance.begin(), distance.end(), greater<int>());
	int answer = distance[0] / 2 + 0.5;

	if (answer < first_end[1])
		return first_end[1];
	else
		return answer;
}
