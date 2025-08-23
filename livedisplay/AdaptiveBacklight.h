#pragma once

#include <aidl/vendor/lineage/livedisplay/BnAdaptiveBacklight.h>
#include <android-base/file.h>
#include <android-base/logging.h>
#include <android-base/strings.h>

namespace aidl {
namespace vendor {
namespace lineage {
namespace livedisplay {

class AdaptiveBacklight : public BnAdaptiveBacklight {
  public:
    // Methods from BnAdaptiveBacklight
    ndk::ScopedAStatus getEnabled(bool* _aidl_return) override;
    ndk::ScopedAStatus setEnabled(bool enabled) override;

  private:
    static constexpr const char* kCabcStatusPath =
        "/sys/devices/platform/soc/soc:qcom,dsi-display/cabc";
};

}  // namespace livedisplay
}  // namespace lineage
}  // namespace vendor
}  // namespace aidl
