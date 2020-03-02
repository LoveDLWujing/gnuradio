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

#include <gnuradio/digital/costas_loop_cc.h>

void bind_costas_loop_cc(py::module& m)
{
    using costas_loop_cc    = gr::digital::costas_loop_cc;


    py::class_<costas_loop_cc,gr::sync_block,
        std::shared_ptr<costas_loop_cc>>(m, "costas_loop_cc")

        .def(py::init(&costas_loop_cc::make),
           py::arg("loop_bw"), 
           py::arg("order"), 
           py::arg("use_snr") = false 
        )
        

        .def("error",&costas_loop_cc::error)
        .def("to_basic_block",[](std::shared_ptr<costas_loop_cc> p){
            return p->to_basic_block();
        })
        ;


} 
