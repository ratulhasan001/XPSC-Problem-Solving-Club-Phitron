# xpsc-problem-solving

My C++ solutions to the weekly problem sets of XPSC, a competitive-programming training programme, organised by week (`week-01` … `week-13`). Each week's set mixes problems from online judges, mainly Codeforces with some from AtCoder, CodeChef, CSES and GeeksforGeeks. The early weeks start with implementation, prefix sums and sliding windows, and later weeks move on to bit manipulation, binary search on the answer, number theory, segment trees, greedy algorithms and constructive problems. The solutions were committed between September and December 2023.

The repository holds 280 solution files. Each file is named after its problem, with the problem's letter in that week's contest as a prefix: `X_Problem_Title.cpp`. Generic tasks in a few sets are titled `T-1`, `T-2`, and so on.

## Build and run

The solutions are written for GCC (they include `<bits/stdc++.h>`). Most of them include a local debug header unless `ONLINE_JUDGE` is defined, so compile with that macro. About 15 files use `std::ranges`, so use C++20:

```bash
g++ -std=c++20 -O2 -DONLINE_JUDGE week-05/C_T_3.cpp -o sol
./sol < input.txt
```

On macOS, use Homebrew's `g++-<version>`, since Apple clang does not provide `<bits/stdc++.h>`. The debug headers (`week-01/DEBUG_TEMPLATE.h`, `week-02/deBUG.h`, `week-03/deBUG.h`) are only needed for local debugging builds without `-DONLINE_JUDGE`.

## Contents

The *Technique* column summarises what each solution does, with its complexity where it is clear from the code. Files marked *unsolved* or *incomplete* are placeholders kept from the original sets.

### week-01

Main themes: implementation warm-ups, fixed-size sliding windows.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Counting | [A_Counting.cpp](week-01/A_Counting.cpp) | Closed-form count of integers in [a, b], O(1) |
| A | Ebony and Ivory | [A_Ebony_and_Ivory.cpp](week-01/A_Ebony_and_Ivory.cpp) | Reachability DP: can c = x·a + y·b, O(c) |
| A | Era | [A_Era.cpp](week-01/A_Era.cpp) | Answer is max(a_i − i), O(n) |
| A | Wet Shark and Odd and Even | [A_Wet_Shark_and_Odd_and_Even.cpp](week-01/A_Wet_Shark_and_Odd_and_Even.cpp) | Greedy: all evens plus an even count of the largest odds, O(n log n) |
| B | How many | [B_How_many.cpp](week-01/B_How_many.cpp) | Brute-force triple loop over (a, b, c), O(S³) |
| B | Multiplication 1 | [B_Multiplication_1.cpp](week-01/B_Multiplication_1.cpp) | Direct product, O(1) |
| C | Counting | [C_Counting.cpp](week-01/C_Counting.cpp) | *Unsolved* (empty file) |
| C | Multiple Gift | [C_Multiple_Gift.cpp](week-01/C_Multiple_Gift.cpp) | Repeated doubling from X up to Y, O(log(Y/X)) |
| - | Count anagrams | [Count_anagrams.cpp](week-01/Count_anagrams.cpp) | Fixed-size sliding window with a 26-letter frequency match, O(26·n) |
| D | Buttons | [D_Buttons.cpp](week-01/D_Buttons.cpp) | Greedy: press the larger button twice, O(1) |
| E | Round decimals | [E_Round_decimals.cpp](week-01/E_Round_decimals.cpp) | `round()` on a float, O(1) |
| F | Four Digits | [F_Four_Digits.cpp](week-01/F_Four_Digits.cpp) | Left-pad a string with zeros to length 4 |
| - | First negative in every window | [first_negative.cpp](week-01/first_negative.cpp) | Sliding window with a queue of negative values, O(n) |
| G | Find Multiple | [G_Find_Multiple.cpp](week-01/G_Find_Multiple.cpp) | Linear scan of [A, B] for a multiple of C |
| I | Square Inequality | [I_Square_Inequality.cpp](week-01/I_Square_Inequality.cpp) | Integer comparison a² + b² < c², O(1) |
| J | Discount | [J_Discount.cpp](week-01/J_Discount.cpp) | Percentage formula (a − b)/a · 100 |
| K | AC or WA | [K_AC_or_WA.cpp](week-01/K_AC_or_WA.cpp) | Equality check, O(1) |
| L | Biscuit Generator | [L_Biscuit_Generator.cpp](week-01/L_Biscuit_Generator.cpp) | Simulation: count multiples of A up to T + 0.5 |
| M | ICPC Balloons | [M_ICPC_Balloons.cpp](week-01/M_ICPC_Balloons.cpp) | Map of first solves per letter (2 balloons first, 1 after), O(n log n) |
| - | Max Sum Subarray of size K | [Max_Sum_Subarray_of_size_K.cpp](week-01/Max_Sum_Subarray_of_size_K.cpp) | Fixed-size sliding-window sum, O(n) |
| N | OddString | [N_OddString.cpp](week-01/N_OddString.cpp) | Print the characters at odd 1-based positions, O(n) |
| O | Not Found | [O_Not_Found.cpp](week-01/O_Not_Found.cpp) | Sort and deduplicate, then find the first missing letter |
| P | Count ABC | [P_Count_ABC.cpp](week-01/P_Count_ABC.cpp) | Linear scan for the substring "ABC", O(n) |
| R | Word Game | [R_Word_Game.cpp](week-01/R_Word_Game.cpp) | Word frequencies across 3 players with a map; scores 3/1/0 |
| U | Forgotten Episode | [U_Forgotten_Episode.cpp](week-01/U_Forgotten_Episode.cpp) | Sort and find the first index that differs from 1..n, O(n log n) |
| V | Enormous Input Test | [V_Enormous_Input_Test.cpp](week-01/V_Enormous_Input_Test.cpp) | Count inputs divisible by k, with fast I/O, O(n) |

### week-02

