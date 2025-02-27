# 3.5

## C Sort example
Illustrates use of assembly instructions for a C bubble sort function

 ### Swap procedure (leaf)
 ```c
 void swap(int v[], int k) {
    int temp;
    temp = v[k];
    v[k] = v[k+1];
    v[k+1] = temp;
 }
 ```

 ### Non-leaf (calls swap)
 ```c
 void sort(int v[], int n) {
    int i, j;
    for (i = 0; i < n; i += 1) {
        for (j = i - 1; j > 0 && v[j] > v[j+1]; j -=1) {
            swap(v, j);
        }
    }
 }
 ```
 - v in $a0, n in $a1, i in $s0, j in $s1

 ### Assembly swap
 ```asm
 swap: sll $t1, $a1, 2    # $t1 = k * 4
       add $t1, $a0, $t1  # $t1 = v + (k * 4)
                          #     (address of v[k])
       lw $t0, 0($t1)     # $t0 (temp) = v[k]
       lw $t2, 4($t1)     # $t2 = v[k+1]
       sw $t2, 0(t1)      # v[k] = $t2 (v[k+1])
       sw $t0, 4(t1)      # v[k+1] = $t0 (temp)
       jr $ra             # return to calling routine
 ```

 
### [Back to Module 3](%WEBPATH%/classes/cs4720/module3)