# ProjectTeam04-B
# SOLVING CODEFORCES PROBLEM 603A 
This repository will solve Codeforces problem 603 B using Greedy approach and Dynamic Programming. 
After that We will also compare which approach is better.

## TEAM MEMBER
1. [Andrew](https://github.com/ndrewwjy)

2. [Dave Joshua Marcellino Rumengan](https://github.com/djoshua449)

3. [David Immanuel Kase](https://github.com/dkase99)

4. [Nicholas](https://github.com/santosonicholas)


## REQUIREMENT
- [C++11](https://osdn.net/projects/mingw/releases/)

## HOW TO INSTALL C++11
[WATCH THIS](https://www.youtube.com/watch?v=1OsGXuNA5cc)

## PROBLEM LINK

[603A - Alternative Thinking](http://codeforces.com/problemset/problem/603/A)

## SUBMISSION LINK 

[Greedy](https://github.com/AAlab1819/ProjectTeam04-B/blob/master/603A-Greedy.cpp)

[Dynamic Programming](https://github.com/AAlab1819/ProjectTeam04-B/blob/master/603A-DP.cpp)

## SAMPLE I/O
#### SAMPLE#1
*INPUT :*
```
8
10000011
```
*OUTPUT :*
```
5
```

-------------------------------------------------------

#### SAMPLE#2
*INPUT :*
```
2
01
```
*OUTPUT :*
```
2
```

-------------------------------------------------------

#### SAMPLE#3
*INPUT :*
```
5
10101
``` 
*OUTPUT :*
```
5
```

-------------------------------------------------------

#### SAMPLE#4
*INPUT :*
```
75
010101010101010101010101010101010101010101010101010101010101010101010101010
```
*OUTPUT :*
```
75
```

## EXPLANATION

#### PROBLEM

#### GREEDY APPROACH

The greedy approach's "code" of this problem is quite easy to be understood. But, the biggest question is lie on the 15th line of the code.

  cout << min(res + 2, N) << '\n';

why? The most simple explanation is: "Our best move will only add the length of the longest subsequence by two"

Of course that explanation gives us another 'why?, why only two?'

To make it easier to be understood, we'll se the worse case where all elements of the string are the same, where the longest sequence is one (e.g. : 000000)

As we can see, our best move is to change one of the number between the beginning and the ending (0*0000*0)

#### DYNAMIC PROGRAMMING APPROACH

## COMPARISON
