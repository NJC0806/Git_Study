-------------------------------------------------------------
监管代码防止被人修改
1、git add 文件   
2、git diff 文件  查看修改了哪里
-------------------------------------------------------------
上传过程：本地工作区-->暂存区-->仓库区
1、git add xxx将文件从本地工作区提交到暂存区
2、git commit -m xxx将文件从暂存区提交到仓库区
3、git push 提交到远程仓库
-------------------------------------------------------------
还原过程：仓库区-->暂存区-->本地工作区
1、只是修改了文件，没有执行任何git操作
    git checkout -- xxx
2、只将文件提交到暂存区（git add xxx）
    git reset HEAD           # 回退到当前版本
    git checkout -- xxx    # xxx为文件名
3、将文件提交到仓库（git add xxx,git commit -m xxx）
    git reset HEAD^    # 回退到上一个版本
    git checkout -- aaa.txt    # aaa.txt为文件名
4、补充：git reset HEAD^^    # 回退到上上一个版本
		 git reset HEAD~n    # 回退到n一个版本
-------------------------------------------------------------
上传文件到远程仓库
1、先新建仓库
2、在本地文件夹内git init 初始化仓库
3、git clone xxx(仓库url)
4、git add xxxfile
5、git commit -m 说明
6、git push 
-------------------------------------------------------------
删除远程仓库文件
1、git pull origin master
2、git rm xxx
3、git commit -m 说明
4、git push -u origin master
-------------------------------------------------------------
NJC0806
202014qqilqqil