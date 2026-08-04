char* map[10] = {
    "",    "",    "abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void backtrack(char* digits, int index, char* current, char** result, int* count) {
    if (digits[index] == '\0') {
        result[*count] = strdup(current);
        (*count)++;
        return;
    }
    char* letters = map[digits[index] - '0'];
    for (int i = 0; letters[i] != '\0'; i++) {
        int len = strlen(current);
        current[len] = letters[i];
        current[len+1] = '\0';
        backtrack(digits, index+1, current, result, count);
        current[len] = '\0';
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    *returnSize = 0;
    if (digits[0] == '\0') return NULL;
    char** result = (char**)malloc(sizeof(char*) * 200);
    char current[10] = "";
    backtrack(digits, 0, current, result, returnSize);
    return result;
}
