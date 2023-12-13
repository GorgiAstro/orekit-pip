#ifndef org_orekit_estimation_iod_IodGibbs_H
#define org_orekit_estimation_iod_IodGibbs_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace estimation {
      namespace measurements {
        class PV;
        class Position;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_8ba9fe7a847cecad,
            mid_estimate_fd8045d0690ebcec,
            mid_estimate_a736219fd2ea09d6,
            mid_estimate_10daf50d426fd970,
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
