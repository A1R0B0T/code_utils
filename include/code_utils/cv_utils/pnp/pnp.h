#ifndef INITPNP_H
#define INITPNP_H

#include "linearpnp.h"
#include "nonlinearpnp.h"

namespace cv
{
class Pnp
{
    public:
    Pnp( const std::vector< Eigen::Vector3d >& image_point,
         const std::vector< Eigen::Vector3d >& scene_point,
         Eigen::Quaterniond& q_dst,
         Eigen::Vector3d& T_dst );
    Pnp( const std::vector< Eigen::Vector3d >& image_point,
         const std::vector< Eigen::Vector3d >& scene_point,
         const Eigen::Quaterniond& q_init,
         const Eigen::Vector3d& T_init,
         Eigen::Quaterniond& q_dst,
         Eigen::Vector3d& T_dst );
};
}
#endif // INITPNP_H
