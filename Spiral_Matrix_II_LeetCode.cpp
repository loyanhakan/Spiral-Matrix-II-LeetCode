// n ad�m sa�a yaz -> n-1 a�a�� -- n-1 sola-> n-2 yukar�
// n-2 ad�m sa�a yaz -> n-3 .....


using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matris(n, vector<int>(n, 0));

        int a,b;
        a=0;
        b=-1;
        int sayi = 0;
        matris[0][0] = 1;

        for(int i = 0; i<n; i++)//n-1, n-2 belirleme k�sm�
        {
            for(int j=i; j<n; j++)//sa�a
            {
                sayi++;
                b++;
                while(matris[a][b] == 0) matris[a][b] = sayi;

            }
            for(int j=i+1; j<n; j++)             //a�a��
            {
                sayi++;
                a++;
                while(matris[a][b] == 0) matris[a][b] = sayi;
            }
            for(int j=i+1; j<n; j++ )              // sola
            {
                sayi++;
                b--;
                while(matris[a][b] == 0) matris[a][b] = sayi;
            }
            for (int j=i+2; j<n; j++)       //yukar�
            {
                sayi++;
                a--;
                while(matris[a][b] == 0) matris[a][b] = sayi;
            }
            i++;
        }

        return matris;

    }
};
