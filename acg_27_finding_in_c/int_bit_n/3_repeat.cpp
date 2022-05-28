

// int Solution::repeatedNumber(const vector<int> &b) {

//     vector<int> A =b;

//     float n = A.size(),n1;
//     n1 = n/3;
//     int i=0,pos,temp =0;

//     for(i=0;i<n;i++){
//         pos = A[i]-1;
//         if(A[i]>=0){
//             if(A[pos] >=0){
//                 temp = A[pos];
//                 A[pos] = -1;
//                 A[i] = temp;
//                 i--;
//             }
//             else{
//                 A[pos]--;

//             }
//             if(A[pos]<(-n1)){
//                 return pos+1;
//             }

//         }

//     }
//     for(i=0;i<n;i++){

//         if(A[i]<(-n1)){
//             return i+1;
//         }
//     }
// return -1;
// }
