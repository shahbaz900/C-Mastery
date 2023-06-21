//Intuition
//First analyze how we are going to mergeand then think how to deal with pending elements of the array

//Complexity

//Time complexity :
//O(n + m)

//Space complexity :
//O(n + m)
class Solution 
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int j = 0, i = 0;
        string a1;
        while (word1[i] != '\0' && word2[j] != '\0')
        {
            a1.push_back(word1[i]);
            a1.push_back(word2[j]);
            j++;
            i++;
        }
        if (i != word1.size())
        {
            a1 = a1 + word1.substr(i, word1.size());
        }
        else if (j != word2.size())
        {
            a1 = a1 + word2.substr(j, word2.size());
        }
        return a1;
    }
};