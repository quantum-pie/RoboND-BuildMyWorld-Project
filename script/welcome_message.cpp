#include <gazebo/gazebo.hh>
#include <iostream>

namespace gazebo {
  class WorldPluginMyRobot : public WorldPlugin {
    public: 
        WorldPluginMyRobot() : WorldPlugin() {
            std::cout << "Welcome to Pavel’s World!\n";
        }

        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
