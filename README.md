# comparestr
simple and lightweight multiplatform string comparison tool for whenever you need to compare strings or sha1 or whatever your into

compile on linux with `g++ main.cpp -o comparestr`

install on linux with `sudo mv comparestr /bin`

if your on windows use visual studio or something idk

use through cmd on windows add it to your path

install/update script - can be deleted after used (linux only) (auto removes uneeded files apart from update files)

```
#!/bin/bash

echo "removing and updating..."
rm -rf tempinstallcomparestr
mkdir tempinstallcomparestr
cd tempinstallcomparestr
git clone https://github.com/Alpha-404/comparestr
cd comparestr
g++ main.cpp -o comparestr
echo "sudo perms required to remove existing comparestr and install to /bin"
sudo rm /bin/comparestr
sudo mv comparestr /bin
cd ~
rm -rf tempinstallcomparestr
echo "updated!"
echo "testing..."
echo "comparestr hi bye"
comparestr hi bye
echo "comparestr hi hi"
comparestr hi hi
````

uninstall script if you for some reason need it (linux only)

```
#!/bin/bash
echo "sudo perms required to remove compare str"
sudo rm /bin/comparestr
echo "removed comparestr"
```
