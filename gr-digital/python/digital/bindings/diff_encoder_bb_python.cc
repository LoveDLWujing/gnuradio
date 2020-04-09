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

#include <gnuradio/digital/diff_encoder_bb.h>
// pydoc.h is automatically generated in the build directory
#include <diff_encoder_bb_pydoc.h>

void bind_diff_encoder_bb(py::module& m)
{

    using diff_encoder_bb    = ::gr::digital::diff_encoder_bb;


    py::class_<diff_encoder_bb, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<diff_encoder_bb>>(m, "diff_encoder_bb", D(diff_encoder_bb))

        .def(py::init(&diff_encoder_bb::make),
           py::arg("modulus"),
           D(diff_encoder_bb,make)
        )
        



        ;




}







