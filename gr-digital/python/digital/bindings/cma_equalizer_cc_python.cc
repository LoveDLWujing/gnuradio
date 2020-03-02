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

#include <gnuradio/digital/cma_equalizer_cc.h>

void bind_cma_equalizer_cc(py::module& m)
{
    using cma_equalizer_cc    = gr::digital::cma_equalizer_cc;


    py::class_<cma_equalizer_cc,gr::sync_decimator,
        std::shared_ptr<cma_equalizer_cc>>(m, "cma_equalizer_cc")

        .def(py::init(&cma_equalizer_cc::make),
           py::arg("num_taps"), 
           py::arg("modulus"), 
           py::arg("mu"), 
           py::arg("sps") 
        )
        

        .def("set_taps",&cma_equalizer_cc::set_taps,
            py::arg("taps") 
        )
        .def("taps",&cma_equalizer_cc::taps)
        .def("gain",&cma_equalizer_cc::gain)
        .def("set_gain",&cma_equalizer_cc::set_gain,
            py::arg("mu") 
        )
        .def("modulus",&cma_equalizer_cc::modulus)
        .def("set_modulus",&cma_equalizer_cc::set_modulus,
            py::arg("mod") 
        )
        .def("to_basic_block",[](std::shared_ptr<cma_equalizer_cc> p){
            return p->to_basic_block();
        })
        ;


} 
