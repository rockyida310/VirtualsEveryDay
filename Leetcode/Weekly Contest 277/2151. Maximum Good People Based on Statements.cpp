class Solution
{
public:
    int maximumGood(vector<vector<int>> &statements)
    {
        int res = 0, n = statements.size();

        for (int mask = 0; mask < (1 << n); ++mask)
        {
            // those who are set are lying
            bool invalid = false;
            for (int i = 0; i < n; ++i)
            {
                int good = (mask & (1 << i));
                for (int j = 0; j < n; ++j)
                {
                    if (!good)
                    {
                        if (statements[j][i] == 1 && (mask & (1 << j)))
                        {
                            invalid = true;
                            break;
                        }
                    }
                    else
                    {

                        if ((statements[i][j] == 0 && (mask & (1 << j))) || (statements[i][j] == 0 && (mask & (1 << j))) ||
                            (statements[i][j] == 1 && !(mask & (1 << j))))
                        {
                            invalid = true;
                            break;
                        }
                    }
                }
                if (invalid)
                    break;
            }

            if (!invalid)
                res = max(res, __builtin_popcount(mask));
        }

        return res;
    }
};