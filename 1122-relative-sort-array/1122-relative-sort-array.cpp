class Solution {
public:
      vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
          // khai báo biến i để lưu trữ giá trị 
        int freq[1001] = {0}, m = 0, i = 0;
          //đếm phần tử trong mảng
        for (int num : arr1){
            freq[num]++;
            m = max(m, num);
        }
          //nếu có trong mảng - phần tử đi tăng i và push vào mảng mới
        for (int num : arr2){
            while (freq[num]--)
                arr1[i++] = num;
        }
          // hiên tại của arr1 arr1 = [2, 2, 2, 1, 4, 3, 3, 9, 6]
          //duyệt lại mảng nếu > 0 => đang còn phần tử 
        for (int j = 0; j <= m; j++){
            while (freq[j]-- > 0)
                arr1[i++] = j;
        }
        return arr1;
    }
};