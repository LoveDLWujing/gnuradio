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

#include <gnuradio/digital/pn_correlator_cc.h>

void bind_pn_correlator_cc(py::module& m)
{
    using pn_correlator_cc    = gr::digital::pn_correlator_cc;


    py::class_<pn_correlator_cc,gr::sync_decimator,
        std::shared_ptr<pn_correlator_cc>>(m, "pn_correlator_cc")

        .def(py::init(&pn_correlator_cc::make),
           py::arg("degree"), 
           py::arg("mask") = 0, 
           py::arg("seed") = 1 
        )
        

        .def("to_basic_block",[](std::shared_ptr<pn_correlator_cc> p){
            return p->to_basic_block();
        })
        ;


} 
