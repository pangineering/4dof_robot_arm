#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/src/joint_state_publisher_gui"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/install/lib/python2.7/dist-packages:/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/build" \
    "/usr/bin/python2" \
    "/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/src/joint_state_publisher_gui/setup.py" \
    egg_info --egg-base /home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/build/joint_state_publisher_gui \
    build --build-base "/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/build/joint_state_publisher_gui" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/install" --install-scripts="/home/pan/Documents/GitHub/4dof_robot_arm/arm_ws/install/bin"
