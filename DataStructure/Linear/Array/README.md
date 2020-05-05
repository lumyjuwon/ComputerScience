# Array

Array는 연속된 메모리 위치에 저장돼 있는 Element의 Collection이다.

## Sort

아래 나와있는 모든 Sort 방식은 Ascending Order만 고려했다.

### Selection Sorting

Selection Sorting은 정렬하고자 하는 Array와 Array내에서 SubArray라는 가상의 영역을 둬 Array내에서 가장 작은 값을 SubArray에 연속으로 배치하는 형식의 Sorting이다.

![ex_screenshot](./img/1.PNG)  

Array 영역에서 순회하며 순회가 끝났을 때 가장 작은 값이 Array 영역 내에서 첫 번째 Index와 Swap이 이루어진다. (첫 번째 Index는 SubArray로 인해 줄어든 Array 영역 내에서의 첫 번째 Index를 뜻한다)  

![ex_screenshot](./img/2.PNG)  
첫 번째 Loop이 Swap이 이루어질 때 바뀔 Inedx를 가리키며 두 번째 Loop이 SubArray의 영역을 제외한 Array 영역에서 제일 작은 값을 찾아내기 위한 로직이라 보면 된다.

**Time Complexity**: O(n<sup>2</sup>)  
**Space Complexity**: O(n)


[코드](https://github.com/lumyjuwon/ComputerScience/blob/master/DataStructure/Linear/Array/SelectionSort.cpp)

### Insertion Sorting

Insertion Sorting
### Bubble Sorting

### Merge Sorting

### Quick Sorting

### Alternative Sorting

Alternative Sorting은 Array의 첫 번째 짝수번 Index가 Array의 Element들 중 첫 번째로 가장 커야 하며 첫 번째 홀수번 Index가 Array의 Element들 중 첫 번째로 가장 작은 Element으로 정렬하는 기법이다.

## Search

## Insert

## Delete
