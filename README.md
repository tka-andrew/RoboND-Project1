# Udacity Nanodegree - Robotics Software Engineer - Project1

This is my project submission for Project1: Build My World of [Udacity Nanodegree - Robotics Software Engineer](https://www.udacity.com/course/robotics-software-engineer--nd209?irclickid=U9u1PgV1xxyIROOV3m3wlTMuUkD0yqTMORvH3A0&irgwc=1&utm_source=affiliate&utm_medium=&aff=2298976&utm_term=&utm_campaign=__&utm_content=&adid=786224).

## Summary of tasks
1. Build a single floor wall structure using the Building Editor tool in Gazebo. Apply at least one feature, one color, and optionally one texture to your structure. Make sure there's enough space between the walls for a robot to navigate.
2. Model any object of your choice using the Model Editor tool in Gazebo. Your model links should be connected with joints.
3. Import your structure and two instances of your model inside an empty Gazebo World.
4. Import at least one model from the Gazebo online library and implement it in your existing Gazebo world.
5. Write a C++ World Plugin to interact with your world. Your code should display “Welcome to ’s World!” message as soon as you launch the Gazebo world file.

## Usage
1. Git clone this project
2. `cd` into this project directory and build:
    ```
    mkdir build
    cd build
    cmake ..
    make
    ```
3. Append the path of the build folder above to $GAZEBO_PLUGIN_PATH
    ```
    export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/RoboND-Project1/build
    ```
4. `cd` into the world folder and run gazebo using the restaurant.world
    ```
    cd /home/workspace/RoboND-Project1/world
    gazebo restaurant.world
    ```