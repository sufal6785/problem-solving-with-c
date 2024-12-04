#include <stdio.h>
#include <string.h>

typedef struct {
    int empno;
    char name[30];
    float salary;
} Employee;

int binarySearch(Employee employees[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (employees[mid].empno == target) return mid;
        if (employees[mid].empno < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void sortEmployees(Employee employees[], int n) {
    Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].empno > employees[j].empno) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {
    Employee employees[] = {
        {102, "Alice", 50000}, {101, "Bob", 45000}, {104, "Charlie", 55000}, {103, "David", 48000}
    };
    int n = 4, target = 103;

    sortEmployees(employees, n);
    int index = binarySearch(employees, n, target);
    if (index != -1) {
        printf("Employee found:\nEmp No: %d, Name: %s, Salary: %.2f\n", employees[index].empno, employees[index].name, employees[index].salary);
    } else {
        printf("Employee not found.\n");
    }
    return 0;
}
