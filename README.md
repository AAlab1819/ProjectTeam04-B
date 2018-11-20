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

The greedy approach's "code" of this problem is quite easy to be understood. We only need to count how many "01" or "10" in the string.
But, the biggest question is lie on the 15th line of the code.

  cout << min(res + 2, N) << '\n';

why? The most simple explanation is: "Our best move will only add the length of the longest subsequence at most by two"

Of course that explanation gives us another why, "why at most two?"

It won't add more than two if the initial subsequence is n-1 or n, because it can't be more than n.

But why two? Because we can only change one substring and from that one substring "the effective flippable number" at most is only two numbers, more than that won't effect the longest subsequence. Changing a substring of same numbers (000... or 111...) won't help us.

There are two possibilities:
  1. (1/0)...(a subsequence begins with 1/0 respectively), then whatever we change between ... will make the first number is useful, so we will get another two numbers (the first number, and the number we flip)
  2. (10/01)...(a subsequence begins with 01/10 respectively), then we will flip the first two numbers, so we will get another two numbers, (the first two numbers will be useful).
  
  Note: ... is not a subsequence

#### DYNAMIC PROGRAMMING APPROACH

## COMPARISON
