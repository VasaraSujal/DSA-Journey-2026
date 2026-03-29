class EventManager {
public:

    set<pair<int, int>> st;
    unordered_map<int, int> mp;
    
    EventManager(vector<vector<int>>& events) {
        for(auto &e : events) {
            int id = e[0];
            int temp = e[1];

            st.insert({-temp, id});
            mp[id] = temp;
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        int oldPriority = mp[eventId];
        
        st.erase({-oldPriority, eventId});
        st.insert({-newPriority, eventId});

        mp[eventId] = newPriority;
    }
    
    int pollHighest() {
        if(st.empty()) return -1;
        auto it = st.begin();
        int eventId = it->second;

        st.erase(it);
        mp.erase(eventId);

        return eventId;
    }
};
