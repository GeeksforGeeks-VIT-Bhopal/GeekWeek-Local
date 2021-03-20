// Pay attention! 
// the prefix under index i in the table above is 
// is the string from pattern[0] to pattern[i - 1] 
// inclusive, so the last character of the string under 
// index i is pattern[i - 1]   

function build_failure_function(pattern[]) {
  // let m be the length of the pattern 

  F[0] = F[1] = 0; // always true

  for (i = 2; i <= m; i++) {
    // j is the index of the largest next partial match 
    // (the largest suffix/prefix) of the string under  
    // index i - 1
    j = F[i - 1];
    for (;;) {
      // check to see if the last character of string i - 
      // - pattern[i - 1] "expands" the current "candidate"
      // best partial match - the prefix under index j
      if (pattern[j] == pattern[i - 1]) {
        F[i] = j + 1;
        break;
      }
      // if we cannot "expand" even the empty string
      if (j == 0) {
        F[i] = 0;
        break;
      }
      // else go to the next best "candidate" partial match
      j = F[j];
    }
  }
}
