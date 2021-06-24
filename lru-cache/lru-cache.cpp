// class LRUCache {
// public:
    
//     // LIST WILL BE IN THE ORDER :       head...most frequent..............least frequent....tail
    
//     // NODE WILL BE CONSTITUTING (KEY, VALUE)
//     // MAP WILL HAVE ( KEY, POINTER REFERENCE)
    
//     // each node of type doubly linkedlist node, having previous and next pointer 
//     class node{
//         public:
//             int key;
//             int value;
//             node * prev;
//             node * next;
        
//         node(int key, int value){
//             this->key = key;
//             this->value = value;
//             next= NULL;
//             prev= NULL;
//         }
        
//     };
    
    
//     // we will create two dummy nodes 
//     // head node and tail node 
//     // assume that it has some dummy values , say that to be key and value to be equal to -1
    
//     int sz =0; // global variable to store the size of the capacity of the lru cache
//     unordered_map< int , node*>mp;  // this is hash table used for easy lookups , while seraching if the element is present or not in the map 
    
//     // it will be store key , and its address in the given doubly linkedlist ( cache)
    
//     node * head = new node(-1, -1);
//     node * tail = new node(-1, -1);
    
    
//     void delete_node(node * cur)
//     {
//        node * prev_node  = cur->prev;
//        node * next_node = cur->next;
        
//        prev_node->next = next_node;
//         next_node->prev = prev_node;
        
//     }
//     void add_node( node * cur)
//     {
//          node * temp = head->next;
//         cur->next = temp;
//         cur->prev = head;
//         head->next = cur;
//         temp->prev  = cur;
        
//     }
    
//     LRUCache(int capacity) {
        
//         sz = capacity;
        
//         // connecting those two dummy nodes
//         head->next = tail;
//         tail->prev = head;
//     }
    
//     int get(int k) {
        
//         if(mp.find(k)!=mp.end())
//         {
//            // making that particular node as the most recently visited node 
//            // we need to update the address of the node in the map
//             // we need to delete that node from its current posistion 
//             // we need to add it in the front the list 
            
//             node  *  resnode = mp[k];
//             int value = resnode->value;
            
//             mp.erase(k);
            
//             delete_node(resnode);
//             add_node(resnode);
//             mp[k] = head->next;
//             return value;
            
//         }
        
//         return -1;
//     }
    
//     void put(int key, int value) {
        
//         // we need to add the new value that is the most recently used value , in the front of the list
//         // make a node 
//         // update map --> key , address
//         // attach that node to the next of head 
//         if(mp.find(key)!=mp.end())
//         {
//             // update to the most recently used   
//             node * current = mp[key];
//             mp.erase(key);
//             delete_node(current);
            
//         }
//         if(mp.size()==sz)
//         {
//             // if capacity reached , then pop the front element
//             mp.erase(tail->prev->value);
//             delete_node(tail->prev);
            
//         }
       
//             // make node 
//             // attach it to the head of the list
            
//         node * newnode = new node(key, value);
//         add_node(newnode);
//         mp[key]= head->next;
        
        
        
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */

class LRUCache {
public:
    class node {
        public:
            int key;
            int val;
            node* next;
            node* prev;
        node(int _key, int _val) {
            key = _key;
            val = _val; 
        }
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    int cap;
    unordered_map<int, node*>m;
    
    LRUCache(int capacity) {
        cap = capacity;    
        head->next = tail;
        tail->prev = head;
    }
    
    void addnode(node* newnode) {
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }
    
    void deletenode(node* delnode) {
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    int get(int key_) {
        if (m.find(key_) != m.end()) {
            node* resnode = m[key_];
            int res = resnode->val;
            m.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            m[key_] = head->next;
            return res; 
        }
    
        return -1;
    }
    
    void put(int key_, int value) {
        if(m.find(key_) != m.end()) {
            node* existingnode = m[key_];
            m.erase(key_);
            deletenode(existingnode);
        }
        if(m.size() == cap) {
          m.erase(tail->prev->key);
          deletenode(tail->prev);
        }
        
        addnode(new node(key_, value));
        m[key_] = head->next; 
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */