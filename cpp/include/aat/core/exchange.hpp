#pragma once

#include <stdint.h>
#include <deque>
#include <nlohmann/json.hpp>
#include <aat/config/enums.hpp>
#include <aat/core/instrument.hpp>

// for convenience
using json = nlohmann::json;
using namespace aat::config;

namespace aat {
namespace core {

  class ExchangeType {
  public:
    ExchangeType(std::string name)
      : name(name) {}

    std::string toString() const;

  private:
    std::string name;
  };

  static ExchangeType NullExchange = ExchangeType("");

} // namespace core
} // namespace aat
