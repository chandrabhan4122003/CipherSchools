// insertion sort
//  for j=2 to A.length  c1.n
//      key=A[j]
//      //insert A[j] into the sorted   c2+c4(n-1)
//          sequence A[1..j-1]
//        i=j-1
//        while i>0 and A[i]key
//           A[i+1]=A[j]
//           i=i-1
//        A[i+1]=key  c8.(n-1)

// 1 2 3 4 5(best case )                 5 4 3 2 1(worst case )
// worst case should be selected to check the efficiency of algorithms

// time :(c1+c2+c4+c8)n+(c5+c6+c7)(n-1)n/2
// amount to take for insertion sort
// // constants are ignoredd
// k1.n+k2(n-1)n/2 time taken for insertion sort

// Asymptotic notation

// k1.n+k2(n-1)n/2 time taken for insertion sort
// it depends on the N (going to be very large )