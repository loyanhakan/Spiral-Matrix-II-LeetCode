// n adým saða yaz -> n-1 aþaðý -- n-1 sola-> n-2 yukarý
// n-2 adým saða yaz -> n-3 .....


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

        for(int i = 0; i<n; i++)//n-1, n-2 belirleme kýsmý
        {
            for(int j=i; j<n; j++)//saða
            {
                sayi++;
                b++;
                while(matris[a][b] == 0) matris[a][b] = sayi;

            }
            for(int j=i+1; j<n; j++)             //aþaðý
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
            for (int j=i+2; j<n; j++)       //yukarý
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
