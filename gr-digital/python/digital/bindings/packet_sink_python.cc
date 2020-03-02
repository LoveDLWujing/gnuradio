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

#include <gnuradio/digital/packet_sink.h>

void bind_packet_sink(py::module& m)
{
    using packet_sink    = gr::digital::packet_sink;


    py::class_<packet_sink,gr::sync_block,
        std::shared_ptr<packet_sink>>(m, "packet_sink")

        .def(py::init(&packet_sink::make),
           py::arg("sync_vector"), 
           py::arg("target_queue"), 
           py::arg("threshold") = -1 
        )
        

        .def("carrier_sensed",&packet_sink::carrier_sensed)
        .def("to_basic_block",[](std::shared_ptr<packet_sink> p){
            return p->to_basic_block();
        })
        ;


} 
