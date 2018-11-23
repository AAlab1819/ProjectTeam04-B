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

[Greedy](https://codeforces.com/contest/603/submission/46122536)

[Dynamic Programming](https://codeforces.com/contest/603/submission/46122328)

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

#### GREEDY APPROACH

The greedy approach's "code" of this problem is quite easy to be understood. We only need to count how many "01" or "10" in the string.
But, the biggest question is lie on the 15th line of the code.

```c++
  cout << min(res + 2, N) << '\n';
  ```

why? The most simple explanation is: "Our best move will only add the length of the longest subsequence at most by two"

Of course that explanation gives us another why, "why at most two?"

It won't add more than two if the initial subsequence is n-1 or n, because it can't be more than n.

But why two? Because we can only change one substring and from that one substring "the effective flippable number" at most is only two numbers, more than that won't effect the longest subsequence. Changing a substring of same numbers (000... or 111...) won't help us.

There are two possibilities:
  1. (1/0)...(a subsequence begins with 1/0 respectively), then whatever we change between ... will make the first number is useful, so we will get another two numbers (the first number, and the number we flip)
  2. (10/01)...(a subsequence begins with 01/10 respectively), then we will flip the first two numbers, so we will get another two numbers, (the first two numbers will be useful).
  
  Note: ... is not part of the subsequence

#### DYNAMIC PROGRAMMING APPROACH

With dynamic programming, we'll use three variables to get what's the best choice until that point. Those three variables have different use:
  1. The first variable is to know how long the subsequence at a certain point of the string
  2. The second variable is to know when we'll start to "flip" the string
  3. The third variable is to check would it be better if we reflip the string (undo). We can say that the third variable is to know when will we stop the "flipping"
  
  Here is the code:
  
```c++
for(int i=1;i<s.length();i++){
        dp[i][0] = dp[i-1][0] + (s[i]!=s[i-1]); //first variable
        dp[i][1] = max (dp[i-1][0] + (s[i]==s[i-1]) , dp[i-1][1] + (s[i]!=s[i-1])); //second variable
        dp[i][2] = max(dp[i-1][1] + (s[i]==s[i-1]) , dp[i-1][2] + (s[i]!=s[i-1])); //third variable
    }
```

On the first variable, as explained before is to check how long the subsequence at a certain point. If (s[i]!=s[i-1]) is true, and the value will be one, so it will add the number of the subsequence by one.

On the second variable, we have to choose which is higher between two things:
  1. The "Original" next element is same or not
  2. The "alternative 1" next element is different or not

Why? Because by logic, If it has the same element, we'll start the flip to make the subsequence better.

On the third variable, we have to choose which is higher between two things:
  1. The "Alternative 1" next element is same or not
  2. The "alternative 2" next element is different or not

Why? Because if the "flipped" string doesn't get higher, then it means that we have to stop the flip.
  
Example:

10

1010010001

First variable: 1 2 3 4 4 5 6 6 6 7

Second Variable: 1 2 3 4 **5** 6 7 7 7 8

Third Variable: 1 2 3 4 5 6 7 **8** 8 9
 
As we can see, the program start to flip on the 5th element, and stop the 8th element.
How do we know it? On the second variable, the answer is higher when we start to flip the string, and on the third variable is start to be higher than the second variable on the 8th element, which means it would be better if we don't (stop) flip the 8th element.

So the answer will be: **10101010**0**1**, which has the length of 9

## COMPARISON

We'll compare both methods base on three parameter:
  1. Complexity
  2. Simulated Time
  3. Memory
  
### 1. Complexity

Both best complexity is Ω(1) where the n is one
Both worst complexity is O(n)

Both methods have the same complexity because both only have a single loop (loop complexity = O(n))

### 2. Simulated Time
| n  | Greedy | DP | 
| :---: | :---: | :---: |
| 1 | 0.0 | 0.0 |
| 10 | 0.0 | 0.0 |
| 100 | 0.0 | 0.0 |
| 1000 | 0.0 | 0.0 |
| 10000 | 0.001 | 0.0009 |
| 100000 | 0.0069 | 0.006 |
| 1000000 | 0.0579 | 0.06 |
| 1000000 | 0.69 | 0.6 |

As we can see, since both methods have the same time complexity, so both of simulated time is not to different.

![NtoTime](https://github.com/AAlab1819/ProjectTeam04-B/blob/master/chart.png)<br>

### 3. Memory

As we can see from the program, the dynamic programming uses more memory (3x of greedy) since it use a multi-dimension of array and greedy only use a one-dimensional array.

## CONCLUSION

Since both almost have the same time complexity (as we can see the simulated time) but the DP uses more memory, we conclude that **GREEDY** method perform better than DP in solving our test case.
