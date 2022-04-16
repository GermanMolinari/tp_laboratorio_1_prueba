/*
 * tp_uno.h
 *
 *  Created on: 13 abr 2022
 *      Author: bolsi uwu
 */

#ifndef TP_UNO_H_
#define TP_UNO_H_

int menu(float* kilometros, float* precioAerolineas, float* precioLatam);
float calcularDescuento (float precio, float descuento);
float calcularInteres (float precio, float interes);
int dividirFlotantes (float divisor, float dividendo, float* pResultado);
float multiplicarFlotantes(float a, float b);
float restarFlotantes (float a, float b);
void cargarForzadamente (float kmIngresados, float precioAerolineas, float precioLatam);

#endif /* TP_UNO_H_ */
