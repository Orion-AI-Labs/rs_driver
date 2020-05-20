/******************************************************************************
 * Copyright 2017 RoboSense All rights reserved.
 * Suteng Innovation Technology Co., Ltd. www.robosense.ai

 * This software is provided to you directly by RoboSense and might
 * only be used to access RoboSense LiDAR. Any compilation,
 * modification, exploration, reproduction and redistribution are
 * restricted without RoboSense's prior consent.

 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ROBOSENSE BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#pragma once
#include <string>
#include <array>

namespace robosense
{

/**
   * @brief Lidar packet Message for Robosense SDK.
   * @detail Robosense LidarPacketMsg is defined for passing lidar single packet such like difop packet accross different modules
   *         If ROS is turned on , we provide translation functions between ROS message and Robosense message
   */


#ifdef _MSC_VER
#pragma pack(push, 2)
typedef	struct eLidarPacketMsg
#elif __GNUC__
typedef	struct alignas(16) eLidarPacketMsg
#endif
{
  double timestamp = 0.0;
  std::string frame_id = "";
  std::array<uint8_t, 1248> packet{}; ///< lidar single packet
} LidarPacketMsg;
#ifdef _MSC_VER
#pragma pack(pop)
#endif

} // namespace robosense
