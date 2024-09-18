# C++概览：基础知识
## exercises
1. What does a compiler do?What does a linker do?
    编译器把源文件转换为对象文件；链接器把对象文件组合起来生成可执行程序；
2. List three C++ compilers
    GNU/Clang/MSVC
## book
1. 两种实体：核心语言功能（同c）、标准库组件
2. 初始化器：{}，用户自定义的类型在定义时隐式初始化
3. auto：无明显理由显式指定数据类型
4. 异常
# C++概览：抽象机制
## book
1. 具体类、抽象类、类层次中的类
2. 重载运算符
# 类型和声明
1. 声明的结构：（前置修饰符）、基本类型、声明符、（后缀函数修饰符）、（初始化器）
2. const、
3. 左值、右值
# 指针、数组、引用
1. 原始字符串
2. 数组并不支持“赋值"操作，解决：array，vector
3. 数组是一个底层的语言概念
4. 指针与const：const char *a,char *const b(常量指针);
5. 引用：作为函数的实参和返回值
6. 左值引用、const引用、右值引用