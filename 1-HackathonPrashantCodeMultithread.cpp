#include <bits/stdc++.h>
using namespace std;
#define ll long long
class tree{
    ll n,m;
    vector<set<int>> nodes;
    vector<int> locked;

    ll parent(ll i){
        return (i-1)/m;
    }

    bool is_upgrade_possible(ll x, ll uid)
    {
        for(auto a:nodes[x])
        {
            if(locked[a]!=uid)
            return false;
        }
        return true;
    }
    Time: O(K)

    public:

    tree(ll no, ll m_ary){
        n = no;
        m = m_ary;
        nodes.resize(n);
        locked.resize(n, -1);
    }

    bool lock(ll x, ll uid){
        if(locked[x]!=-1 || nodes[x].size()!=0)
            return false;
        ll p = x;
        while(p!=0)
        {
            p = parent(p);
            if(locked[p]!=-1)
            return false;
        }
        locked[x] = uid;
        p = x;
        while(p!=0)
        {
            p = parent(p);
            nodes[p].insert(x);
        }
        return true;
    }
    Time: O(log(N)^2 + log(N))
    Space: O(log(N))

    bool unlock(ll x, ll uid){
        if(locked[x] == uid){
            locked[x] = -1;
            ll p = x;
            while(p!=0)
            {
                p = parent(p);
                nodes[p].erase(x);
            }
            return true;
        }
        return false;
    }
    Time: O(log(N)^2)
    Space: O(1)

    bool upgrade(ll x, ll uid){
        if(nodes[x].size()==0 || locked[x]!=-1) 
        	return false;
        if(is_upgrade_possible(x, uid))
        {
            auto b = nodes[x];
            for(auto a:b)
            {
                unlock(a, uid);
            }
            lock(x, uid);
            return true;
        }
        return false;
    }
    Time: O(K*((logN)^2)) + O((logn)^2) + O(K)
    Space: O(log(N))

    void print(bool ans)
    {
        if(ans)
        {
            cout<<"true"<<endl;
            return;
        }
        cout<<"false"<<endl;
    }
};
int main() {
	ll n, m, q, type,uid;
	string name;
	cin>>n>>m>>q;
	tree t(n,m);
	map<string, ll> hash;
	for(ll i=0;i<n;i++){
	    cin>>name;
	    hash[name] = i;
	}
	while(q--)
	{
	    cin>>type>>name>>uid;
	    switch(type)
	    {
	        case 1: 
	            t.print(t.lock(hash[name], uid));
	            break;
	        case 2: 
	            t.print(t.unlock(hash[name], uid));
	            break;
	        case 3: 
	            t.print(t.upgrade(hash[name], uid));
	            break;
	    }
	}
}

1 + m + m2 + ..... + m^(k-1) = n => (m^k - 1)/(m-1) = n

leaf = m^(k-1)

// 7
// 2
// 5
// world
// asia
// africa
// china
// india
// south
// egypt
// 1 china 9
// 1 india 9
// 3 asia 9
// 2 india 9
// 2 asia 9

// 7
// 2
// 3
// world
// asia
// africa
// china
// india
// south
// egypt
// 1 china 9
// 2 india 9
// 3 asia 9

// 3 2 2
// world china india
// 3 india 1
// 1 world 9






























































#include <bits/stdc++.h>
using namespace std;


class Tree {
  int n,m;
  vector<int>lockedBy;
  vector<int>semaphore_node, semaphore_desc;
  vector<map<int,set<int>>> locked_desc;

  

  void signalParents(int node, int parent){
        while(node != parent){
            semaphore_desc[node]--;
            node = getParent(node);
        }
  }


  int getParent(int index){
    if(index == 0)
        return -1;
    return (index-1)/m;
  }
  ///
  public:
  Tree(int _n, int _m){
    n = _n;
    m = _m;
    lockedBy.resize(n,-1);
    semaphore_node.resize(n, 0);
    semaphore_desc.resize(n, 0);
    locked_desc.resize(n);
  }
 