Main themes: prefix sums, sliding window / two pointers, brute force.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Almost Prime | [A_Almost_Prime.cpp](week-02/A_Almost_Prime.cpp) | Brute force: count the prime divisors of each i ≤ n |
| B | Triple | [B_Triple.cpp](week-02/B_Triple.cpp) | Frequency map; report a value with count ≥ 3, O(n log n) |
| C | Equal Candies | [C_Equal_Candies.cpp](week-02/C_Equal_Candies.cpp) | Sum of (a_i − min), O(n) |
| D | All Distinct | [D_All_Distinct.cpp](week-02/D_All_Distinct.cpp) | Count distinct values with a set, then a parity case analysis, O(n log n) |
| E | Colourblindness | [E_Colourblindness.cpp](week-02/E_Colourblindness.cpp) | Character comparison treating G and B as equal, O(n) |
| F | Sum of Three Integers | [F_Sum_of_Three_Integers.cpp](week-02/F_Sum_of_Three_Integers.cpp) | Loop over two values; the third is determined, O(K²) |
| G | Sum of Digits | [G_Sum_of_Digits.cpp](week-02/G_Sum_of_Digits.cpp) | Repeated digit sum on a string until one digit remains |
| I | Beautiful Year | [I_Beautiful_Year.cpp](week-02/I_Beautiful_Year.cpp) | Increment until all digits are distinct (set check) |
| J | Remove It | [J_Remove_It.cpp](week-02/J_Remove_It.cpp) | Filter out the elements equal to X, O(n) |
| K | Cumulative Sum Query | [K_Cumulative_Sum_Query.cpp](week-02/K_Cumulative_Sum_Query.cpp) | Prefix sums, O(n + q) |
| L | Kuriyama Mirai's Stones | [L_Kuriyama_Mirai_s_Stones.cpp](week-02/L_Kuriyama_Mirai_s_Stones.cpp) | Prefix sums on the original and the sorted array, O(n log n + q) |
| - | Longest subarray with sum K | [longest_subarray_k_gfg.cpp](week-02/longest_subarray_k_gfg.cpp) | Prefix sums + first-occurrence map (handles negative values), O(n log n) |
| - | Longest subarray with sum K (non-negative) | [Longest_Subarray_With_Sum_K_CodingNinjas.cpp](week-02/Longest_Subarray_With_Sum_K_CodingNinjas.cpp) | Two-pointer variable window, O(n); function only, no `main` |
| - | Longest substring with K unique characters | [longest-k-unique-characters-substring.cpp](week-02/longest-k-unique-characters-substring.cpp) | Variable sliding window on the distinct-character count; prints every valid window length rather than the maximum |
| - | Longest substring with K unique characters | [longestKsub.cpp](week-02/longestKsub.cpp) | Variable sliding window, longest substring with ≤ k distinct characters (−1 if there are fewer), O(n) |
| - | Longest substring without repeating characters | [longestquniq.cpp](week-02/longestquniq.cpp) | Sliding window with a last-seen map, O(n log σ) |
| M | Almost GCD | [M_Almost_GCD.cpp](week-02/M_Almost_GCD.cpp) | Brute force over divisors 2..max, counting the elements divisible by each, O(n·max) |
| N | Minor Change | [N_Minor_Change.cpp](week-02/N_Minor_Change.cpp) | Hamming distance between two strings, O(n) |
| O | Digits | [O_Digits.cpp](week-02/O_Digits.cpp) | Count the digits in base K by repeated division |
| P | Spell Check | [P_Spell_Check.cpp](week-02/P_Spell_Check.cpp) | Sort the letters and compare with sorted "Timur" |
| Q | The Clock | [Q_The_Clock.cpp](week-02/Q_The_Clock.cpp) | Step the time until the cycle repeats, counting palindromic HH:MM |
| R | Cypher | [R_Cypher.cpp](week-02/R_Cypher.cpp) | Reverse the U/D wheel moves modulo 10 |
| S | Sum of gcd of Tuples (Easy) | [S_Sum_of_gcd_of_Tuples_Easy.cpp](week-02/S_Sum_of_gcd_of_Tuples_Easy.cpp) | Brute-force triple loop over gcd(a, b, c), O(K³ log K) |
| T | Onotole needs your help | [T_Onotole_needs_your_help.cpp](week-02/T_Onotole_needs_your_help.cpp) | Frequency map; print the values that occur exactly once |
| U | Marathon | [U_Marathon.cpp](week-02/U_Marathon.cpp) | Count the others with a greater distance, O(1) |
| V | YES or YES | [V_YES_or_YES.cpp](week-02/V_YES_or_YES.cpp) | Case-insensitive comparison with "yes" |
| W | Most Similar Words | [W_Most_Similar_Words.cpp](week-02/W_Most_Similar_Words.cpp) | All pairs, sum of letter differences, minimum, O(n²·m) |
| X | Where's the Bishop | [X_Where_s_the_Bishop.cpp](week-02/X_Where_s_the_Bishop.cpp) | Grid scan for the 2-1-2 pattern of `#` cells on an 8 × 8 board |

### week-03

Main themes: bit manipulation (XOR / AND), strings and maps, greedy.

