/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/packet_header_ofdm.h>

void bind_packet_header_ofdm(py::module& m)
{
    using packet_header_ofdm    = gr::digital::packet_header_ofdm;


    py::class_<packet_header_ofdm,gr::digital::packet_header_default,
        std::shared_ptr<packet_header_ofdm>>(m, "packet_header_ofdm")

        .def(py::init(&packet_header_ofdm::make),
           py::arg("occupied_carriers"), 
           py::arg("n_syms"), 
           py::arg("len_tag_key") = "packet_len", 
           py::arg("frame_len_tag_key") = "frame_len", 
           py::arg("num_tag_key") = "packet_num", 
           py::arg("bits_per_header_sym") = 1, 
           py::arg("bits_per_payload_sym") = 1, 
           py::arg("scramble_header") = false 
        )
        

        .def("header_formatter",&packet_header_ofdm::header_formatter,
            py::arg("packet_len"), 
            py::arg("out"), 
            py::arg("tags") 
        )
        .def("header_parser",&packet_header_ofdm::header_parser,
            py::arg("header"), 
            py::arg("tags") 
        )
        ;


} 
