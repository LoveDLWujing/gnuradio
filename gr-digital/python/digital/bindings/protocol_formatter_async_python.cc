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

#include <gnuradio/digital/protocol_formatter_async.h>
// pydoc.h is automatically generated in the build directory
#include <protocol_formatter_async_pydoc.h>

void bind_protocol_formatter_async(py::module& m)
{

    using protocol_formatter_async    = ::gr::digital::protocol_formatter_async;


    py::class_<protocol_formatter_async, gr::block, gr::basic_block,
        std::shared_ptr<protocol_formatter_async>>(m, "protocol_formatter_async", D(protocol_formatter_async))

        .def(py::init(&protocol_formatter_async::make),
           py::arg("format"),
           D(protocol_formatter_async,make)
        )
        



        ;




}







