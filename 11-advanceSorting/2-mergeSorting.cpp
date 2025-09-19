#include <iostream>
using namespace std;

void merge(int *arr, int start, int end) {
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values to the temporary arrays
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy any remaining elements of first[]
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy any remaining elements of second[]
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free memory of temporary arrays
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }

    int mid = (start + end) / 2;

    // Sort the left part
    mergeSort(arr, start, mid);

    // Sort the right part
    mergeSort(arr, mid + 1, end);

    // Merge the sorted parts
    merge(arr, start, end);
}

int main() {
    int arr[] = {38, 27, 43,23,45, 3, 9, 82, 10,100,103,344,567,879};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
explain the `merge` and `mergeSort` functions 

### `mergeSort` function ka explanation:
- **Kya hai:** Ye function ek recursive function hai jo array ko bar-bar do parts mein todta hai (left aur right). Jab tak har part mein sirf ek element nahi bacha, tab tak ye divide karta rehta hai.
- **Kyun use hota hai:** Sorting karne ke liye pehle array ko chhote chhote parts mein divide karna padta hai, taki hum asaani se unhe sort karke wapas merge kar sakein.
- **Kaise kaam karta hai:**
  1. Array ko beech se (middle point) divide karta hai.
  2. Pehle left half ko sort karta hai (`mergeSort(arr, start, mid)`).
  3. Phir right half ko sort karta hai (`mergeSort(arr, mid + 1, end)`).
  4. Jab dono halves sort ho jaati hain, tab unhe merge karta hai using `merge` function.

Example:
- Agar tumhare paas array hai `{38, 27, 43, 3, 9, 82, 10}`, toh `mergeSort` pehle array ko bar-bar divide karega:
  - `{38, 27, 43, 3}` aur `{9, 82, 10}`
  - `{38, 27}` aur `{43, 3}`, phir `{9}` aur `{82, 10}`, and so on...

---

### `merge` function ka explanation:
- **Kya hai:** Ye function do sorted halves ko ek final sorted array mein merge karta hai.
- **Kyun use hota hai:** Jab tumne `mergeSort` se array ke left aur right parts ko sort kar liya hai, tab hume un dono parts ko combine (merge) karke ek final sorted array banana hota hai. Ye kaam `merge` function karta hai.
- **Kaise kaam karta hai:**
  1. Pehle do temporary arrays (`first` aur `second`) banata hai jo left aur right parts ko copy karte hain.
  2. Phir ye dono arrays ko compare karta hai: jo chhota element hota hai, usse main array mein dal deta hai.
  3. Agar kisi ek array ka saara data dal diya, toh jo elements bache hain doosre array mein, unhe bhi main array mein daal deta hai.

Example:
- Agar left part sorted hai `{27, 38}` aur right part sorted hai `{3, 43}`, toh `merge` function dono ko mila kar `{3, 27, 38, 43}` bana deta hai.

---

### **Summary:**
1. **`mergeSort`:** Array ko divide karta hai left aur right parts mein, unhe recursively sort karta hai.
2. **`merge`:** Do sorted parts ko merge karke ek sorted array banata hai.
*/