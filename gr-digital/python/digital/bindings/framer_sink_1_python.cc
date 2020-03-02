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

#include <gnuradio/digital/framer_sink_1.h>

void bind_framer_sink_1(py::module& m)
{
    using framer_sink_1    = gr::digital::framer_sink_1;


    py::class_<framer_sink_1,gr::sync_block,
        std::shared_ptr<framer_sink_1>>(m, "framer_sink_1")

        .def(py::init(&framer_sink_1::make),
           py::arg("target_queue") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<framer_sink_1> p){
            return p->to_basic_block();
        })
        ;


} 
