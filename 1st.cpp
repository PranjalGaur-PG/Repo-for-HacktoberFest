#include<bits/stdc++.h>
using namespace std;

class Solution {
  private:
    int n, m, q;
    map<string, int> nodeMap;
    vector< set<int>> lockedDescendants; 
    vector<int> lockId;

    int stringToNodeId(string s) { 
      return nodeMap[s]; 
    }

    // Upgrade Functionality
    bool upgrade(int node, int& id) {
      if(lockedDescendants[node].size() == 0)
        return false;

      for(auto it : lockedDescendants[node]) {
        if(lockId[it] != id) return false;
      }
      
      set<int> st_temp = lockedDescendants[node];
      for(auto it : st_temp) {
        unlock(it, id);
      }

      lock(node, id);
      return true;
    }
    // End of Upgrade Functionality

    // Lock Functionality
    bool checkParentForLock(int node) {
      if(lockId[node] != -1) return false;

      if(node != 0) if(!checkParentForLock((node-1)/m)) return false;

      return true;
    }

    void insertNodeInAncestors(int curNode, int& node) {
      lockedDescendants[curNode].insert(node);

      if(curNode != 0) insertNodeInAncestors((curNode-1)/m, node);
    }

    bool lock(int node, int& id) {
      if(lockId[node] != -1) return false;
      if(lockedDescendants[node].size() != 0) return false;

      if(node != 0) {
        if(!checkParentForLock((node-1)/m)) return false;
      }

      lockId[node] = id;
      if(node != 0) insertNodeInAncestors((node-1)/m, node);
      return true;
    }
    // End of Lock Functionality

    // Unlock Functionality
    void removeNodeFromAncestor(int curNode, int& node) {
      lockedDescendants[curNode].erase(node);
      if(curNode != 0) removeNodeFromAncestor((curNode-1)/m, node);
    }

    bool unlock(int node, int& id) {
      if(lockId[node] == -1) return false;
      if(lockId[node] != id) return false;

      lockId[node] = -1;
      removeNodeFromAncestor((node-1)/m, node);
      return true;
    }
    // End of Unlock Functionality

  public:

    Solution(int nodes, int mAry) {
      n = nodes, m = mAry;
      lockedDescendants.resize(n);
      lockId.resize(n, -1);

      for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        nodeMap[s] = i;
      }
    }

    bool query() {
      int condition, id;
      string node;
      cin>>condition>>node>>id;
      int nodeIndex = stringToNodeId(node);

      if(condition == 1) {
        if(lock(nodeIndex, id)) return true;
      }
      else if(condition == 2) {
        if(unlock(nodeIndex, id)) return true;
      }
      else {
        if(upgrade(nodeIndex, id)) return true;
      }

      return false;
    }
};

int main()
{
  int n, m, q;
  cin>>n>>m>>q;

  Solution S1(n, m);

  for(int i=0;i<q;i++) {
   if(S1.query()) cout<<"true";
   else cout<<"false";
   cout<<endl;
  }

  return 0;
}