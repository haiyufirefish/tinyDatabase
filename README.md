# Tiny databse based on C++11
*Based on cstack/db_tutorial in C Language*

* 2022/7/25 - 2022/8/12

## 1. Database definition
A database is a "warehouse that organizes, stores and manages data according to data structures". It is a long-term storage of a large amount of data in a computer, organized, sharable, and unified management. Users can perform operations such as adding, selecting, updating, and deleting the data in it.

## 2. What is SQL?
SQL ***(Structured Query Language: Structured Query Language)*** is a special-purpose programming language used to manage relational database management systems*** (RDBMS)***, or in relational stream data management systems* **(RDSMS)*** for streaming.

## 3. What are achieved finally
***front-end***

* **tokenizer***

* **parser***

*  ***code generator***

***back-end***

*  ***virtual machine***

*  ***B-tree***

*  ***pager***

*  ***os interface***


## 4. Development workflow
### ***test driven development, TDD***
* Test cases
* Failed cases
* Code modification 
* 通过全部测试
  
## 5. Structure

### **tutorial**
* Implementation: ***(db.cpp)***
* Test Cases ***(db_test.rb)***
* Classification ***(README.md)***

## 6. Syllabus
* [tutorial01-安装测试环境和实现REPL](./tutorial01/README.md)
* [tutorial02-实现解析前端和虚拟机](./tutorial02/README.md)
* [tutorial03-实现insert和select](./tutorial03/README.md)
* [tutorial04-边界测试与修复BUG](./tutorial04/README.md)
* [tutorial05-实现磁盘存储](./tutorial05/README.md)
* [tutorial06-实现光标](./tutorial06/README.md)
* [tutorial07-初步实现B-Tree](./tutorial07/README.md)
* [tutorial08-实现二分搜索和防重](./tutorial08/README.md)
* [tutorial09-实现拆分叶结点](./tutorial09/README.md)
* [tutorial10-实现递归搜索](./tutorial10/README.md)
* [tutorial11-实现扫描多层树](./tutorial11/README.md)
* [tutorial12-实现更新拆分后的父结点](./tutorial12/README.md)