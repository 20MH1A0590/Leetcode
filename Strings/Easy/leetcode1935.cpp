class Solution {
public:
    bool check(char c, string &brokenLetters)
    {
        for(int i = 0; i < brokenLetters.size(); i++)
        {
            if(brokenLetters[i] == c) return true;
        }
        return false;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string>words;
        string word = "";
        for(int i = 0; i <= text.size(); i++)
        {
            if(text[i] != ' ') word += text[i];
            if(text[i] == ' ' || i == text.size()-1)
            {
                words.push_back(word);
                word = "";
            }
        }
        int cnt = 0;
        for(int i = 0; i < words.size(); i++)
        {
            bool flag = false;
            for(int j = 0; j < brokenLetters.size(); j++)
            {
                if(check(brokenLetters[j], words[i]))
                {
                    flag = true;
                    break;
                }
            }
            if(!(flag)) cnt++;
        }
        return cnt;
    }
};
