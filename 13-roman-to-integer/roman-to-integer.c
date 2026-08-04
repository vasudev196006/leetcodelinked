int romanToInt(char* s) {
    int total = 0;
    int i;
    int value[256] = {0};
    
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;
    
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i+1] != '\0' && value[(int)s[i]] < value[(int)s[i+1]]) {
            total -= value[(int)s[i]];
        } else {
            total += value[(int)s[i]];
        }
    }
    
    return total;
}