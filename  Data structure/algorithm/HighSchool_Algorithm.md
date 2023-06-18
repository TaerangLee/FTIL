## 그래프

#### `그래프` 정점과 간선으로 구성된 자료구조

### 그래프의 속성

 + ##### 유향 그래프
 + ##### 가중치 그래프

### 그래프 탐색

#### `그래프 탐색`은 그래프에 연결된 모든 정점을 방문하는 과정

### DFS와 BFS

+ #### DFS (깊이 우선 탐색)

    + ##### 더 깊이 있는 정점을 우선적으로 방문하는 탐색 방식

    + ##### 스택을 이용해 다음에 이동할 정점을 선택

    + ##### 백트래킹을 적용하거나, 트리 탐색에서 주로 사용

+ #### BFS (너비 우선 탐색)

    + ##### 더 가까이 있는 정점을 우선적으로 방문하는 탐색 방식

    + ##### 큐를 이용해 다음에 이동할 정점을 선택

    + ##### 간선의 가중치가 동일할 때 최단 거리를 구하는데 사용

## 리스트

### `인접 리스트`는 어떤 정점에 인접한 정점들을 저정한 배열이다.

#### 인접 리스트 그래프 선언 (아래와 같음)

```c
    graph = [[] for _ in range(N + 1)]
```

#### 인접 리스트 간선 추가 (아래와 같음)

    for _ in range(N)
        u, v = map(int, ino)

#### 재귀를 이용한 DFS 구현

```c  
    graph = [[] for _ in range(N + 1)]
    visited = [0 for _ in range(N + 1)]

    def DFS(cur):
        for next in graph[cur]:
            if visited[next]:
                continue
            visited[next] = 1
            DFE(next)
```

#### 큐를 이용한 BFS 구현
```c
from collections import deque

graph = [[] for _ in range(N + 1)]
visited = [0 for _ in range(N + 1)]
Q = deque()

visited[1] = 1
Q.append(1)

while Q:
    cur = Q.popleft()
    for next in graph[cur]:
        if visited[next];
            visited[...] = visited[next] + 1
                Q.append(j)
```


    