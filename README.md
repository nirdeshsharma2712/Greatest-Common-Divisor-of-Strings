# 📊 LeetCode Problem: 1071. Greatest Common Divisor of Strings

## 🧩 Problem Statement

Given two strings **str1** and **str2**, return the **largest string** x such that **x divides** both **str1** and **str2**.


> **Note :**
> - For two strings `s` and `t`, we say "`t` divides `s`" if and only if `s = t + t + t + ... + t + t` (i.e., `t` is concatenated with itself one or more times).



## 🧠 Approach: Brute + Logical Pattern Matching


- Character-by-character comparison from both strings using two pointers i and j.

- If at any point `str1[i] != str2[j]`, we `return ""` — there's **no common pattern**.

- Otherwise, keep adding the matching characters to a temporary check string.

> Then:
> - Use check to form full strings matching `str1` and `str2` using **repeated concatenation**.
> - If both formed **strings match** the **originals**, store check in a result `vector` at index `check.length()`.

- Finally, iterate from the **largest possible length** down to **smallest** and return the **longest valid divisor string**.



## ✅ Example Walkthrough


### Example 1

##### Input: str1 = "ABCABC", str2 = "ABC"
##### Output: "ABC"


### Example 2

##### Input: str1 = "ABABAB", str2 = "ABAB"
##### Output: "AB"


### Example 3

##### Input: str1 = "LEET", str2 = "CODE"
##### Output: ""



## 🛠️ Constraints

- `1 <= str1.length, str2.length <= 1000`
- `str1` and `str2` consist of `English uppercase letters`.
