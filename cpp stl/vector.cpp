#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> marks(5,-1);
    /*
    #include <iostream>
#include <vector>
using namespace std;
int main() {
    
    // Declares an empty vector
    vector<int> v1;
    
    // Declares vector with given size
    // and fills it with a value
    vector<int> v2(3, 5);  
    
    // Print items of v2
    for (int x : v2) {
        cout << x << " ";
    }
    
    cout << endl;
    
    // Initializes vector using 
    // initializer list.
    vector<int> v3 = {1, 2, 3};  
    
    // Print items of v3
    for (int x : v3) {
        cout << x << " ";
    }
    
    return 0;
}*/
/*
Iterators 
begin()
end()
rbegin()
rend()
cbegin()
cend()
crbegin()
crend() 
Capacity
size()
max_size()
capacity()
empty()
resize()
reserve()
shrink_to_fit() 
Element Access
operator[]
at()
front()
back()
data()
Modifiers
push_back()
pop_back()
insert()
erase()
swap()
clear()
emplace()
emplace_back()
assign() 
Allocator 
get_allocator() 
*/
    cout<<*(marks.begin());
    return 0;
}