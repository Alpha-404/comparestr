# comparestr

im too lazy to update the releases so if you want the latest just compile it from source

simple and lightweight multiplatform string comparison tool for whenever you need to compare strings or sha1 or whatever your into

compile on linux with `g++ main.cpp -o comparestr`

install on linux with `sudo mv comparestr /bin`

if your on windows use visual studio or something idk

use through cmd on windows add it to your path

install/update script - can be deleted after used (linux only) (auto removes uneeded files apart from update files)
very fancy 

```
#!/bin/bash

bold=$(tput bold)
normal=$(tput sgr0)
bloo="\e[94m"
echo "removing and updating..."
cd ~
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
echo -e "${bold}$HOSTNAME@$USER ${bloo}comparestr hi $USER${normal}"
comparestr $USER bye
echo -e "${bold}$HOSTNAME@$USER ${bloo}comparestr hi hi${normal}"
comparestr hi hi
echo -e "\nif the following results did not say \"Different Strings\" \nand then \"Same String\" then file a issue at the github repository\nhttps://github.com/Alpha-404/comparestr/issues"
````

uninstall script if you for some reason need it (linux only)

```
#!/bin/bash
echo "sudo perms required to remove compare str"
sudo rm /bin/comparestr
echo "removed comparestr"
```
