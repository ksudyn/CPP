/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:27:12 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/16 17:56:21 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cerr << "Error: num argument " << std::endl;
        //std::cerr imprime en la salida de error (útil para mensajes de error).
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        //s1.empty() evita bucles infinitos si s1 está vacío.
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        // std::ifstream abre el archivo para leer.
        // filename.c_str() convierte std::string a const char*
        // if (!infile) comprueba si la apertura falló, escribe el mensaje y se sale 
        std::cerr << "Error: cannot open input file." << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        // Crea (o sobreescribe) <filename>.replace.
        // filename.c_str() convierte std::string a const char*
        // (!outfile) si no se puede crear/escribir se escribe el mensaje y se sale
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }

    std::string line;
    //lee una línea del fichero (sin el carácter \n) y la guarda en line
    while (std::getline(infile, line))//while continúa hasta EOF o error de lectura
    {
        std::string newLine;//construimos la versión transformada de line
        size_t pos = 0;//índice desde donde buscamos.
        while (true)
        {
            size_t found = line.find(s1, pos);//busca s1 a partir de pos
            if (found == std::string::npos)//Si no encuentra, devuelve std::string::npos (constante especial)
            {
                //Si no hay más ocurrencias: se añade el resto line.substr(pos) y se sale
                newLine += line.substr(pos);
                break;
            }
            //Si encuentra s1 en found
            newLine += line.substr(pos, found - pos);//lo que hay antes de la coincidencia → lo concatenamos.
            newLine += s2;//añadimos la cadena de reemplazo.
            pos = found + s1.length();//avanzamos pos justo después de la coincidencia
                                        //para evitar volverse a encontrar la misma ocurrencia.
        }
        outfile << newLine;//Se escribe newLine en el archivo de salida.
        if (!infile.eof())
            outfile << std::endl;
        //La condición if (!infile.eof()) outfile << std::endl;
        //intenta preservar los saltos de línea tal como estaban en el archivo original,
        //si no es la última línea le añade \n
    }

    infile.close();
    outfile.close();
    //close() cierra los streams
    return 0;

}

//A TENER EN CUNETA ESTASNOTAS ADICIONALES PARA BUENA PRACTICA

// Por qué chequeamos s1.empty(): si s1 == "", entonces find("", pos) devuelve pos,
// y pos = found + s1.length() no avanza (s1.length() == 0) → bucle infinito.

// c_str(): en C++98 era necesario pasar const char* a ifstream/ofstream.
// En C++11+ muchas implementaciones aceptan std::string directamente. c_str() no está mal y es compatible.

// Eficiencia: concatenar strings repitiendo puede costar copias;
// si trabajas con archivos grandes podrías optimizar reservando newLine.reserve(...)
// o procesando y escribiendo por pedazos. Para este ejercicio la solución estándar es suficiente.

// Manejo de errores: el programa devuelve 1 en errores;
// imprime mensajes en std::cerr. Eso es la convención esperada.

// Alternativas: podrías procesar el archivo entero como un solo std::string
// y hacer reemplazos globales, pero eso usa más memoria.
// El tratamiento por líneas es más controlado y típico para este ejercicio.