/* Task_1 - A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
            You are given an array of strings sentences, where each sentences[i] represents a single sentence.
            Return the maximum number of words that appear in a single sentence.
*/

int mostWordsFound(vector<string>& sentences) {
    int maxWords = -1;
    for(auto &words : sentences){
        int cnt = 0;
        for(auto &ch : words){
            if(ch == ' ')cnt++;
        }
        maxWords = max(maxWords,cnt+1);
    }
    return maxWords;
}

// Time Complexity - O(sizeof(sentences))
// Space Complexity - O(1)
