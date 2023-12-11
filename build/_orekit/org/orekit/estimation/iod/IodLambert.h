#ifndef org_orekit_estimation_iod_IodLambert_H
#define org_orekit_estimation_iod_IodLambert_H

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
    namespace orbits {
      class Orbit;
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

        class IodLambert : public ::java::lang::Object {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_estimate_97d585120c036b5c,
            mid_estimate_a8ed81a24acd9429,
            mid_estimate_e55c506cadfed3ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IodLambert(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IodLambert(const IodLambert& obj) : ::java::lang::Object(obj) {}

          IodLambert(jdouble);

          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, jboolean, jint, const ::org::orekit::estimation::measurements::PV &, const ::org::orekit::estimation::measurements::PV &) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, jboolean, jint, const ::org::orekit::estimation::measurements::Position &, const ::org::orekit::estimation::measurements::Position &) const;
          ::org::orekit::orbits::Orbit estimate(const ::org::orekit::frames::Frame &, jboolean, jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(IodLambert);
        extern PyTypeObject *PY_TYPE(IodLambert);

        class t_IodLambert {
        public:
          PyObject_HEAD
          IodLambert object;
          static PyObject *wrap_Object(const IodLambert&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
