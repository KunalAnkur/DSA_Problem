# DSA Theory
---
### Bitwise operator
- `number << n => number * 2^n`

### Bit manipulation
**Get bit**
```
n = 0101
suppose we need to get bit at position, i=2
1 << i = 0100
n & 0100 = 0100 => 0101 & 0100 = 0100
if n & (1 << i) != 0, then bit is 1 and vice versa
```
**Set bit**
```
n = 0101
Suppose we need to set bit at position, i=1
1 << i = 0010
0101 | 0010 = 0111
```
**clear bit**
```
n = 0101
Suppose we need to clear bit at position, i=2
1 << i = 0100
~0100 = 1011
0101 & 1011 = 0001
```
**Update bit**
```
n = 0101
Suppose we need to update bit at position, i = 1 to 1 (value)
1 << i = 0010
~0010 = 1101
0101 & 1101 = 0101
1 (value) << i = 0010
0101 | 0010 = 0111
 (First clear bit and then set bit) 
```