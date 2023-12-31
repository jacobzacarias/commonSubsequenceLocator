using System;

class LongestCommonSubsequence
{
    static int LongestCommonSubsequenceLength(string str1, string str2)
    {
        int m = str1.Length;
        int n = str2.Length;
        
        int[,] dp = new int[m + 1, n + 1];

        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                    dp[i, j] = 0;
                else if (str1[i - 1] == str2[j - 1])
                    dp[i, j] = dp[i - 1, j - 1] + 1;
                else
                    dp[i, j] = Math.Max(dp[i - 1, j], dp[i, j - 1]);
            }
        }

        return dp[m, n];
    }

    static void Main()
    {
        string str1 = "AGGTAB";
        string str2 = "GXTXAYB";

        int length = LongestCommonSubsequenceLength(str1, str2);

        Console.WriteLine("The size length of the longest common subsequence is: " + length);
    }
}
