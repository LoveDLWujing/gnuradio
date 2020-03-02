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

#include <gnuradio/digital/hdlc_framer_pb.h>

void bind_hdlc_framer_pb(py::module& m)
{
    using hdlc_framer_pb    = gr::digital::hdlc_framer_pb;


    py::class_<hdlc_framer_pb,gr::sync_block,
        std::shared_ptr<hdlc_framer_pb>>(m, "hdlc_framer_pb")

        .def(py::init(&hdlc_framer_pb::make),
           py::arg("frame_tag_name") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<hdlc_framer_pb> p){
            return p->to_basic_block();
        })
        ;


} 
