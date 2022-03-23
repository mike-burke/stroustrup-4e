_(a) Briefly describe the design aims of C++ and (b) comment on the extent to which C++ meets those._

(a) The design aims of C++ are to provide a language 'close to the machine' while also being 'close to the problem'. The language should allow low-level interaction with machine facilities and support high performance code generation (equivalent to hand-crafted ASM). At the same time, the programming styles supported by the language should allow for code to be expressed in terms of the problem domain.

(b) C++ is used extensively in embedded systems and for high-performance workloads; this speaks to its success in operating 'close to the machine'. It supports direct integration with C libraries; C is typically used for low-level device drivers and to expose hardware-specific functionality. The programming styles supported by C++ (procedural, object-oriented, generic) allow for a high level of expression; the variety of styles offered mean that solutions can be articulated in a style that best fits; simple algorithms don't need the baggage of classes, for example. 



