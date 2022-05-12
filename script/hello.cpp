#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    // constructor
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to Andrew's World!\n");
            }

    // This load function is mandatory and should always be included
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}