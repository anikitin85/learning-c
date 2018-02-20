// statement delimited by ;
// compound statement, or block, consists of several
// statements and is put between { and }.

// if (condition)      // if condition != 0 then do main clause
      // do this
// else if (condition 2)
      // do thizzz
// else                // else part is optional
      // do that

// binary search
// array must be sorted

/* binsearch: find x in v[0] <= v[1] <= v[2] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else    // found match!
            return mid;
    }
    return -1;  // no match...
}