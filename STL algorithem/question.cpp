//  use of array STL

// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {

//     array<int, 4> a = {1, 2, 3, 4};
//     int size = a.size();

//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << endl;
//     }

//     cout << " Element at 2 index " << a.at(2) << endl ;
//     cout << " Empty or not " << a.empty()<< endl ;

//     cout << " First element - > " << a.front() << endl ;
//     cout << " last element - > " << a.back() << endl ;

//     return 0;
// }

//  --------use of vector-------
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout << " capacity " << v.capacity() << endl;

//     v.push_back(1);
//     cout << "capacity " << v.capacity() << endl;
//     cout << "size ->" << v.size() << endl;
//     v.push_back(2);
//     cout << "capacity " << v.capacity() << endl;
//     cout << "size ->" << v.size() << endl;

//     cout << " element at 1 index " << v.at(1) << endl;

//     vector<int> a(5, 1);
//     vector<int> last(a);
//     cout << " print last " << endl;
//     for (int i : last)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ----------- use of deque ---------------
// #include <iostream>
// #include <deque>
// using namespace std;
// int main()
// {
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     cout << " print first Index element ->" << d.at(1) << endl;
//     cout << " front" << d.front() << endl;
//     cout << "  back" << d.back() << endl;

//     return 0;
// }

//  ------------ list -------------
// #include <iostream>
// #include <list>

// using namespace std;
// int main()
// {
//     list<int> l;
//     list<int> n(5, 100);
//     cout << " printing number " << endl;
//     for (int i : n)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     l.push_back(1);
//     l.push_front(2);
//     for (int i : l)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// --------- stack ----------
// #include <iostream>
// #include <stack>

// using namespace std;
// int main()
// {
//     stack<string> s;
//     s.push(" love ");
//     s.push("babbar");
//     s.push("kumar");
//     cout << " top element " << s.top() << endl;
//     s.pop();
//     cout << " top element " << s.top() << endl;
//     s.push("jasvant");
//     cout << " top element " << s.top() << endl;
//     cout << " element size-> " << s.size() << endl;

//     return 0;
// }

// ------------ queue --------------

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     queue<string> q;
//     q.push(" hello ");
//     cout << " size -> " << q.size() << endl;

//     //  max heap
//     priority_queue<int> maxi;

//     //   min heap
//     priority_queue<int, vector<int>, greater<int>> mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0) ;
//     cout << " maxi of size -> "<< maxi.size() << endl ;
//      for (int i = 0; i<maxi.size(); i++)
//      {
//         cout << maxi.top() << " " ;
//         maxi.pop();
//      }
//      cout << endl ;

//     return 0;
// }

// - ----------- set ----------

// #include <iostream>
// #include <set>

// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(5);
//     s.insert(2);
//     s.insert(4);
//     s.insert(5);
//     s.insert(4);
//     s.insert(3);
//     s.insert(5);
//     s.insert(5);
//     s.insert(6);
//     s.insert(5);
//     s.insert(5);
//     s.insert(9);
//     s.insert(8);
//     s.insert(2);
//     s.insert(7);
//     s.insert(6);
//     s.insert(5);

//     for (int i = 0; i < s.size(); i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);
//     for (int i : s)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << " 5 is present of not " << s.count(5) << endl ;

// }

// ------ map -------------

// #include <iostream>
// #include <map>

// using namespace std;
// int main()
// {
//      map<int, string> m;
//      m[1] = "babbar" ;
//      m[13] = "love" ;
//      m[2] = "kumar" ;

//     for (auto i : m)
// {
//     cout << i.first << " -> " << i.second << endl;
// }
//  cout << " fiding 13 -> " << m.count(13) << endl ;
//  cout << " fiding -13 -> " << m.count(-13) << endl ;
//   m.erase(13);
//   cout << " after erase  " << endl ;
//   for (auto i : m)
// {
//     cout << i.first << " -> " << i.second << endl;
// }
// }

// ---------- algorithm ----------
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(13);
    v.push_back(7);

    cout << " finding 6  " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << " lower bound ->  " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << " upper bound ->  " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 7;

    cout << " max -> " << max(a, b) << endl;
    cout << " min -> " << min(a, b);
    swap(a, b);
    cout << " a - > " << a << endl
         << " b - > " << b << endl;

       string abcd = "abcd" ;
       reverse(abcd.begin() , abcd.end());
        cout << " string "<< abcd << endl ;

        rotate(v.begin() , v.end()+1 , v.end());
         cout << " after rotere " << endl ;
          for(int i : v) {
            cout << i << " " ;
          } 
          cout << endl ;
}