| # | Problem | File | Technique |
|---|---|---|---|
| A | And Then There Were K | [A_And_Then_There_Were_K.cpp](week-03/A_And_Then_There_Were_K.cpp) | Bit trick: 2^⌊log₂ n⌋ − 1 via `__lg`, O(1) |
| A | Bitwise Exclusive-Or | [A_Bitwise_Exclusive_Or.cpp](week-03/A_Bitwise_Exclusive_Or.cpp) | A single XOR, O(1) |
| A | Odd Divisor | [A_Odd_Divisor.cpp](week-03/A_Odd_Divisor.cpp) | Power-of-two test with n & (n − 1), O(1) |
| A | We Need the Zero | [A_We_Need_the_Zero.cpp](week-03/A_We_Need_the_Zero.cpp) | XOR of all elements combined with the parity of n, O(n) |
| A | XORwice | [A_XORwice.cpp](week-03/A_XORwice.cpp) | The minimum is a ^ b, O(1) |
| B | AND 0 Sum Big | [B_AND_0_Sum_Big.cpp](week-03/B_AND_0_Sum_Big.cpp) | Counting argument: n^k mod 1e9+7, O(k) |
| B | X-Sum | [B_X_Sum.cpp](week-03/B_X_Sum.cpp) | Walk both diagonals from every cell, O(nm·(n + m)) |
| C | Double Strings | [C_Double_Strings.cpp](week-03/C_Double_Strings.cpp) | Try every split point, with map lookups for both halves |
| D | Line | [D_Line.cpp](week-03/D_Line.cpp) | Greedy: sort the gain of each flip in descending order and take prefixes, O(n log n) |
| E | 2-Letter Strings | [E_2_Letter_Strings.cpp](week-03/E_2_Letter_Strings.cpp) | Frequency map; count the pairs that differ in exactly one position |
| F | Polycarp and the Day of Pi | [F_Polycarp_and_the_Day_of_Pi.cpp](week-03/F_Polycarp_and_the_Day_of_Pi.cpp) | Length of the prefix that matches a hard-coded string of π digits |
| G | Taisia and Dice | [G_Taisia_and_Dice.cpp](week-03/G_Taisia_and_Dice.cpp) | Constructive: start from an even split and adjust until the sum matches |
| H | Premutation | [H_Premutation.cpp](week-03/H_Premutation.cpp) | The first element is the most frequent leading value; rebuild from the row that lacks it |
| I | Matryoshkas | [I_Matryoshkas.cpp](week-03/I_Matryoshkas.cpp) | Count map over the sorted values: add max(0, c_x − c_{x−1}), O(n log n) |
| J | Different Differences | [J_Different_Differences.cpp](week-03/J_Different_Differences.cpp) | Greedy construction with growing gaps, bounded by k |
| K | Matrix Rotation | [K_Matrix_Rotation.cpp](week-03/K_Matrix_Rotation.cpp) | Check that the max and the min are diagonally opposite in the 2 × 2 grid |
| L | Musical Puzzle | [L_Musical_Puzzle.cpp](week-03/L_Musical_Puzzle.cpp) | Count the distinct length-2 substrings with a map |
| M | Restore the Weather | [M_Restore_the_Weather.cpp](week-03/M_Restore_the_Weather.cpp) | Sort both arrays and assign by rank through index pairs, O(n log n) |
| N | Vlad Building Beautiful Array | [N_Vlad_Building_Beautiful_Array.cpp](week-03/N_Vlad_Building_Beautiful_Array.cpp) | Parity: either all values share a parity or the minimum is odd |
| O | Remove Two Letters | [O_Remove_Two_Letters.cpp](week-03/O_Remove_Two_Letters.cpp) | Count the duplicates where s[i−1] == s[i+1], O(n) |
| P | Spell Check | [P_Spell_Check.cpp](week-03/P_Spell_Check.cpp) | Sort the letters and compare (same problem as week-02 P) |
| Q | Yes Yes | [Q_Yes_Yes.cpp](week-03/Q_Yes_Yes.cpp) | Substring search in a repeated "YesYes…" string |
| R | Is It a Cat | [R_Is_It_a_Cat.cpp](week-03/R_Is_It_a_Cat.cpp) | Lowercase, collapse runs, compare with "meow", O(n) |
| S | Count the Number of Pairs | [S_Count_the_Number_of_Pairs.cpp](week-03/S_Count_the_Number_of_Pairs.cpp) | Per-letter case counts with a greedy use of the k operations, O(n) |
| T | Powering the Hero (easy version) | [T_Powering_the_Hero_easy_version.cpp](week-03/T_Powering_the_Hero_easy_version.cpp) | Max-heap of bonus cards, popped for each hero, O(n log n) |
| U | Powering the Hero (hard version) | [U_Powering_the_Hero_hard_version.cpp](week-03/U_Powering_the_Hero_hard_version.cpp) | Same max-heap greedy, O(n log n) |
| V | Lost Permutation | [V_Lost_Permutation.cpp](week-03/V_Lost_Permutation.cpp) | Add the missing numbers until the sum reaches s and covers the max |
| W | Thermostat | [W_Thermostat.cpp](week-03/W_Thermostat.cpp) | Case analysis: 0/1/2/3 moves or −1 via the interval ends, O(1) |

### week-04

Main themes: bitwise problems (T-1 … T-5), greedy, implementation.

| # | Problem | File | Technique |
|---|---|---|---|
| A | T-1 | [A_T_1.cpp](week-04/A_T_1.cpp) | Bitmask brute force over ± signs, checking the sum mod 360, O(2ⁿ·n) |
| B | T-2 | [B_T_2.cpp](week-04/B_T_2.cpp) | Keep the supermasks of k, AND them, compare with k, O(n) |
| C | T-3 | [C_T_3.cpp](week-04/C_T_3.cpp) | Popcount of the XOR against the last value ≤ k, O(m) |
| D | T-4 | [D_T_4.cpp](week-04/D_T_4.cpp) | Count the elements sharing the max's highest bit; answer ⌈c/2⌉ |
| E | T-5 | [E_T_5.cpp](week-04/E_T_5.cpp) | Precompute palindromes < 2¹⁵; count pairs whose XOR is a palindrome with a hash map |
| F | Number Replacement | [F_Number_Replacement.cpp](week-04/F_Number_Replacement.cpp) | Check that equal numbers map to equal letters, O(n²) |
| G | Even-Odd Increments | [G_Even_Odd_Increments.cpp](week-04/G_Even_Odd_Increments.cpp) | Track the even/odd counts and the running sum per query, O(n + q) |
| H | Traffic Light | [H_Traffic_Light.cpp](week-04/H_Traffic_Light.cpp) | Doubled string + `lower_bound` to the next `g`, O(n log n) |
| I | Divisibility by 2^n | [I_Divisibility_by_2_n.cpp](week-04/I_Divisibility_by_2_n.cpp) | Count factors of 2; greedily take the indices with the most 2s first |
| J | Compare T-Shirt Sizes | [J_Compare_T_Shirt_Sizes.cpp](week-04/J_Compare_T_Shirt_Sizes.cpp) | Case analysis on the last letter and the number of X's |
| K | Funny Permutation | [K_Funny_Permutation.cpp](week-04/K_Funny_Permutation.cpp) | Construction n, n−1, 1..n−2; −1 for n = 1 or 3 |
| L | Alt-Tab | [L_Alt_Tab.cpp](week-04/L_Alt_Tab.cpp) | Process in reverse with a deque, keeping first occurrences |
| M | EVacuate to Moon | [M_EVacuate_to_Moon.cpp](week-04/M_EVacuate_to_Moon.cpp) | Sort both descending and pair greedily with min(car, outlet·H), O(n log n) |
| N | Sasha and Array Coloring | [N_Sasha_and_Array_Coloring.cpp](week-04/N_Sasha_and_Array_Coloring.cpp) | Sort, then sum (max − min) over symmetric pairs, O(n log n) |
| O | Long Long | [O_Long_Long.cpp](week-04/O_Long_Long.cpp) | Sum of \|a_i\| plus the number of negative segments (zeros skipped), O(n) |
| P | Sum in Binary Tree | [P_Sum_in_Binary_Tree.cpp](week-04/P_Sum_in_Binary_Tree.cpp) | Sum the path to the root by halving n, O(log n) |
| Q | Apple Tree | [Q_Apple_Tree.cpp](week-04/Q_Apple_Tree.cpp) | DFS counting the leaves in each subtree; answer leaf[x]·leaf[y], O(n + q) |
| R | Remove Prefix | [R_Remove_Prefix.cpp](week-04/R_Remove_Prefix.cpp) | Scan from the right until a duplicate appears, O(n log n) |
| S | Minimum Varied Number | [S_Minimum_Varied_Number.cpp](week-04/S_Minimum_Varied_Number.cpp) | Lookup table of precomputed answers for digit sums 1..45 |
| T | Round Down the Price | [T_Round_Down_the_Price.cpp](week-04/T_Round_Down_the_Price.cpp) | Subtract the largest power of 10 ≤ n, O(digits) |
| U | Polycarp Writes a String from Memory | [U_Polycarp_Writes_a_String_from_Memory.cpp](week-04/U_Polycarp_Writes_a_String_from_Memory.cpp) | Greedy: start a new day when more than 3 distinct letters appear, O(n) |
| V | Train and Queries | [V_Train_and_Queries.cpp](week-04/V_Train_and_Queries.cpp) | First/last index map per station, O((n + q) log n) |

