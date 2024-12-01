#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n <= 3) return true;  
    if (n % 2 == 0 || n % 3 == 0) return false; 
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false; 
    }
    
    return true; 
}

// ei pattern judge sir bolchilen, jara code dekhbi khatay thakbe

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        } 
    }

    return 0;
}

