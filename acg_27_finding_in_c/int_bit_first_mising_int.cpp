#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxp=0;
vector<int> c;
 int firstMissingPositive(vector<int> &A)  {

    int i,j,n=A.size(),maxp=0,prev=-1,sumr = 0,sump =0,res,temp;

    A.push_back(0);
    A.push_back(0);
    A.push_back(0);
    for( i=0;i<n;i++){

        if(A[i]>0){
            c.push_back(A[i]);
            if(A[i]<n+1){
        if(A[A[i]] >0 &&  A[A[i]]<n+1){
        A[A[i]]+= (n+1);}
        else{
             A[A[i]] = n+2;

        }
        } 

            else{
                temp = A[i]-n-1;
                if(temp<n+1){
                A[temp] += (n+1) ;}
            }


        }
    }
    for( i=1;i<n;i++){
        cout<<"the val is "<<A[i]<<endl;

        if(A[i]<=n+1){

            return i;        }

    }



    return n+1;

}

//{

//     int i,j,n=A.size(),prev=-1,sumr = 0,sump =0,res;
//     for( i=0;i<n;i++){
//         if(A[i]>0){
//             sump+=A[i];
//         }
        

//         if(A[i] > (maxp)){
//             maxp = A[i];

//         }

//     }
//     cout<<"max element is "<<maxp<<endl;

//     sumr = maxp*(maxp+1)/2;

//     res = sumr -sump;

//     return res;

// }
 int sum_repeat(vector<int> a){

     int arr[maxp+2]= {0},flag =0;
     for (int i = 0; i < a.size(); i++)
     {
         arr[a[i]] +=1;
         if(arr[a[i]] ==2 ){
             flag = 1;

             cout<<"Repeated element is "<<a[i];

         }

     }
     
    return flag;
 }
  
int main() 
{  
    vector<int> a= {417, 929, 845, 462, 675, 175, 73, 867, 14, 201, 777, 407, 80, 882, 785, 563, 209, 261, 776, 362, 730, 74, 649, 465, 353, 801, 503, 154, 998, 286, 520, 692, 68, 805, 835, 210, 819, 341, 564, 215, 984, 643, 381, 793, 726, 213, 866, 706, 97, 538, 308, 797, 883, 59, 328, 743, 694, 607, 729, 821, 32, 672, 130, 13, 76, 724, 384, 444, 884, 192, 917, 75, 551, 96, 418, 840, 235, 433, 290, 954, 549, 950, 21, 711, 781, 132, 296, 44, 439, 164, 401, 505, 923, 136, 317, 548, 787, 224, 23, 185, 6, 350, 822, 457, 489, 133, 31, 830, 386, 671, 999, 255, 222, 944, 952, 637, 523, 494, 916, 95, 734, 908, 90, 541, 470, 941, 876, 264, 880, 761, 535, 738, 128, 772, 39, 553, 656, 603, 868, 292, 117, 966, 259, 619, 836, 818, 493, 592, 380, 500, 599, 839, 268, 67, 591, 126, 773, 635, 800, 842, 536, 668, 896, 260, 664, 506, 280, 435, 618, 398, 533, 647, 373, 713, 745, 478, 129, 844, 640, 886, 972, 62, 636, 79, 600, 263, 52, 719, 665, 376, 351, 623, 276, 66, 316, 813, 663, 831, 160, 237, 567, 928, 543, 508, 638, 487, 234, 997, 307, 480, 620, 890, 216, 147, 271, 989, 872, 994, 488, 291, 331, 8, 769, 481, 924, 166, 89, 824, -4, 590, 416, 17, 814, 728, 18, 673, 662, 410, 727, 667, 631, 660, 625, 683, 33, 436, 930, 91, 141, 948, 138, 113, 253, 56, 432, 744, 302, 211, 262, 968, 945, 396, 240, 594, 684, 958, 343, 879, 155, 395, 288, 550, 482, 557, 826, 598, 795, 914, 892, 690, 964, 981, 150, 179, 515, 205, 265, 823, 799, 190, 236, 24, 498, 229, 420, 753, 936, 191, 366, 935, 434, 311, 920, 167, 817, 220, 219, 741, -2, 674, 330, 909, 162, 443, 412, 974, 294, 864, 971, 760, 225, 681, 689, 608, 931, 427, 687, 466, 894, 303, 390, 242, 339, 252, 20, 218, 499, 232, 184, 490, 4, 957, 597, 477, 354, 677, 691, 25, 580, 897, 542, 186, 359, 346, 409, 655, 979, 853, 411, 344, 358, 559, 765, 383, 484, 181, 82, 514, 582, 593, 77, 228, 921, 348, 453, 274, 449, 106, 657, 783, 782, 811, 333, 305, 784, 581, 746, 858, 249, 479, 652, 270, 429, 614, 903, 102, 378, 575, 119, 196, 12, 990, 356, 277, 169, 70, 518, 282, 676, 137, 622, 616, 357, 913, 161, 3, 589, 327};
    cout<<"the size is "<<a.size()<<endl;
    int res =  firstMissingPositive(a);
    cout<<res<<endl;
    
    // cout<<sum_repeat(a);
    sort(c.begin(),c.end());
    cout<<"the given sorted array is :-"<<endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    
    cout<<endl;
    return 0;
  }