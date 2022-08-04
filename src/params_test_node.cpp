#include <rclcpp/rclcpp.hpp>

namespace params_test_node
{
    class ParamsTestNode : public rclcpp::Node
    {
        public:
        ParamsTestNode(const rclcpp::NodeOptions & node_options)
        : Node("params_test_node", node_options)
        {
            auto v = this->declare_parameter<int32_t>("foo");
            (void)v;
        }
    };
}

#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(params_test_node::ParamsTestNode)
