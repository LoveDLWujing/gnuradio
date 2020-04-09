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

#include <gnuradio/digital/diff_phasor_cc.h>
// pydoc.h is automatically generated in the build directory
#include <diff_phasor_cc_pydoc.h>

void bind_diff_phasor_cc(py::module& m)
{

    using diff_phasor_cc    = ::gr::digital::diff_phasor_cc;


    py::class_<diff_phasor_cc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<diff_phasor_cc>>(m, "diff_phasor_cc", D(diff_phasor_cc))

        .def(py::init(&diff_phasor_cc::make),
           D(diff_phasor_cc,make)
        )
        



        ;




}







