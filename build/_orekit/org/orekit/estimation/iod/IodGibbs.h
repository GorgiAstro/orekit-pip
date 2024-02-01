#ifndef org_orekit_estimation_iod_IodGibbs_H
#define org_orekit_estimation_iod_IodGibbs_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class PV;
        class Position;
      }
    }
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        class IodGibbs : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1ad26e8c8c0cd65b,
            mid_estimate_f581f00f88459716,
            mid_estimate_2067f7ddf9d7f8c5,
            mid_estimate_376f753fc058ddc0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IodGibbs(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IodGibbs(const IodGibbs& obj) : ::java::lang::Object(obj) {}

          IodGibbs(jdouble);

          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::PV &, const ::org::orekit::estimation::measurements::PV &, const ::org::orekit::estimation::measurements::PV &) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::Position &, const ::org::orekit::estimation::measurements::Position &, const ::org::orekit::estimation::measurements::Position &) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {
        extern PyType_Def PY_TYPE_DEF(IodGibbs);
        extern PyTypeObject *PY_TYPE(IodGibbs);

        class t_IodGibbs {
        public:
          PyObject_HEAD
          IodGibbs object;
          static PyObject *wrap_Object(const IodGibbs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
