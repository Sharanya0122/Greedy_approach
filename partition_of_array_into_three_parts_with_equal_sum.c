bool canThreePartsEqualSum(int* arr, int arrSize) {
    int totalsum = 0;
    int c = 0;
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        totalsum += arr[i];
    }
    if (totalsum % 3 != 0) {
        return false;
    }
    int a = totalsum / 3;
    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
        if (sum == a) {
            c++;
            sum = 0; 
        }
    }
    if (c > 2) {
        return true;
    }
    return false;
}
