#include <stdint.h>

int32_t botonInicio = 0;
int32_t botonCancelar = 0;
int32_t cuentaTiempo = 0;
int32_t sensorTanqueLleno = 0;

void AbrirValvulaAgua();
void CerrarValvulaAgua();
void ActivarMotorLavado();
void ApagarMotorLavado();
void ActivarMotorCentrifugado();
void ApagarMotorCentrifugado();