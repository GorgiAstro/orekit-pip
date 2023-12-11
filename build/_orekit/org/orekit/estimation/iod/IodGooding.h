#ifndef org_orekit_estimation_iod_IodGooding_H
#define org_orekit_estimation_iod_IodGooding_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class AngularAzEl;
        class AngularRaDec;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
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

        class IodGooding : public ::java::lang::Object {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_estimate_0e8246cd2bf5a092,
            mid_estimate_aeed4500e99e945e,
            mid_estimate_12e348f8c50cde24,
            mid_estimate_a6ce26518bf6712c,
            mid_estimate_24ec2b6d24d65f1f,
            mid_estimate_b48f6346e0ac5fe4,
            mid_getRange1_557b8123390d8d0c,
            mid_getRange2_557b8123390d8d0c,
            mid_getRange3_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IodGooding(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IodGooding(const IodGooding& obj) : ::java::lang::Object(obj) {}

          IodGooding(jdouble);

          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::AngularAzEl &, const ::org::orekit::estimation::measurements::AngularAzEl &, const ::org::orekit::estimation::measurements::AngularAzEl &, jdouble, jdouble) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::AngularRaDec &, const ::org::orekit::estimation::measurements::AngularRaDec &, const ::org::orekit::estimation::measurements::AngularRaDec &, jdouble, jdouble) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::AngularAzEl &, const ::org::orekit::estimation::measurements::AngularAzEl &, const ::org::orekit::estimation::measurements::AngularAzEl &, jdouble, jdouble, jint, jboolean) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::orekit::estimation::measurements::AngularRaDec &, const ::org::orekit::estimation::measurements::AngularRaDec &, const ::org::orekit::estimation::measurements::AngularRaDec &, jdouble, jdouble, jint, jboolean) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jint, jboolean) const;
          jdouble getRange1() const;
          jdouble getRange2() const;
          jdouble getRange3() const;
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
        extern PyType_Def PY_TYPE_DEF(IodGooding);
        extern PyTypeObject *PY_TYPE(IodGooding);

        class t_IodGooding {
        public:
          PyObject_HEAD
          IodGooding object;
          static PyObject *wrap_Object(const IodGooding&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
