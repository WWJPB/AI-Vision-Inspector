To launch Application on Unix System you need to install prerequiments you can do by typing this command

sudo apt update
sudo apt install pkg-config libxinerama-dev libx11-dev libxrandr-dev libxcursor-dev libxi-dev libxkbcommon-dev

To use commands you need to be in location where CMakeLists.txt is
To create MakeFile use following command
cmake build
To reset build type folowing command
rm -rf *
To Compile application simply execute this command
cmake --build build
To launch Application type
build/Application
