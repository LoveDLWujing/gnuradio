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

#include <gnuradio/digital/glfsr_source_f.h>
// pydoc.h is automatically generated in the build directory
#include <glfsr_source_f_pydoc.h>

void bind_glfsr_source_f(py::module& m)
{

    using glfsr_source_f    = ::gr::digital::glfsr_source_f;


    py::class_<glfsr_source_f, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<glfsr_source_f>>(m, "glfsr_source_f", D(glfsr_source_f))

        .def(py::init(&glfsr_source_f::make),
           py::arg("degree"),
           py::arg("repeat") = true,
           py::arg("mask") = 0,
           py::arg("seed") = 1,
           D(glfsr_source_f,make)
        )
        




        .def("period",&glfsr_source_f::period,
            D(glfsr_source_f,period)
        )


        .def("mask",&glfsr_source_f::mask,
            D(glfsr_source_f,mask)
        )

        ;




}