### week-05

Main themes: binary search, both on sorted arrays and on the answer (T 1 … T 12), plus implementation.

| # | Problem | File | Technique |
|---|---|---|---|
| A | T 1 | [A_T_1.cpp](week-05/A_T_1.cpp) | Sort + `lower_bound` to report the position of each query, O((n + q) log n) |
| AA | Print a Pedestal (Codeforces logo) | [AA_Print_a_Pedestal_Codeforces_logo.cpp](week-05/AA_Print_a_Pedestal_Codeforces_logo.cpp) | Constructive split of n into three heights by n mod 3, O(1) |
| B | T 2 | [B_T_2.cpp](week-05/B_T_2.cpp) | `lower_bound` / `upper_bound`: nearest smaller and larger value per query, O(q log n) |
| C | T 3 | [C_T_3.cpp](week-05/C_T_3.cpp) | Binary search on the answer: maximise the minimum gap with a greedy check, O(n log V) |
| D | T 4 | [D_T_4.cpp](week-05/D_T_4.cpp) | Binary search on the max segment sum to split into at most k parts |
| E | T 5 | [E_T_5.cpp](week-05/E_T_5.cpp) | Binary search for the smallest x with x − digitsum(x) ≥ s |
| F | T 6 | [F_T_6.cpp](week-05/F_T_6.cpp) | Floating-point binary search for m where the product of a_i/m equals 1 |
| G | T 8 | [G_T_8.cpp](week-05/G_T_8.cpp) | Sort, take the largest values until the sum ≥ k, O(n log n) |
| H | T 9 | [H_T_9.cpp](week-05/H_T_9.cpp) | Binary search on the cutting height using prefix sums + `upper_bound` |
| I | T 10 | [I_T_10.cpp](week-05/I_T_10.cpp) | Binary search on the radius so that three intervals cover all points (greedy check) |
| J | T 11 | [J_T_11.cpp](week-05/J_T_11.cpp) | Binary search on the max water height with total fill ≤ x, O(n log V) |
| K | T 12 (optional) | [K_T_12_Optional.cpp](week-05/K_T_12_Optional.cpp) | Floating-point binary search on the minimum lantern radius |
| L | Compare T-Shirt Sizes | [L_Compare_T_Shirt_Sizes.cpp](week-05/L_Compare_T_Shirt_Sizes.cpp) | Compare by size letter, then by the count of X's |
| M | Funny Permutation | [M_Funny_Permutation.cpp](week-05/M_Funny_Permutation.cpp) | Constructive: n, n−1, 1..n−2; −1 for n = 1 or 3 |
| N | Minimize the Thickness | [N_Minimize_the_Thickness.cpp](week-05/N_Minimize_the_Thickness.cpp) | Try each prefix sum as the segment target with a greedy split, O(n²) |
| O | Two Elevators | [O_Two_Elevators.cpp](week-05/O_Two_Elevators.cpp) | Compare the two elevators' travel distances, O(1) |
| P | Decode String | [P_Decode_String.cpp](week-05/P_Decode_String.cpp) | Right-to-left decoding where `0` marks a two-digit letter code, O(n) |
| Q | Jumping on Tiles | [Q_Jumping_on_Tiles.cpp](week-05/Q_Jumping_on_Tiles.cpp) | Sort (char, index) pairs and visit the letters between the endpoints, O(n log n) |
| R | Everyone Loves to Sleep | [R_Everyone_Loves_to_Sleep.cpp](week-05/R_Everyone_Loves_to_Sleep.cpp) | Time to each alarm mod 24 h; minimum via a priority queue |
| S | Remove Prefix | [S_Remove_Prefix.cpp](week-05/S_Remove_Prefix.cpp) | Scan from the end to the first repeat; n minus the distinct-suffix length |
| T | Different Differences | [T_Different_Differences.cpp](week-05/T_Different_Differences.cpp) | Greedy increasing sequence with growing differences, bounded by k |
| U | Thermostat | [U_Thermostat.cpp](week-05/U_Thermostat.cpp) | Case analysis: 0/1/2/3 moves or −1, O(1) |
| V | Number Replacement | [V_Number_Replacement.cpp](week-05/V_Number_Replacement.cpp) | Check that each value maps to a single letter, O(n²) |
| W | Minimum Varied Number | [W_Minimum_Varied_Number.cpp](week-05/W_Minimum_Varied_Number.cpp) | Lookup table of precomputed answers for n ≤ 45 |
| X | Round Down the Price | [X_Round_Down_the_Price.cpp](week-05/X_Round_Down_the_Price.cpp) | Subtract the largest power of 10 not exceeding n |
| Y | Polycarp Writes a String from Memory | [Y_Polycarp_Writes_a_String_from_Memory.cpp](week-05/Y_Polycarp_Writes_a_String_from_Memory.cpp) | Greedy: count the days with at most 3 distinct letters, O(n) |
| Z | Train and Queries | [Z_Train_and_Queries.cpp](week-05/Z_Train_and_Queries.cpp) | First/last index per station in a map, O(log n) per query |

### week-06

