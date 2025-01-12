# Algorithm

## 0X01
### 시간복잡도
1초에 컴퓨터는 3-5억번의 연산처리가 가능하다.
### 빅오표기법
연산처리 횟수를 바탕으로 현재 코드가 다 돌아가는데 걸리는 시간이 계산되는데
이러한 과정에서의 문제점은 '5N^2 + 3N + 2lgN + 5'와 같이 계산식이 남겨질 경우 
N값에 특정 수를 더해서 계산하는데도 어려움이 있고 이러한 식을 도출하는 과정에서도 꽤나 많은 시간이 소요된다.
이를 해결하기 위해 __주어진 식을 가장 큰 대표항만 남겨서 나타내는 방법__ 이 '빅오표기법'이다.

빅오표기법의 종류에는 
1) O(1)
2) O(lgN)
3) O(N)
4) O(NlgN)
5) O(N^2)
6) O(2^N)
7) O(N!)

이렇게 7가지가 있다. 크기가 작은 순으로 나열했고 빅오표기법에 의거해서 저 7가지의 중 여러개가 포함된 식이 있으면
가장 큰 대표항을 제외한 나머지 항+상수항은 제외하고 표기하면 된다.

아래의 사진은 N의 크기에 따른 허용 시간복잡도는 나타낸 표이다. 이를 참고해서 N의 크기와 시간복잡도를 계산하면 된다.
![바킹독 시간복잡도](https://github.com/ksw08/Algorithm/blob/main/img1.daumcdn.png)

### 공간복잡도
입력의 크기와 문제를 해결하는데 필요한 공간의 상관관계이다.

ex) 크기 N짜리 2차원 배열이 필요하면 O(N^2)이고, 따로 배열이 없으면 O(1)이다.

코딩테스트에서는 공간복잡도보다는 시간복잡도에 더 중점을 두기에 크게 신경쓰진 않아도 된다.
대신 하나는 기억해두는게 좋다. 

__"메모리 제한이 512MB일 때 int 변수를 대략 1.2억개 정도 선언할 수 있다"__

이게 중요한 이유는 코딩을 하는 과정에서 방대한 크기의 배열을 선언할 경우 배열이 아닌 다른 방법을 찾아야 한다.


