#include <iostream>
#include <string>
#include <vector>
using namespace std;

void storeSubset(string ans, string original, vector<string>& v, bool flag) {
    if (original == "") {
        v.push_back(ans);
        return;
    }
    
    char ch = original[0];
    
    if (original.length() == 1) {
        if (flag == true) storeSubset(ans + ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, true);
        return;
    }

    char dh = original[1];
    
    if (ch == dh) { // duplicate
        if (flag == true) storeSubset(ans + ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, false);
    } else { // no duplicate
        if (flag == true) storeSubset(ans + ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, true);
    }
}

int main() {
    string str = "aabbcc";
    vector<string> v;
    storeSubset("", str, v, true);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
/*

### Recursive Case Step by Step:

1. **Pehla Character:**
   Har step mein hum pehla character (i.e., `ch = original[0]`) uthate hain.

   Example: 
   Agar string `"aabb"` hai, toh sabse pehla character `"a"` hoga.

2. **Next Character Check:**
   Fir hum next character (i.e., `dh = original[1]`) check karte hain. Hum dekhte hain ki `ch` aur `dh` same hain ya alag (duplicate hain ya nahi).

   Example:
   - `ch = a`
   - `dh = a` (same character hai)

3. **Agar Duplicate Hai (`ch == dh`):**
   Agar `ch` aur `dh` same hain, toh iska matlab ye hai ki humare paas duplicate characters hain. Is case mein, hum do kaam karte hain:

   - **Flag Check (`flag == true`)**: 
     - Agar `flag true` hai, iska matlab hai ki hum pehla duplicate ko subset mein daal sakte hain. Isliye hum `ch` ko subset mein daal kar recursion call karte hain. 
     - Example: Subset `"a"` bana kar agle characters ke liye recursive call karenge.
   
   - **Flag False Set Karke Call**:
     - Dusra recursive call karte hain jisme `ch` ko skip karte hain, aur `flag = false` set karte hain. `flag = false` isliye set karte hain taaki agle duplicate ko subset mein add na kiya jaaye. 
     - Example: `"a"` ko skip kar diya, aur recursive call kar diya next character se, flag false set karke.

4. **Agar Duplicate Nahi Hai (`ch != dh`):**
   Agar `ch` aur `dh` different hain (matlab duplicate nahi hain), toh hum do recursive calls karte hain:

   - **Include Character:**
     - Pehle call mein hum `ch` ko subset mein daalte hain.
     - Example: Agar pehla character `"a"` hai, toh hum subset `"a"` bana kar recursive call karte hain.

   - **Skip Character:**
     - Dusre call mein hum `ch` ko subset mein nahi daalte, yaani skip kar dete hain.
     - Example: Pehla character `"a"` ko skip kar diya aur baki characters ke liye recursive call kiya.

---

### Example ke saath Samjhte Hain:

String: `"aabb"`

1. **Pehla Character**: `ch = a`, `dh = a` (duplicate hai)
   - **First Call (Flag true)**: Hum `ch = a` ko subset mein daalte hain aur agla character dekhenge: 
     - Subset: `"a"`
   - **Second Call (Skip)**: Hum `ch = a` ko skip kar dete hain, aur agla character ke liye call karte hain: 
     - Subset: `""` (empty hai)

2. **Agla Character**: `ch = a`, `dh = b` (duplicate nahi hai)
   - **First Call (Include)**: `ch = a` ko subset mein include karte hain:
     - Subset: `"a"`
   - **Second Call (Skip)**: `ch = a` ko skip karte hain:
     - Subset: `""`

3. **Next Steps**: Isi tarah har character ke liye recursive calls hote hain, jab tak string empty nahi ho jaati.



### Recap:

- Jab duplicate character milte hain (`ch == dh`), toh hum recursively ek call mein character ko include karte hain aur doosre mein skip karte hain, `flag` ka dhyan rakhte hue.
- Jab characters different hote hain (`ch != dh`), hum simply ek recursive call mein include karte hain aur doosre mein skip karte hain.

I hope ab yeh samajh mein aaya hoga. Agar koi specific part ab bhi confusion mein hai, toh batao, main aur simple karke samjha dunga!

*/