  bool lock(int node, int id)
  { 
        semaphore_node[node]++;

        if(lockedBy[node] != -1 ||semaphore_node[node] > 1 || semaphore_desc[node] > 0 )
        {
            semaphore_node[node]--;
            return false;
        }
       

        int p = getParent(node);

       
        while(p != -1){
            
            if(lockedBy[p] != -1 || semaphore_node[p] > 0){
                signalParents(node, p);
                semaphore_node[node]--;
                return false;
            }

            semaphore_desc[p]++;
            p = getParent(p);
        }
        
        
        if(locked_desc[node].size() > 0) {
            p = getParent(node);
            signalParents(node, p);
            semaphore_node[node]--;
            return false;
        }
        
        
        lockedBy[node]=id;

        p = getParent(node);
       
        while(p != -1){
            locked_desc[p][id].insert(node);
            semaphore_desc[p]--;
            p = getParent(p);
        }

        semaphore_node[node]--;

      
        return true;
  }
  
  
  bool unlock(int node, int id)
  {
      if(lockedBy[node] == -1 || lockedBy[node] != id)
        return false;
      
      lockedBy[node] = -1;
      
      int p = getParent(node);
       
        while(p != -1){
            locked_desc[p][id].erase(node);
            if(locked_desc[p][id].size() == 0)
                locked_desc[p].erase(id);
            p = getParent(p);
        }
      
        return true;
  }
  
  
  bool upgrade(int node,int id){
      
      if(lockedBy[node] != -1)
        return false;
      
      
      if(locked_desc[node].size() != 1 || locked_desc[node].find(id) == locked_desc[node].end())
        return false;
      
      
      for(auto node : locked_desc[node][id]){
        unlock(node, id);
      }
      
      
      lock(node,id);
      
      return true;
  }
    
};

