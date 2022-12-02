## git branch와 check out

### branch 생성

`git branch (브랜치명)`

##### 브랜치를 생성을 하는 명령어는 `gitbranch`이며 첫 번째 매개변수는<br>생성하려는 브랜치명이고 두 번째 분기해 나올 브랜치명이다.

    $ git branch RB_1.0 master

### branch 삭제

`git branch -D (브랜치명)`

##### 로컬 브랜치를 삭제하려면 아래 명령어를 사용한다.

    $ git branch -D (utility)
    Deleted branch utility (was e7f33f9).


### branch 이동

`git checkout(브랜치명)`

##### 현재 master 브랜치에서 taerang 브랜치로 이동하려면 `checkout`명령어를 사용한다.

    git checkout taerang

<br>

관련 사이트 : https://mylko72.gitbooks.io/git/content/branch/checkout.html


