#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

bool validateDate(Date d) {
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1 || d.day > daysInMonth(d.month, d.year))
        return false;
    return true;
}

int compareDates(Date d1, Date d2) {
    if (d1.year != d2.year)
        return d1.year < d2.year ? -1 : 1;
    if (d1.month != d2.month)
        return d1.month < d2.month ? -1 : 1;
    if (d1.day != d2.day)
        return d1.day < d2.day ? -1 : 1;
    return 0;
}

int daysBetweenDates(Date d1, Date d2) {
    int count = 0, sign = compareDates(d1, d2);
    if (sign == 0) return 0;
    if (sign > 0) { Date temp = d1; d1 = d2; d2 = temp; }
    while (compareDates(d1, d2) != 0) { d1 = incrementDate(d1); count++; }
    return count * (sign > 0 ? -1 : 1);
}

Date incrementDate(Date d) {
    d.day++;
    if (d.day > daysInMonth(d.month, d.year)) { d.day = 1; d.month++; }
    if (d.month > 12) { d.month = 1; d.year++; }
    return d;
}

Date addDaysToDate(Date d, int n) {
    for (int i = 0; i < n; i++) d = incrementDate(d);
    return d;
}

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) return 29;
    return days[month - 1];
}

int main() {
    Date d1 = {15, 10, 2023}, d2 = {14, 10, 2024};
    if (validateDate(d1) && validateDate(d2)) {
        int cmp = compareDates(d1, d2);
        if (cmp == 0) printf("Dates are equal\n");
        else if (cmp < 0) printf("d1 is earlier than d2\n");
        else printf("d1 is later than d2\n");
        printf("Days between d1 and d2: %d\n", daysBetweenDates(d1, d2));
        printf("Next date of d1: %02d-%02d-%d\n", incrementDate(d1).day, incrementDate(d1).month, incrementDate(d1).year);
        int n = 50;
        Date d3 = addDaysToDate(d1, n);
        printf("Date after adding %d days to d1: %02d-%02d-%d\n", n, d3.day, d3.month, d3.year);
    } else {
        printf("Invalid date(s)\n");
    }
    return 0;
}
