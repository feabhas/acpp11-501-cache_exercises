// Alarm.h
// See project README.md for disclaimer and additional information.
// Feabhas Ltd

#pragma once
#ifndef ALARM_H
#define ALARM_H

#include <iosfwd>

class Alarm {
public:
  enum class Type { invalid, advisory, caution, warning };

  Alarm() = default;
  explicit Alarm(Type alarm_init);

  const char* as_string() const;
  Type        type() const;

private:
  Type value{ Type::invalid };
};

std::ostream& operator<<(std::ostream& os, Alarm const& alarm);
void  print_alarm(Alarm const& alarm);
Alarm make_alarm(Alarm::Type type);

#endif
