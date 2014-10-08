#ifndef SRC_ACTION_H_
#define SRC_ACTION_H_

#include <valijson/schema.hpp>

namespace Cthun {
namespace Agent {

class Action {
  public:
    valijson::Schema input_schema;
    valijson::Schema output_schema;
};

}  // namespace Agent
}  // namespace Cthun

#endif  // SRC_ACTION_H_
