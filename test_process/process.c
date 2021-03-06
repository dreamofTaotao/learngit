#注意一下所有的命令都是在目标目录下进行的
#################以下就是文件上传的步骤##################
#首先第一步登录我们的账户和邮箱
git config --global user.name"xxx"
git config --global user.email"xx@xx.com"
#第二步我们新建文件夹
mkdir xxx
#第三步在文件夹下面初始化git
git init
#第四步上传想要上传的文件从编辑区到暂存区(注意：这里需要带后缀名的文件全名称)
git add xxx
#第五步从暂存区上传到仓库中
git commit -m"这个里面写说明内容"
#第六步将仓库中的文件上传到远程仓库
git push
#################以上就是文件上传的步骤##################

#################下面是文件夹上传的步骤##################
#第一步至第三步是一样的，这里不再赘述
#直接到第四步添加目录中想要上传的文件夹
git add 文件夹名称
#第五步进入到该文件夹目录下面
cd 文件夹名称
#注：退出当前文件夹的命令
cd ..
#第六步上传该文件夹下面所有的文件
git add .
#接下来的步骤与上面的第五步与第六步相同
#当想要提交每一个文件或者文件夹并且文件夹与文件的说明不同时，可以进行分布提交，分开提交无非就是多重复几次上面的第五步
################以上就是文件夹提交步骤###################

#备注当我们在GitHub中新建文件时点击的按钮是new file,当在文件名中加入xxx/,最后这个“/”，就是新建文件夹了。
#获取当前状态
git status
#查看设置信息
git config --list
#查看当前所在路径
pwd
#新建文件的命令
vi xx.x
touch xx.x
