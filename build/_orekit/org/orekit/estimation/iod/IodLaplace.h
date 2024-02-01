#ifndef org_orekit_estimation_iod_IodLaplace_H
#define org_orekit_estimation_iod_IodLaplace_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class AngularAzEl;
        class AngularRaDec;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
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

        class IodLaplace : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1ad26e8c8c0cd65b,
            mid_estimate_d3a935233cda59ab,
            mid_estimate_5767f052c979bd65,
            mid_estimate_6b0243013bab8dcb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IodLaplace(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IodLaplace(const IodLaplace& obj) : ::java::lang::Object(obj) {}

          IodLaplace(jdouble);

          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::AngularAzEl &, const ::org::orekit::estimation::measurements::AngularAzEl &, const ::org::orekit::estimation::measurements::AngularAzEl &) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::AngularRaDec &, const ::org::orekit::estimation::measurements::AngularRaDec &, const ::org::orekit::estimation::measurements::AngularRaDec &) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
        extern PyType_Def PY_TYPE_DEF(IodLaplace);
        extern PyTypeObject *PY_TYPE(IodLaplace);

        class t_IodLaplace {
        public:
          PyObject_HEAD
          IodLaplace object;
          static PyObject *wrap_Object(const IodLaplace&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
