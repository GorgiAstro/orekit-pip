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
            mid_init$_17db3a65980d3441,
            mid_estimate_9f4edff2f4b2c1d0,
            mid_estimate_e2eca386302ad5d5,
            mid_estimate_10bff6c739149e21,
            mid_estimate_f0cd4f5546c29d38,
            mid_estimate_e386e2d1a757ec14,
            mid_estimate_438460b781bc8282,
            mid_getRange1_dff5885c2c873297,
            mid_getRange2_dff5885c2c873297,
            mid_getRange3_dff5885c2c873297,
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
