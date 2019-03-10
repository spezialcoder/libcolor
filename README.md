# libcolor
A C ++ library for changing the text and background color of a terminal

An example of changing the text color:

```c++
#include "libcolor/libcolor.h"
#include <iostream>
using namespace std;
int main()
{
  cout << font_color::green << "Hello World" << endl;
}
```
And for changing the background:
```c++
#include "libcolor/libcolor.h"
#include <iostream>
using namespace std;
int main()
{
  cout << background::red << "Hello World" << endl;
}
```
