class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

    for (int asteroid : asteroids) {
        bool destroyed = false;

        while (!st.empty() && asteroid < 0 && st.top() > 0) {
            if (abs(asteroid) > st.top()) {
                st.pop(); // current asteroid still alive, keep checking
            } else if (abs(asteroid) == st.top()) {
                st.pop(); // both explode
                destroyed = true;
                break;
            } else {
                // top asteroid is bigger, current one is destroyed
                destroyed = true;
                break;
            }
        }

        if (!destroyed) {
            st.push(asteroid);
        }
    }

    vector<int> result(st.size());
    for (int i = st.size() - 1; i >= 0; --i) {
        result[i] = st.top();
        st.pop();
    }

    return result;
    }
};