#ifndef MCU_MCU_H
#define MCU_MCU_H

namespace mcu {

class Mcu {
 public:
  Mcu();
  ~Mcu() = default;

 private:
  void EnablePeripheralClocks();
  void ResetPeripherals();
};

} //  namespace mcu

#endif /* MCU_MCU_H */