Main themes: implementation and ad-hoc reasoning, parity arguments.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Array Decrements | [A_Array_Decrements.cpp](week-06/A_Array_Decrements.cpp) | Max difference d; check that every b_i is consistent with a_i − d, O(n) |
| B | Restoring the Duration of Tasks | [B_Restoring_the_Duration_of_Tasks.cpp](week-06/B_Restoring_the_Duration_of_Tasks.cpp) | finish_i − max(start_i, finish_{i−1}), O(n) |
| C | Food for Animals | [C_Food_for_Animals.cpp](week-06/C_Food_for_Animals.cpp) | Cover the dog/cat shortages with universal food, O(1) |
| D | Make It Increasing | [D_Make_It_Increasing.cpp](week-06/D_Make_It_Increasing.cpp) | Right-to-left greedy halving until strictly increasing, O(n log A) |
| E | Detective Task | [E_Detective_Task.cpp](week-06/E_Detective_Task.cpp) | Count the positions between the last `1` and the first `0`, O(n) |
| F | Number Transformation | [F_Number_Transformation.cpp](week-06/F_Number_Transformation.cpp) | Divisibility check: print 1 and y/x, or 0 0 |
| G | Dictionary | [G_Dictionary.cpp](week-06/G_Dictionary.cpp) | Enumerate the two-letter words with distinct letters and look up the index |
| H | Infinite Replacement | [H_Infinite_Replacement.cpp](week-06/H_Infinite_Replacement.cpp) | Case analysis: 1, −1 (infinite), or 2^\|s\| |
| I | Not a Cheap String | [I_Not_a_Cheap_String.cpp](week-06/I_Not_a_Cheap_String.cpp) | Drop the heaviest letters until the weight ≤ p, keeping the order, O(n log n) |
| J | Black and White Stripe | [J_Black_and_White_Stripe.cpp](week-06/J_Black_and_White_Stripe.cpp) | Sliding window: minimum count of `W` in a length-k window, O(n) |
| K | Oneful Pairs | [K_Oneful_Pairs.cpp](week-06/K_Oneful_Pairs.cpp) | Check a + b + ab = 111, O(1) |
| L | Water Filling | [L_Water_Filling.cpp](week-06/L_Water_Filling.cpp) | Check that at most one bucket is filled, O(1) |
| M | Rectangular Tiling | [M_Rectangular_Tiling.cpp](week-06/M_Rectangular_Tiling.cpp) | Parity: impossible exactly when both sides are odd, O(1) |
| N | Dotify Playlist | [N_Dotify_Playlist.cpp](week-06/N_Dotify_Playlist.cpp) | Sort descending and sum the top k songs of language L, O(n log n) |
| O | Distance Coloring | [O_Distance_Coloring.cpp](week-06/O_Distance_Coloring.cpp) | Product k(k−1)… mod 1e9+7, O(min(n, k)) |
| P | Maximise Score | [P_Maximise_Score.cpp](week-06/P_Maximise_Score.cpp) | Max adjacent difference per element; take the minimum, O(n log n) |
| Q | Bus Seat Numbering | [Q_Bus_Seat_Numbering.cpp](week-06/Q_Bus_Seat_Numbering.cpp) | Classify the seat number by range, O(1) |
| R | Blobby Volley Scores | [R_Blobby_Volley_Scores.cpp](week-06/R_Blobby_Volley_Scores.cpp) | Simulate the serves (only the serving side scores), O(n) |
| S | Odd GCD Permutation | [S_Odd_GCD_Permutation.cpp](week-06/S_Odd_GCD_Permutation.cpp) | Compare the GCDs of odd and even indices; print the reversed permutation or −1 |
| T | Chef Odd | [T_Chef_Odd.cpp](week-06/T_Chef_Odd.cpp) | Parity check on the number of odd values left after k, O(1) |
| U | String Game | [U_String_Game.cpp](week-06/U_String_Game.cpp) | The parity of min(#0, #1) decides the winner, O(n) |

### week-07

Main themes: number theory (gcd/lcm, factorisation, divisors: T 1 … T 6), prefix sums with hashing.

| # | Problem | File | Technique |
|---|---|---|---|
| A | T 1 | [A_T_1.cpp](week-07/A_T_1.cpp) | Inclusion–exclusion with lcm; the better of two assignment orders |
| AA | Koxia and Whiteboards | [AA_Koxia_and_Whiteboards.cpp](week-07/AA_Koxia_and_Whiteboards.cpp) | Greedy: the last value is forced; sum the n largest, O((n + m) log(n + m)) |
| AD | Two Out of Three | [AD_Two_Out_of_Three.cpp](week-07/AD_Two_Out_of_Three.cpp) | Group the indices by value and label them 1/2/3 using two repeated values |
| AE | Olya and Game with Arrays | [AE_Olya_and_Game_with_Arrays.cpp](week-07/AE_Olya_and_Game_with_Arrays.cpp) | Sort the arrays; sum the second minimums except the smallest, plus the global min |
| B | T 2 | [B_T_2.cpp](week-07/B_T_2.cpp) | Trial-division factorisation; check that every exponent is divisible by n, O(n√A) |
| C | Assembly via Minimums | [C_Assembly_via_Minimums.cpp](week-07/C_Assembly_via_Minimums.cpp) | Sort the pairwise minimums, pick at shrinking strides, append 1e9 |
| C | T 3 | [C_T_3.cpp](week-07/C_T_3.cpp) | Pair consecutive integers (always coprime) over [l, r] |
| D | T 4 | [D_T_4.cpp](week-07/D_T_4.cpp) | Repeatedly divide b by the gcd to check that all primes of b are in a |
| E | T 5 | [E_T_5.cpp](week-07/E_T_5.cpp) | Write n as the most primes: all 2s, plus one 3 if n is odd |
| F | T 6 | [F_T_6.cpp](week-07/F_T_6.cpp) | Enumerate the divisors up to √n, sort, print the k-th, O(√n) |
| G | Favourite Numbers | [G_Favourite_Numbers.cpp](week-07/G_Favourite_Numbers.cpp) | Divisibility and parity checks, O(1) |
| H | Printing Binary Array | [H_Printing_Binary_Array.cpp](week-07/H_Printing_Binary_Array.cpp) | Flip each bit, O(n) |
| I | AP-Free Sequences | [I_AP_Free_Sequences.cpp](week-07/I_AP_Free_Sequences.cpp) | Brute-force triples to detect a 3-term AP, O(n³) |
| J | Anti-Palindrome | [J_Anti_Palindrome.cpp](week-07/J_Anti_Palindrome.cpp) | Case analysis on palindromic and single-character strings, O(n) |
| K | Parliament | [K_Parliament.cpp](week-07/K_Parliament.cpp) | Majority check y ≥ x/2, O(1) |
| L | Monopoly | [L_Monopoly.cpp](week-07/L_Monopoly.cpp) | Check whether the max exceeds the sum of the others, O(1) |
| M | Masterchef finals | [M_Masterchef_finals.cpp](week-07/M_Masterchef_finals.cpp) | Threshold check n ≤ 10, O(1) |
| N | Online or Offline | [N_Online_or_Offline.cpp](week-07/N_Online_or_Offline.cpp) | Compare the price after a 10% discount, O(1) |
| O | CodeChef Learn Problem Solving | [O_CodeChef_Learn_Problem_Solving.cpp](week-07/O_CodeChef_Learn_Problem_Solving.cpp) | Arithmetic: output 2n |
| P | Cricket Match | [P_Cricket_Match.cpp](week-07/P_Cricket_Match.cpp) | At most 36 runs per over compared with the target, O(1) |
| Q | Largest and Second Largest | [Q_Largest_and_Second_Largest.cpp](week-07/Q_Largest_and_Second_Largest.cpp) | Sort descending and sum the two largest distinct values, O(n log n) |
| R | Four Tickets | [R_Four_Tickets.cpp](week-07/R_Four_Tickets.cpp) | Check 4n ≤ 1000, O(1) |
| S | Chef and Battery | [S_Chef_and_Battery.cpp](week-07/S_Chef_and_Battery.cpp) | Simulate −3/+2 steps until reaching 50 |
| T | Return the Change | [T_Return_the_Change.cpp](week-07/T_Return_the_Change.cpp) | Round to the nearest 10 and give change from 100, O(1) |
| U | Buy Ten Packets | [U_Buy_Ten_Packets.cpp](week-07/U_Buy_Ten_Packets.cpp) | Arithmetic formula 2y + x, O(1) |
| V | AB Plus C | [V_AB_plus_C.cpp](week-07/V_AB_plus_C.cpp) | Construct A·B + C = n with an A = 10⁶ split, O(1) |
| W | Palindrome Reorder | [W_Palindrome_Reorder.cpp](week-07/W_Palindrome_Reorder.cpp) | Character counts: half + odd character + mirror, O(n) |
| X | Subarray Sums I | [X_Subarray_Sums_I.cpp](week-07/X_Subarray_Sums_I.cpp) | Two-pointer sliding window over positive values, O(n) |
| Y | Subarray Sums II | [Y_Subarray_Sums_II.cpp](week-07/Y_Subarray_Sums_II.cpp) | Prefix sums + a map of counts, O(n log n) |
| Z | Subarray Divisibility | [Z_Subarray_Divisibility.cpp](week-07/Z_Subarray_Divisibility.cpp) | Prefix sums mod n, counting equal remainders, O(n log n) |

### week-08

Main themes: segment trees (T 1 … T 3), constructive problems.

| # | Problem | File | Technique |
|---|---|---|---|
| A | T 1 | [A_T_1.cpp](week-08/A_T_1.cpp) | Sum segment tree: point update and range-sum query, O(log n) |
| A | We Were Both Children | [A_We_Were_Both_Children.cpp](week-08/A_We_Were_Both_Children.cpp) | Add each jump count to its multiples (harmonic sieve), O(n log n). *Calls `debug(...)` without the debug macro, so remove those calls to build it.* |
| B | 3-palindrome | [B_3_palindrome.cpp](week-08/B_3_palindrome.cpp) | Repeat an "aabb" pattern so that no length-3 palindrome appears, O(n) |
| B | T 2 | [B_T_2.cpp](week-08/B_T_2.cpp) | Min segment tree for range-minimum queries, O(log n) per query |
| C | Divisible Array | [C_Divisible_Array.cpp](week-08/C_Divisible_Array.cpp) | Constructive: output 2i for each i, O(n) |
| C | T 3 | [C_T_3.cpp](week-08/C_T_3.cpp) | Min segment tree for range-minimum queries (same code as T 2) |
| D | Special Numbers | [D_Special_Numbers.cpp](week-08/D_Special_Numbers.cpp) | The bits of k select powers of n, mod 1e9+7, O(log k) |
| E | Make Them Equal | [E_Make_Them_Equal.cpp](week-08/E_Make_Them_Equal.cpp) | 0/1/2 operations: find a valid index in the second half, O(n) |
| F | Hemose Shopping | [F_Hemose_Shopping.cpp](week-08/F_Hemose_Shopping.cpp) | Compare with the sorted array at the positions swaps cannot reach, O(n log n) |
| G | Grandma Capa Knits a Scarf | [G_Grandma_Capa_Knits_a_Scarf.cpp](week-08/G_Grandma_Capa_Knits_a_Scarf.cpp) | For each letter, two pointers that delete it to form a palindrome, O(26n) |
| H | Array Elimination | [H_Array_Elimination.cpp](week-08/H_Array_Elimination.cpp) | *Unsolved* (empty file); solved in week-09 C |
| I | Di-visible Confusion | [I_Di_visible_Confusion.cpp](week-08/I_Di_visible_Confusion.cpp) | Each a_i needs some j in [2, i + 2] (0-indexed i) that does not divide it; early exit |
| J | Two Arrays | [J_Two_Arrays.cpp](week-08/J_Two_Arrays.cpp) | Sort both and check that b_i is a_i or a_i + 1, O(n log n) |
| K | Coloring Rectangles | [K_Coloring_Rectangles.cpp](week-08/K_Coloring_Rectangles.cpp) | Formula ⌈x·y / 3⌉, O(1) |
| L | Mathematical Addition | [L_Mathematical_Addition.cpp](week-08/L_Mathematical_Addition.cpp) | Closed-form construction: output −x² and y², O(1) |
| M | Minimize Distance | [M_Minimize_Distance.cpp](week-08/M_Minimize_Distance.cpp) | Split by sign, k per trip, no return from the farthest point, O(n log n) |
| N | Paprika and Permutation | [N_Paprika_and_Permutation.cpp](week-08/N_Paprika_and_Permutation.cpp) | *Unsolved* (empty file) |
| O | GCD Problem | [O_GCD_Problem.cpp](week-08/O_GCD_Problem.cpp) | Constructive a + b + 1 = n with coprime a, b, chosen by parity, O(1) |
| Q | Special Elements | [Q_Special_Elements.cpp](week-08/Q_Special_Elements.cpp) | All subarray sums of length ≥ 2 checked against the value counts, O(n²) |
| R | Rudolf and Snowflakes (simple version) | [R_Rudolf_and_Snowflakes_simple_version.cpp](week-08/R_Rudolf_and_Snowflakes_simple_version.cpp) | Precompute 1 + k + k² + … ≤ 10⁶ into a hash table, O(1) per query |

### week-09

Main themes: bitwise reasoning, permutations, constructive problems.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Mocha and Math | [A_Mocha_and_Math.cpp](week-09/A_Mocha_and_Math.cpp) | Bitwise AND of all elements, O(n) |
| B | Rock and Lever | [B_Rock_and_Lever.cpp](week-09/B_Rock_and_Lever.cpp) | Count the pairs sharing the same highest set bit, O(31n) |
| C | Array Elimination | [C_Array_Elimination.cpp](week-09/C_Array_Elimination.cpp) | Per-bit counts; print every k that divides all the counts, O(31n) |
| D | Another Permutation Problem | [D_Another_Permutation_Problem.cpp](week-09/D_Another_Permutation_Problem.cpp) | Brute force over the max product with greedy assignment, O(n³) |
| E | Discovering Permutations | [E_Discovering_Permutations.cpp](week-09/E_Discovering_Permutations.cpp) | First k permutations of n letters via `next_permutation` |
| F | Min Max Array Transformation | [F_Min_Max_Array_Transformation.cpp](week-09/F_Min_Max_Array_Transformation.cpp) | Two-pointer greedy for the min/max differences, O(n) |
| H | Yet Another Permutation Problem | [H_Yet_Another_Permutation_Problem.cpp](week-09/H_Yet_Another_Permutation_Problem.cpp) | Construction: chains i, 2i, 4i, … for each odd i, O(n) |
| J | Contrast Value | [J_Contrast_Value.cpp](week-09/J_Contrast_Value.cpp) | Count local extrema, skipping equal neighbours, O(n) |
| K | Stand-up Comedian | [K_Stand_up_Comedian.cpp](week-09/K_Stand_up_Comedian.cpp) | Closed-form greedy formula, O(1) |
| L | Min Max Sort | [L_Min_Max_Sort.cpp](week-09/L_Min_Max_Sort.cpp) | Value positions; grow the sorted middle block outward, O(n) |
| M | Matrix of Differences | [M_Matrix_of_Differences.cpp](week-09/M_Matrix_of_Differences.cpp) | Construction alternating small and large values in snake order, O(n²) |
| N | Hamiltonian Wall | [N_Hamiltonian_Wall.cpp](week-09/N_Hamiltonian_Wall.cpp) | Simulate the path from each start row of a 2 × m grid, O(m) |
| O | Deadly Laser | [O_Deadly_Laser.cpp](week-09/O_Deadly_Laser.cpp) | Case analysis on the laser's reach: n + m − 2 or −1, O(1) |
| P | Number Game | [P_Number_Game.cpp](week-09/P_Number_Game.cpp) | Try each k with a greedy simulation on the sorted array, O(n²) |
| Q | Save the Magazines | [Q_Save_the_Magazines.cpp](week-09/Q_Save_the_Magazines.cpp) | Greedy: move each lid to a more valuable preceding box, O(n) |
| R | Array Recovery | [R_Array_Recovery.cpp](week-09/R_Array_Recovery.cpp) | Rebuild the prefix sums; −1 when the answer is ambiguous, O(n) |
| S | Digital Logarithm | [S_Digital_Logarithm.cpp](week-09/S_Digital_Logarithm.cpp) | *Incomplete*: reads the input but prints nothing |

### week-10

Main themes: math and constructive problems, binary search.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Ice Cream Balls | [A_Ice_Cream_Balls.cpp](week-10/A_Ice_Cream_Balls.cpp) | Binary search on the number of distinct types, O(log n) |
| C | No Prime Differences | [C_No_Prime_Differences.cpp](week-10/C_No_Prime_Differences.cpp) | Grid construction: print the even rows, then the odd rows, O(nm) |
| D | Bachgold Problem | [D_Bachgold_Problem.cpp](week-10/D_Bachgold_Problem.cpp) | Greedy: all 2s, plus one 3 if n is odd, O(n) |
| E | Elemental Decompress | [E_Elemental_Decompress.cpp](week-10/E_Elemental_Decompress.cpp) | *Incomplete*: reads the input only |
| F | Same Differences | [F_Same_Differences.cpp](week-10/F_Same_Differences.cpp) | Count the pairs with equal a_i − i using a map, O(n log n) |
| J | Divisor Chain | [J_Divisor_Chain.cpp](week-10/J_Divisor_Chain.cpp) | Chain from powers of two plus binary decomposition, O(log n) |
| K | Swords | [K_Swords.cpp](week-10/K_Swords.cpp) | GCD of the differences from the maximum, O(n log C) |
| L | Balance (Easy version) | [L_Balance_Easy_version.cpp](week-10/L_Balance_Easy_version.cpp) | k-mex queries: a hashed set with a cached next multiple per k |
| O | Sage's Birthday (easy version) | [O_Sage_s_Birthday_easy_version.cpp](week-10/O_Sage_s_Birthday_easy_version.cpp) | Sort, put the smallest values at odd positions, count the dips, O(n log n) |
| P | Sage's Birthday (hard version) | [P_Sage_s_Birthday_hard_version.cpp](week-10/P_Sage_s_Birthday_hard_version.cpp) | Same code as the easy version, O(n log n) |
| S | Set Construction | [S_Set_Construction.cpp](week-10/S_Set_Construction.cpp) | Build the sets from the 0/1 relation matrix, O(n²) |

### week-11

Main themes: greedy, binary search on the answer, strings.

| # | Problem | File | Technique |
|---|---|---|---|
| A | ABBB | [A_ABBB.cpp](week-11/A_ABBB.cpp) | Stack-like greedy removal of "AB" / "BB", O(n) |
| B | Boats Competition | [B_Boats_Competition.cpp](week-11/B_Boats_Competition.cpp) | Frequency counts; try every pair-sum weight, O(n²) |
| C | TV Subscriptions (Easy Version) | [C_TV_Subscriptions_Easy_Version.cpp](week-11/C_TV_Subscriptions_Easy_Version.cpp) | Sliding-window distinct count (set rebuilt per window), O(n·d log d) |
| D | Email from Polycarp | [D_Email_from_Polycarp.cpp](week-11/D_Email_from_Polycarp.cpp) | Two-pointer matching that allows repeated characters, O(\|s\| + \|t\|) |
| E | MEX Repetition | [E_MEX_Repetition.cpp](week-11/E_MEX_Repetition.cpp) | Append the MEX and rotate by k mod (n + 1), O(n) |
| F | Swap and Reverse | [F_Swap_and_Reverse.cpp](week-11/F_Swap_and_Reverse.cpp) | Even k: sort; odd k: sort each index parity separately, O(26n) |
| G | Divisor Chain | [G_Divisor_Chain.cpp](week-11/G_Divisor_Chain.cpp) | Same approach as week-10 J |
| H | Split Sort | [H_Split_Sort.cpp](week-11/H_Split_Sort.cpp) | Count the values whose predecessor appears later (hash map), O(n) |
| I | Prime Deletion | [I_Prime_Deletion.cpp](week-11/I_Prime_Deletion.cpp) | Hard-coded two-digit prime chosen by the first digit, O(1) |
| J | Two Binary Strings | [J_Two_Binary_Strings.cpp](week-11/J_Two_Binary_Strings.cpp) | Look for a common "01" at the same position, O(n) |
| K | Matrix Cascade | [K_Matrix_Cascade.cpp](week-11/K_Matrix_Cascade.cpp) | *Unsolved* (empty template) |
| L | Binary Inversions | [L_Binary_Inversions.cpp](week-11/L_Binary_Inversions.cpp) | Count inversions and try flipping the first 0 or the last 1, O(n) |
| N | Grid Reconstruction | [N_Grid_Reconstruction.cpp](week-11/N_Grid_Reconstruction.cpp) | Construction alternating large and small even numbers, O(n) |
| O | Friends and the Restaurant | [O_Friends_and_the_Restaurant.cpp](week-11/O_Friends_and_the_Restaurant.cpp) | Sort the surplus values and pair them with two pointers, O(n log n) |
| P | Removing Smallest Multiples | [P_Removing_Smallest_Multiples.cpp](week-11/P_Removing_Smallest_Multiples.cpp) | Greedy over multiples (harmonic series), O(n log n) |
| Q | Mainak and Interesting Sequence | [Q_Mainak_and_Interesting_Sequence.cpp](week-11/Q_Mainak_and_Interesting_Sequence.cpp) | Parity case analysis plus a construction, O(n) |
| R | Queries for the Array | [R_Queries_for_the_Array.cpp](week-11/R_Queries_for_the_Array.cpp) | *Unsolved* (empty file) |
| S | Run For Your Prize | [S_Run_For_Your_Prize.cpp](week-11/S_Run_For_Your_Prize.cpp) | Max over the items of the distance to the nearer end, O(n) |
| T | Kalindrome Array | [T_Kalindrome_Array.cpp](week-11/T_Kalindrome_Array.cpp) | At the first mismatch, delete either value and check for a palindrome, O(n) |
| U | Poisoned Dagger | [U_Poisoned_Dagger.cpp](week-11/U_Poisoned_Dagger.cpp) | Binary search on k, O(n log h) |
| V | K-th Not Divisible by n | [V_K_th_Not_Divisible_by_n.cpp](week-11/V_K_th_Not_Divisible_by_n.cpp) | Binary search on the answer, O(log C) |
| W | Two Teams Composing | [W_Two_Teams_Composing.cpp](week-11/W_Two_Teams_Composing.cpp) | Max frequency compared with the distinct count, O(n) |

### week-12

Main themes: binary search on the answer, number theory, greedy.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Circular Local MiniMax | [A_Circular_Local_MiniMax.cpp](week-12/A_Circular_Local_MiniMax.cpp) | Sort, interleave the two halves, verify the alternation, O(n log n) |
| B | Great Sequence | [B_Great_Sequence.cpp](week-12/B_Great_Sequence.cpp) | Multiset greedy: pair the smallest value with its x-multiple, O(n log n) |
| C | Magic Powder 1 | [C_Magic_Powder_1.cpp](week-12/C_Magic_Powder_1.cpp) | *Incomplete*: reads the input only (the same problem is solved in D) |
| D | Magic Powder 2 | [D_Magic_Powder_2.cpp](week-12/D_Magic_Powder_2.cpp) | Binary search on the number of cookies, O(n log C) |
| E | Dominant Character | [E_Dominant_Character.cpp](week-12/E_Dominant_Character.cpp) | Brute force over substrings of length ≤ 20, O(20n) |
| F | Backspace | [F_Backspace.cpp](week-12/F_Backspace.cpp) | Greedy matching from the end of both strings, O(n) |
| H | Madoka and Formal Statement | [H_Madoka_and_Formal_Statement.cpp](week-12/H_Madoka_and_Formal_Statement.cpp) | Check a_i ≤ b_i and b_i ≤ b_{i+1} + 1 cyclically, O(n) |
| I | Nastia and a Good Array | [I_Nastia_and_a_Good_Array.cpp](week-12/I_Nastia_and_a_Good_Array.cpp) | Anchor on the minimum; n − 1 operations that build consecutive values, O(n) |
| J | Product of Three Numbers | [J_Product_of_Three_Numbers.cpp](week-12/J_Product_of_Three_Numbers.cpp) | Trial division for three distinct factors, O(√n) |
| K | T-primes | [K_T_primes.cpp](week-12/K_T_primes.cpp) | Perfect square whose root is prime (trial division) |
| L | Absolute Sorting | [L_Absolute_Sorting.cpp](week-12/L_Absolute_Sorting.cpp) | Intersect the valid x-intervals from adjacent pairs, O(n) |
| M | Almost All Multiples | [M_Almost_All_Multiples.cpp](week-12/M_Almost_All_Multiples.cpp) | Build a permutation, then make greedy swaps along the divisors of n, O(n) |
| N | Queries about less or equal elements | [N_Queries_about_less_or_equal_elements.cpp](week-12/N_Queries_about_less_or_equal_elements.cpp) | Sort + `lower_bound` + equal-value count, O((n + m) log n) |
| O | Maximum Median | [O_Maximum_Median.cpp](week-12/O_Maximum_Median.cpp) | Binary search on the median value, O(n log C) |

### week-13

Main themes: greedy, bitwise reasoning, binary search.

| # | Problem | File | Technique |
|---|---|---|---|
| A | Increasing Sequence | [A_Increasing_Sequence.cpp](week-13/A_Increasing_Sequence.cpp) | Greedy smallest increasing sequence that avoids each a_i, O(n) |
| B | Sets and Union | [B_Sets_and_Union.cpp](week-13/B_Sets_and_Union.cpp) | For each excluded element 1..50, take the union of the sets that lack it |
| C | Card Game | [C_Card_Game.cpp](week-13/C_Card_Game.cpp) | Greedy sum of the positive values with two start cases, O(n) |
| D | Rigged | [D_Rigged.cpp](week-13/D_Rigged.cpp) | Check whether anyone at least as strong also lasts as long; s₁ or −1 |
| E | Chips on the Board | [E_Chips_on_the_Board.cpp](week-13/E_Chips_on_the_Board.cpp) | Sort; min(n·a_min + Σb, n·b_min + Σa), O(n log n) |
| F | Blocks | [F_Blocks.cpp](week-13/F_Blocks.cpp) | Greedy flip simulation toward all-B or all-W, O(n) |
| G | Shawarma Tent | [G_Shawarma_Tent.cpp](week-13/G_Shawarma_Tent.cpp) | Count the students in each of the 4 directions and take the max, O(n) |
| H | Friendly Arrays | [H_Friendly_Arrays.cpp](week-13/H_Friendly_Arrays.cpp) | XOR of a with and without the OR of b, giving the min and max, O(n + m) |
| J | Districts Connection | [J_Districts_Connection.cpp](week-13/J_Districts_Connection.cpp) | Star from district 1, then link the rest through one node of another gang, O(n log n) |
| K | Building an Aquarium | [K_Building_an_Aquarium.cpp](week-13/K_Building_an_Aquarium.cpp) | Binary search on the water height, O(n log C) |
| L | Epic Transformation | [L_Epic_Transformation.cpp](week-13/L_Epic_Transformation.cpp) | Max frequency compared with the remaining count, O(n log n) |
| M | 2-Sort | [M_2_Sort.cpp](week-13/M_2_Sort.cpp) | Prefix sums of the break points; count the valid windows, O(n) |
| N | Maximal AND | [N_Maximal_AND.cpp](week-13/N_Maximal_AND.cpp) | Greedy: set bits from high to low within k operations, O(31n) |
| O | Alphabetic Removals | [O_Alphabetic_Removals.cpp](week-13/O_Alphabetic_Removals.cpp) | Remove k characters in alphabetical order, O(26n) |

## Notes

- A few sets reuse problems, so some solutions appear twice: Spell Check in weeks 2 and 3, Divisor Chain in weeks 10 and 11, and several week-04 problems again in week-05.
- Unsolved or incomplete files: week-01 C, week-08 H and N, week-09 S, week-10 E, week-11 K and R, week-12 C. `week-02/Longest_Subarray_With_Sum_K_CodingNinjas.cpp` is a function-only submission without a `main`.
- Some files keep the GeeksforGeeks driver-code scaffolding around the submitted function. For example, `week-02/longestquniq.cpp` still carries that template's original "Contributed By" comment.

## Author

Ratul Hasan · [ratulhasan.dev](https://ratulhasan.dev)
