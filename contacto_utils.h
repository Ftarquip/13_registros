#ifndef CONTACTO_UTILS_H
#define CONTACTO_UTILS_H

#include "contacto.h"
#include <string>

void leerCorreo(correo &, std::string, std::string);
void leerContacto(contactoEmail &, std::string, char, int, correo);
void imprimeContacto(const contactoEmail &);

#endif
