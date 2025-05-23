rm -f dare_devil
sudo mkdir /usr/share/doc/dare-devil/ && sudo mkdir /usr/share/dare-devil/
sudo mv *.h /usr/include/ && sudo mv dare-devil.desktop /usr/share/applications/ && sudo mv  Dare_Devil.png /usr/share/pixmaps && sudo mv LICENSE /usr/share/doc/dare-devil/ && sudo mv README.md /usr/share/doc/dare-devil/ && sudo mv 'devil_&angel.gif' /usr/share/doc/dare-devil/
sudo gcc -o dare_devil dare_devil.c -w
sudo rm -f dare_devil.c
sudo mv dare_devil /usr/bin/