int main() {
    int n, m, q;
    unordered_map<string, int> mp;

    cin>>n>>m>>q;

    for(int i = 0; i < n; i++){
        string node;
        cin>> node;
        mp[node] = i;
    }

    Tree* tree = new Tree(n,m);

    while(q--){
        int type, id;
        string s;
        cin>>type>>s>>id;
        int index= mp[s];
        bool ans;
        // cout<<type<<' '<<index<<' '<<id<<'\n';
        if(type==1) ans= tree->lock(index,id);
        else if(type==2) ans= tree->unlock(index, id);
        else ans= tree->upgrade(index, id);

        if(ans) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
  
  
    
    return 0;
}



































































#include <bits/stdc++.h>
using namespace std;


class Tree {
  int n,m;
  vector<int>lockedBy;
  vector<int>semaphore_node, semaphore_desc; // semaphore
  vector<map<int,set<int>>> locked_desc;

  void signalParents(int node, int parent){
        while(node != parent){
            semaphore_desc[node]--;
            node = getParent(node);
        }
  }


  int getParent(int index){
    if(index == 0)
        return -1;
    return (index-1)/m;
  }
  
  public:
  Tree(int _n, int _m){
    n = _n;
    m = _m;
    lockedBy.resize(n,-1);
    semaphore_node.resize(n, 0);
    semaphore_desc.resize(n, 0);
    locked_desc.resize(n);
  }
 
  bool lock(int node, int id)
  { 
        semaphore_node[node]++;

        if(lockedBy[node] != -1 || semaphore_node[node] > 1 || semaphore_desc[node] > 0 )
        {
            semaphore_node[node]--;
            return false;
        }

        int p = getParent(node);

        while(p != -1){

            if(lockedBy[p] != -1 || semaphore_node[p] > 0)
            {
                signalParents(node, p);
                semaphore_node[node]--;
                return false;
            }

            semaphore_desc[p]++;
            p = getParent(p);
        }

        if(locked_desc[node].size() > 0) {
            p = getParent(node);
            signalParents(node, p);
            semaphore_node[node]--;
            return false;
        }
        
        lockedBy[node]=id;

        p = getParent(node);
       
        while(p != -1){
            locked_desc[p][id].insert(node);
            semaphore_desc[p]--;
            p = getParent(p);
        }

        semaphore_node[node]--;
        return true;
  }
  
  
  bool unlock(int node, int id)
  {
      if(lockedBy[node] == -1 || lockedBy[node] != id)
        return false;
      
      lockedBy[node] = -1;
      
      int p = getParent(node);
       
        while(p != -1){
            locked_desc[p][id].erase(node);
            if(locked_desc[p][id].size() == 0)
                locked_desc[p].erase(id);
            p = getParent(p);
        }
      
        return true;
  }
  
  
  bool upgrade(int node,int id){
      
      if(lockedBy[node] != -1)
        return false;
      
      
      if(locked_desc[node].size() != 1 || locked_desc[node].find(id) == locked_desc[node].end())
        return false;
      
      
      for(auto node : locked_desc[node][id]){
        unlock(node, id);
      }
      
      
      lock(node,id);
      
      return true;
  }
    
};

int main() {
    int n, m, q;
    unordered_map<string, int> mp;

    cin>>n>>m>>q;

    for(int i = 0; i < n; i++){
        string node;
        cin>> node;
        mp[node] = i;
    }

    Tree* tree = new Tree(n,m);

    while(q--){
        int type, id;
        string s;
        cin>>type>>s>>id;
        int index= mp[s];
        bool ans;
        // cout<<type<<' '<<index<<' '<<id<<'\n';
        if(type==1) ans= tree->lock(index,id);
        else if(type==2) ans= tree->unlock(index, id);
        else ans= tree->upgrade(index, id);

        if(ans) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
  
  
    
    return 0;
}



































































#include <bits/stdc++.h>
using namespace std;


class Tree {
  int n,m;
  vector<int>lockedBy;
  vector<int>semaphore_node, semaphore_desc; // semaphore
  vector<map<int,set<int>>> locked_desc;

  void signalParents(int node, int parent){
        while(node != parent){
            semaphore_desc[node]--;
            node = getParent(node);
        }
  }


  int getParent(int index){
    if(index == 0)
        return -1;
    return (index-1)/m;
  }
  
  public:
  Tree(int _n, int _m){
    n = _n;
    m = _m;
    lockedBy.resize(n,-1);
    semaphore_node.resize(n, 0);
    semaphore_desc.resize(n, 0);
    locked_desc.resize(n);
  }
 
  bool lock(int node, int id)
  { 
  	if(lockedBy[node] != -1)
  		lockedBy[node] = -2;
  	
  	if(lockedBy[node] == -2)
  		lockedBy[node] = id;
  	else 
  		return false;
  		
 	if(locked_desc[node].size() > 0) {
            lockedBy[node] =-1
            return false;
        }
  
        if(lockedBy[node] != id)
        return false;

	int p = getParent(node);
			
      // Check all the parents if any of them is locked then return false.
        while (p != -1) {
            // Update all the parents by inserting the node in the set of the id.
          if(lockedBy[p] != -1 && lockedBy[p] != -2){ // if any parent is already locked then return false
            
            int curr = p;
            int new_p = getParent(node);
            while(new_p != curr){
              locked_desc[new_p][id].erase(node);
              if(locked_desc[new_p][id].size() == 0)
                	locked_desc[new_p].erase(id);
              
              
              new_p = getParent(new_p);

            }
            lockedBy[node] = -1;
            return false;
          }
          
        
            lockedBy[p] = -1;
            locked_desc[p][id].insert(node);
            p = getParent(p);
        }

        return true;
 	/*
        semaphore_node[node]++;

        if(lockedBy[node] != -1 || semaphore_node[node] > 1 || semaphore_desc[node] > 0 )
        {
            semaphore_node[node]--;
            return false;
        }

        int p = getParent(node);

        while(p != -1){

            if(lockedBy[p] != -1 || semaphore_node[p] > 0)
            {
                signalParents(node, p);
                semaphore_node[node]--;
                return false;
            }

            semaphore_desc[p]++;
            p = getParent(p);
        }

        if(locked_desc[node].size() > 0) {
            p = getParent(node);
            signalParents(node, p);
            semaphore_node[node]--;
            return false;
        }
        lockedBy[node]=id;
        */
        

        p = getParent(node);
       
        while(p != -1){
            locked_desc[p][id].insert(node);
            semaphore_desc[p]--;
            p = getParent(p);
        }

        semaphore_node[node]--;
        return true;
  }
  
  
  bool unlock(int node, int id)
  {
      if(lockedBy[node] == -1 || lockedBy[node] != id)
        return false;
      
      lockedBy[node] = -1;
      
      int p = getParent(node);
       
        while(p != -1){
            locked_desc[p][id].erase(node);
            if(locked_desc[p][id].size() == 0)
                locked_desc[p].erase(id);
            p = getParent(p);
        }
      
        return true;
  }
  
  
  bool upgrade(int node,int id){
      
      if(lockedBy[node] != -1)
        return false;
      
      
      if(locked_desc[node].size() != 1 || locked_desc[node].find(id) == locked_desc[node].end())
        return false;
      
      
      for(auto node : locked_desc[node][id]){
        unlock(node, id);
      }
      
      
      lock(node,id);
      
      return true;
  }
    
};

int main() {
    int n, m, q;
    unordered_map<string, int> mp;

    cin>>n>>m>>q;

    for(int i = 0; i < n; i++){
        string node;
        cin>> node;
        mp[node] = i;
    }

    Tree* tree = new Tree(n,m);

    while(q--){
        int type, id;
        string s;
        cin>>type>>s>>id;
        int index= mp[s];
        bool ans;
        // cout<<type<<' '<<index<<' '<<id<<'\n';
        if(type==1) ans= tree->lock(index,id);
        else if(type==2) ans= tree->unlock(index, id);
        else ans= tree->upgrade(index, id);

        if(ans) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
  
  
    
    return 0;
}